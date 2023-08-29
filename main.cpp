#include <iostream>
#include <string.h>

#include "funciones.h"
#include "articulo.h"

using namespace std;

int main()
{
    const int totalArticulos = 3;
    sArticulo articulos[totalArticulos];
    bool salir=false;
    char opcion;
    inicializarRegistros(articulos,totalArticulos);
    while(!salir){
        sArticulo articulo;
        system("cls");
        encabezado();
        menu();
        cout<<" Ingrese una opcion: ";
        cin>>opcion;
        switch(opcion){
            case 'A':
            case 'a':
                cin.ignore();
                cargarArticulo(&articulo);
                mostrarArticulo(articulo);
                system("pause");
                break;
            case 'C':
            case 'c':
                cin.ignore();
                cargarArticulos(articulos,totalArticulos);
                break;
            case 'M':
            case 'm':
                mostrarArticulos(articulos,totalArticulos);
                system("pause");
                break;
            case 'B':
            case 'b':
                cin.ignore();
                int pos;
                char codigo[6];
                cout<<" "<<endl;
                cout<<"- - - - - - - - - - - - - - - - -"<<endl;
                cout<<" "<<endl;
                cout<<" BUSCAR CODIGO de ARTICULO: ";
                cin.getline(codigo,6);
                pos=buscarCodigo(articulos,totalArticulos,codigo);
                cout<<" "<<endl;
                resultadoBusqueda(articulos,pos);
                system("pause");
                break;
            case 'Q':
            case 'q':
                cin.ignore();
                cargarArticulosFiltro(articulos,totalArticulos);
                break;
            case 'V':
            case 'v':
                ingresarVenta(articulos,totalArticulos);
                break;
            case 'E':
            case 'e':
                inicializarRegistros(articulos,totalArticulos);
                cout<<" "<<endl;
                cout<<"- - - - - - - - - - - - - - - "<<endl;
                cout<<" "<<endl;
                cout<<" REGISTROS ELIMINADOS"<<endl;
                cout<<" "<<endl;
                cout<<"- - - - - - - - - - - - - - - "<<endl;
                cout<<" "<<endl;
                system("pause");
                break;
            case 'S':
            case 's':
                salir=true;
                cout<<" "<<endl;
                cout<<" - - - - - - - - - - - - - - - - - - -"<<endl;
                cout<<" "<<endl;
                cout<<" Gracias por usar MAGIC SHOP"<<endl;
                cout<<" "<<endl;
                cout<<" - - - - - - - - - - - - - - - - - - -"<<endl;
                cout<<" "<<endl;
                system("pause");
                break;
            default:
                cout<<" "<<endl;
                cout<<" Opcion INVALIDA. Por favor ingrese una opcion correcta."<<endl;
                cout<<" "<<endl;
                system("pause");
        }
    }

    return 0;
}
