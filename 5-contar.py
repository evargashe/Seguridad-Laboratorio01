import collections

archivo=open("HERALDOSNEGROS_pre.txt","r")
linea=archivo.read(1)
array=[]
while linea!='':
    """ print(linea, end='') """
    array.append(linea)
    linea=archivo.read(1)
archivo.close()
array.sort()

print(collections.Counter(array),end='') 


a='café'.encode('utf-8')
print(a)