import vtk
from vtk.util import numpy_support
import os
import numpy


# carga los archivos DICOM
DirectorioDICOM = "/home/microse/proyecto_MarchingCubes/vhm_head"
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

# ArregloDicom = ImagenVtkaNumpy(umbral.GetOutput(), ConstPixelDims)

dicom = vtk.vtkDiscreteMarchingCubes()
dicom.SetInputConnection(umbral.GetOutputPort())
dicom.GenerateValues(1, 1, 1)
dicom.Update()


creador = vtk.vtkSTLWriter()
creador.SetInputConnection(dicom.GetOutputPort())
creador.SetFileTypeToBinary()
creador.SetFileName("craneo.stl")
creador.Write()



