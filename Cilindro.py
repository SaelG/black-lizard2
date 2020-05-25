#!/usr/bin/env python

# Este es un ejemplo simple que muestra como hacer renderizados básicos
# y la creación del pipeline.

import vtk
# El modulo de colores define varios colores utiles
from vtk.util.colors import tomato


# Crea un modelo de cilindro poligonal con ocho caras de circunferencia.
cylinder = vtk.vtkCylinderSource()
cylinder.SetResolution(8)

# El mapper se encarga de introducir la geometría en la biblioteca
# de graficos. Puede también hacer mapeo de colores, si los escalares
# y otros atributos son definidos.
cylinderMapper = vtk.vtkPolyDataMapper()
cylinderMapper.SetInputConnection(cylinder.GetOutputPort())

# El actor es un mecanismo de agrupamiento: ademas de la geometria (mapper),
# se tiene una propiedad, la transformación de matrices, y/o el mapa de textura.
# Se define el color y su rotacion en -22.5 grados.
cylinderActor = vtk.vtkActor()
cylinderActor.SetMapper(cylinderMapper)
cylinderActor.GetProperty().SetColor(tomato)
cylinderActor.RotateX(30.0)
cylinderActor.RotateY(-45.0)

# Crea la esctructura de graficas. Los renders de renderizado dentro
# de la ventana de render. El interactor de ventana de render captura los eventos de
# mouse y realiza la manipulacion adecuada de la camara o actor dependiendo
# de la naturaleza de los eventos.
ren = vtk.vtkRenderer()
renWin = vtk.vtkRenderWindow()
renWin.AddRenderer(ren)
iren = vtk.vtkRenderWindowInteractor()
iren.SetRenderWindow(renWin)

# Agrega los actores al renderizado, coloca el fondo y tamanio
ren.AddActor(cylinderActor)
ren.SetBackground(0.1, 0.2, 0.4)
renWin.SetSize(200, 200)

# Inicialaiza al interactor. Tiene que ser llamado antes
# de un un loop de evento.
iren.Initialize()

# Se hace un pequenio zoom mediantte el aceso a la camara e invocando
# un metodo "Zoom".
ren.ResetCamera()
ren.GetActiveCamera().Zoom(1.5)
renWin.Render()

# Inicia el loop de evento
iren.Start()