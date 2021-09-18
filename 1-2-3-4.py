
def normalize(s):
    replacements = (
        ("á", "a"),
        ("é", "e"),
        ("í", "i"),
        ("ó", "o"),
        ("ú", "u"),
    )
    for a, b in replacements:
        s = s.replace(a, b).replace(a.upper(), b.upper())
    return s


punto='.'
coma=','
puntoYcoma=';'
exclaA='¡'
exclaB='!'

with open('1.txt', 'r', encoding='utf-8') as file:
    linea=file.read(1)
    archivo2=open("HERALDOSNEGROS_pre.txt","w")
    while linea!='':

        a=normalize(linea)
        """SUSTITUIR LETRAS"""
        if a=='j':
            x='i'
            archivo2.write(x.upper())
        elif a == 'h':
            x='i'
            archivo2.write(x.upper())
        elif a == 'ñ':
            x='n'
            archivo2.write(x.upper())
        elif a == 'k':
            x='l'
            archivo2.write(x.upper())
        elif a == 'u':
            x='v'
            archivo2.write(x.upper())
        elif a == 'w':
            x='v'
            archivo2.write(x.upper())
        elif a == 'y':
            x='z'
            archivo2.write(x.upper())
        #ELIMINANDO ESPACIO Y SIMBOLOS
        elif a == ' ':
            archivo2.write('')
        elif a == punto or a == puntoYcoma or a == coma or a == exclaA or a == exclaB:
            archivo2.write('')
        else:
            archivo2.write(a.upper())


        linea=file.read(1)

    file.close() 