/* #include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <map>
#include <wchar.h>
#include <algorithm>
#include <locale>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{   
    setlocale(LC_ALL, "spanish");
    string nombreArchivo = "1.txt";
    ifstream archivo;
    archivo.open(nombreArchivo);
    char linea;
    char e=(char)233;
    // Obtener línea de archivo, y almacenar contenido en "linea"
    ofstream archivo2;
    archivo2.open("HERALDOSNEGROS_pre.txt");

    while (!archivo.eof()) {
        // Lo vamos imprimiendo
        archivo.get(linea);
        // SUSTITUCIONES Y CONVERTIR A MAYUSCULAS
        if(linea =='j')
        {
            char a=toupper('i');
            archivo2 << a;
        }
        else if(linea == 'h')
        {
            char a=toupper('i');
            archivo2 << a;
        }
        else if(linea == 'k')
        {
            char a=toupper('l');
            archivo2 << a;
        }
        else if(linea == 'u')
        {
            char a=toupper('v');
            archivo2 << a;
        }
        else if(linea == 'w')
        {
            char a=toupper('v');
            archivo2 << a;
        }
        else if(linea == 'y')
        {
            char a=toupper('z');
            archivo2 << a;
        }
            
        // ELIMINAR TILDES

        /* if(linea == 'á')
        {
            cout<< 'a';
        } */

        // BORRAR ESPACIO Y SIGNOS DE PUNTUACION
        /* else if(linea ==' ')
        {
            continue;
        }
        else if(linea == '.' || linea == ',' || linea == '!' || linea == ';')
        {
            continue;
        }
        else
        {
            char a=toupper(linea);
            archivo2 << a;
            cout<< a;
        }
    }
    for(int i=0;i<255;i++)
    {
        cout<< i <<"-";
        char a;
        a=i;
        cout<<a<< "    ";
    }  
    cout<<endl;
    cout<<'á';


}
 */

#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
 
int main()
{
    // UTF-8 data. The character U+1d10b, musical sign segno, does not fit in UCS2
    std::string utf8 = u8"z\u6c34\U0001d10b";
 
    // the UTF-8 / UTF-16 standard conversion facet
    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> utf16conv;
    std::u16string utf16 = utf16conv.from_bytes(utf8);
    std::cout << "UTF16 conversion produced " << utf16.size() << " code units:\n";
    for (char16_t c : utf16)
        std::cout << std::hex << std::showbase << c << '\n';
 
    // the UTF-8 / UCS2 standard conversion facet
    std::wstring_convert<std::codecvt_utf8<char16_t>, char16_t> ucs2conv;
    try {
        std::u16string ucs2 = ucs2conv.from_bytes(utf8);
    } catch(const std::range_error& e) {
        std::u16string ucs2 = ucs2conv.from_bytes(utf8.substr(0, ucs2conv.converted()));
        std::cout << "UCS2 failed after producing " << std::dec << ucs2.size()<<" characters:\n";
        for (char16_t c : ucs2)
            std::cout << std::hex << std::showbase << c << '\n';
    }
    std::cout<<" hol";
}