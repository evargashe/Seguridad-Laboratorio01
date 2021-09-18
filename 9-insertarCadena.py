import os, stat

import shutil

from os import remove


filename="HERALDOSNEGROS_pre.txt"
fileaux="temporal.txt"
aux=open(fileaux,'w')



i=0
with open(filename, "r") as f:
    linea=f.read(1)
    while linea!='':
        if i==20:
            aux.write("AQUI")
            i=0
        else:
            i=i+1
            aux.write(linea)
            linea=f.read(1)



array=[]

remove(filename)


aux=open(fileaux,'r')
linea=aux.read(1)
f=open("HERALDOSNEGROS_pre.txt",'w')
while linea!='':
    print(linea,end='')
    array.append(linea)
    f.write(linea)
    linea=aux.read(1)

print(len(array))

tam=len(array)%4
while tam!=0:
    f=open("HERALDOSNEGROS_pre.txt",'a')
    f.write('X')
    array.append('X')
    tam=len(array)%4
