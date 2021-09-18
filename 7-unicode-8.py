

filename="HERALDOSNEGROS_pre.txt"



tempFile = open( filename, 'r+' )

linea=tempFile.read(1)
array=[]
while linea!='':
    array.append(linea.encode('utf-8'))
    linea=tempFile.read(1)

print(array)




