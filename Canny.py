
# -*- coding: utf-8 -*-
"""
Created on Wed Jun  7 17:43:54 2017

@author: HPC_MICROSE_1
"""

import scipy.misc, numpy
from skimage import feature
from scipy.misc.pilutil import Image

# abre la imagen y convierte a escala de grises
a = Image.open('C:\\Users\\ArturoFrancisco\\OneDrive\\Documentos\\Proyecto_uT\\Test_Images\\test3.bmp').convert('L')
# convierte a un ndarray
a = scipy.misc.fromimage(a)
# realiza el filtro de detector de bordes Canny 
b = feature.canny(a, sigma=1)
# b es convertido de un ndarray a una imagen
b = scipy.misc.toimage(b)
# almacena b como canny_output.png
b.save('C:\\Users\\ArturoFrancisco\\OneDrive\\Documentos\\Proyecto_uT\\Test_Images\\test3_output.bmp')