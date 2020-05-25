import vtk
from vtk.util import numpy_support
import os
import numpy
import plotly
from plotly.graph_objs import *
plotly.plotly.sign_in("somada141", "1t2qb5b9y1")

def ImagenVtkaNumpy(imagen, pixelDims):
	puntos = imagen.GetPointData()
	arreglo = puntos.GetArray(0)
	ArregloDicom = numpy_support.vtk_to_numpy(arreglo)
	ArregloDicom = ArregloDicom.reshape(pixelDims, order = 'F')

	return ArregloDicom

def plotHeatmap(array, name="plot"):
	data = Data([Heatmap(z=array,scl='Greys')])

	layout = Layout(autosize=False,title=name)

	fig = Figure(data=data, layout=layout)

	return = plotly.plotly.iplot

# carga los archivos DICOM
DirectorioDICOM = "C:\\Users\\HPC_MICROSE_1\\Documents\\ProyectoMicrotografo\\ReconstruccionCraneo3D\\vhm_head"
lector = vtk.vtkDICOMImageReader()
lector.SetDirectoryName(DirectorioDICOM)
lector.Update()

_extent = lector.GetDataExtent()
ConstPixelDims = [_extent[1]-_extent[0]+1, _extent[3]-_extent[2]+1, _extent[5]-_extent[4]+1]

ConstPixelSpacing = lector.GetPixelSpacing()

umbral = vtk.vtkImageThreshold()
umbral.SetInputConnection(lector.GetOutputPort())
umbral.ThresholdByLower(400)
umbral.ReplaceInOn()
umbral.SetInValue(0) 
umbral.ReplaceOutOn()
umbral.SetOutValue(1)
umbral.Update()

ArregloDicom = ImagenVtkaNumpy(umbral.GetOutput(), ConstPixelDims)

dicom = vtk.vtkDiscreteMarchingCubes()
dicom.SetInputConnection(umbral.GetOutputPort())
dicom.GenerateValues(1, 1, 1)
dicom.Update()
"""
mapeador = vtk.vtkPolyDataMapper()
mapeador.SetInputConnection(dicom.GetOutputPort())

actor = vtk.vtkActor()
actor.SetMapper(mapeador)

renderer = vtk.vtkRenderer()
renderer.AddActor(actor)
renderer.SetBackground(1.0, 1.0, 1.0)

camara = renderer.MakeCamera()
camara.SetPosition(-500.0,245.5,122.0)
camara.SetFocalPoint(301.0,245.5,122.0)
camara.SetViewAngle(30.0)
camara.SetRoll(-90.0)
renderer.SetActiveCamera(camara)
"""

creador = vtk.vtkSTLWriter()
creador.SetInputConnection(dicom.GetOutputPort())
creador.SetFileTypeToBinary()
creador.SetFileName("prueba1.stl")
creador.Write()



