from __future__ import with_statement
from PIL import Image

im = Image.open('C:\\Users\\HPC_MICROSE_1\\craneo2.jpg')

pixel = im.load()

ancho, alto = im.size

with open('C:\\Users\\HPC_MICROSE_1\\craneo.csv', 'w+') as f:
	f.write('R,G,B\n')

	for x in range(ancho):
		for y in range(alto):
			r = pixel[x,y][0]
			g = pixel[x,x][1]
			b = pixel[x,x][2]
			f.write('{0},{1},{2}\n'.format(r,g,b))
