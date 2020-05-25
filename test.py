#!/usr/bin/env python

# este es un ejemplo simple que muestra como hacer
# renderizados basicos, y la creacion del pipeline.

import vtk
# este modulo define varios colores utiles
from vtk.util.colors import tomato

# crea un modelo de cilindro poligonal con ocho caras
cilindro = vtk.vtkCylinderSource()
cilindro.setResolution(8)

# el mapper se encarga de introducir la geometría en la
# biblioteca de graficos. Puede hacer mapeo de colores también,
# si los escalares y otros atributos son definidos.
cylinderMapper = vtk.vtkPolyDataMapper()
cylinderMapper.SetInput Connection(cylinder.GetOutputPort())

# el actor es un mecanismo de agrupamiento: además de la gemoetria
# (mapper), se tiene una propiedad, la transformacion de matrices, 
# y/o el mapa de textura.
# se define el color y su rotacion en -22.5 grados.
cylinderActor = vtk.vtkActor
cylinderActor.SetMapper(cylinderMapper)
cylinderActor.SetMapper(cylinderMapper)
cylinderActor.GetProperty().SetColor(tomato)
cylinderActor.RotateX(30.0)
cylinderActor.RotateY(-45.0)

# crea la estructura de graficas. los renders de renderizado dentro
# de la ventana de render. el interactor de ventana de render captura
# los eventos del mouse y realiza adecuada de la camara
ren = vtk.vtkRenderer()
renWin = vtk.vtkRenderWindow()
renWin.AddRenderer(ren)
iren = vtk.vtkRenderWindowInteractor()
iren.setRenderWindow(renWin)

# agrega los actores al renderizado, establece el fondo y tamanio
ren.AddActor(cylinderActor)
ren.SetBackground(0.1, 0.2, 0.4)
renWin.SetSize(200, 200)

# inicializa al interactor. tiene que ser llamado antes
# de un loop de evento
iren.Initialize()

# se hace un pequenio zoom mediante el acceso a la camara e
# invocando un metodo "Zoom".
ren.ResetCamera()
ren.GetActiveCamera().Zoom(1.5)
renWin.Render()

# inicia el loop de evento
iren.Start()


