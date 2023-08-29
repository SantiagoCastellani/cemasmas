#include <iostream>
#include <string.h>

#include "funciones.h"
#include "articulo.h"

using namespace std;

//FUNCION ENCABEZADO
void encabezado(){
    cout<<" "<<endl;
    cout<<"\t- - MAGIC SHOP - -"<<endl;
    cout<<" "<<endl;
    cout<<" * * * Sistema de Gestion de Ventas * * *"<<endl;
    cout<<" "<<endl;
}

// FUNCION MENU
void menu(){
    cout<<" "<<endl;
    cout<<" - - MENU - -"<<endl;
    cout<<" "<<endl;
    cout<<" *** Elija una opcion ***"<<endl;
    cout<<" "<<endl;
    cout<<" A -> CARGAR Y MOSTRAR UN ARTICULO (Consigna 1)"<<endl;
    cout<<" "<<endl;
    cout<<" C -> CARGAR LOTE de ARTICULOS  (Consigna 2)"<<endl;
    cout<<" "<<endl;
    cout<<" M -> MOSTRAR LOTE de ARTICULOS  (Consigna 2)"<<endl;
    cout<<" "<<endl;
    cout<<" B -> BUSCAR CODIGO DE ARTICULO  (Consigna 3 y 4)"<<endl;
    cout<<" "<<endl;
    cout<<" Q -> CARGAR LOTE - CODIGOS NO REPETIDOS  (Consigna 5)"<<endl;
    cout<<" "<<endl;
    cout<<" V -> INGRESAR VENTA  (Consigna 6)"<<endl;
    cout<<" "<<endl;
    cout<<" E -> ELIMINAR REGISTROS  (Bonus Track)"<<endl;
    cout<<" "<<endl;
    cout<<" S -> SALIR - (Cerrar Programa)"<<endl;
    cout<<" "<<endl;
};

//FUNCION CARGAR ARTICULOS
void cargarArticulos(sArticulo articulos[],int tam){
     cout<<" "<<endl;
     cout<<"- - - - - - - - - - - - - - - - - - - - - -"<<endl;
     cout<<" "<<endl;
     cout<<" CARGA DE ARTICULOS"<<endl;
     for(int x=0;x<tam;x++){
        cout<<" "<<endl;
        cout<<" Cargando articulo..."<<endl;
        cout<<" "<<endl;
        cout<<" CODIGO de ARTICULO: ";
        cin.getline(articulos[x].codArt,6);
        cout<<" DESCRIPCION: ";
        cin.getline(articulos[x].descripcion,31);
        cout<<" PRECIO: ";
        cin>>articulos[x].precio;
        cout<<" STOCK: ";
        cin>>articulos[x].stock;
        cin.ignore();
     }
     cout<<" "<<endl;
     cout<<" Articulos CARGADOS"<<endl;
     cout<<" "<<endl;
     cout<<"- - - - - - - - - - - - - - - - - - - - - -"<<endl;
     cout<<" "<<endl;
     system("pause");
};

//FUNCION MOSTRAR ARTICULOS
void mostrarArticulos(sArticulo articulos[],int tam){
     cout<<" "<<endl;
     cout<<"- - - - - - - - - - - - - - - - - - - - - -"<<endl;
     cout<<" "<<endl;
     cout<<" MOSTRANDO ARTICULOS CARGADOS"<<endl;
     cout<<" "<<endl;
     for(int x=0;x<tam;x++){
        cout<<" Articulo "<<x+1<<endl;
        cout<<" CODIGO de ARTICULO: "<<articulos[x].codArt<<endl;
        cout<<" DESCRIPCION: "<<articulos[x].descripcion<<endl;
        cout<<" PRECIO: $"<<articulos[x].precio<<endl;
        cout<<" STOCK: "<<articulos[x].stock<<endl;
        cout<<" "<<endl;
     }
     cout<<"- - - - - - - - - - - - - - - - - - - - - -"<<endl;
     cout<<" "<<endl;
};

//CARGAR 1 ARTICULO
void cargarArticulo(sArticulo * articulo){
    cout<<" "<<endl;
    cout<<"- - - - - - - - - - - - - - - - - - - - - -"<<endl;
    cout<<" "<<endl;
    cout<<" Cargando Articulo..."<<endl;
    cout<<" "<<endl;
    cout<<" CODIGO de ARTICULO: ";
    cin.getline(articulo->codArt,6);
    cout<<" DESCRIPCION: ";
    cin.getline(articulo->descripcion,31);
    cout<<" PRECIO: ";
    cin>>articulo->precio;
    cout<<" STOCK: ";
    cin>>articulo->stock;
    cin.ignore();
    cout<<" "<<endl;
    cout<<" Articulo cargado"<<endl;
    cout<<" "<<endl;
    cout<<". . . . . . . . . . . . . . ."<<endl;
};
//MOSTRAR 1 ARTICULO
void mostrarArticulo(sArticulo articulo){
    cout<<" "<<endl;
    cout<<" MOSTRAR ARTICULO CARGADO"<<endl;
    cout<<" "<<endl;
    cout<<" CODIGO de ARTICULO: "<<articulo.codArt<<endl;
    cout<<" DESCRIPCION: "<<articulo.descripcion<<endl;
    cout<<" PRECIO: $"<<articulo.precio<<endl;
    cout<<" STOCK: "<<articulo.stock<<endl;
    cout<<" "<<endl;
};

//FILTRAR POR CODIGO DE ARTICULO - Devolver la primer posición con el mismo codigo de articulo
int buscarCodigo(sArticulo articulos[],int tam,char codigo[]){
    int posicion=-1;
    for(int x=0;x<tam;x++){
        if(strcmp(articulos[x].codArt,codigo)==0){
            posicion=x;
            x=tam;
        }
    }
    return posicion;
};

//RESULTADO BUSQUEDA de CODIGO de ARTICULO
void resultadoBusqueda(sArticulo articulos[],int pos){
    cout<<"- - - - - - - - - - - - - - - - - - - - - -"<<endl;
    cout<<" "<<endl;
    if(pos==-1){
        cout<<" NO SE HA ENCONTRADO EL CODIGO DE ARTICULO"<<endl;
        cout<<" "<<endl;
    } else {
        cout<<" ARTICULO ENCONTRADO con el CODIGO "<<articulos[pos].codArt<<endl;
        cout<<" "<<endl;
        cout<<" Articulo "<<pos+1<<endl;
        cout<<" CODIGO de ARTICULO: "<<articulos[pos].codArt<<endl;
        cout<<" DESCRIPCION: "<<articulos[pos].descripcion<<endl;
        cout<<" PRECIO: $"<<articulos[pos].precio<<endl;
        cout<<" STOCK: "<<articulos[pos].stock<<endl;
        cout<<" "<<endl;
    }
    cout<<"- - - - - - - - - - - - - - - - - - - - - -"<<endl;
    cout<<" "<<endl;
};

//FUNCION CARGAR ARTICULOS con FILTRO de CODIGO de ARTICULO
void cargarArticulosFiltro(sArticulo articulos[],int tam){
     cout<<" "<<endl;
     cout<<" CARGA DE ARTICULOS"<<endl;
     cout<<" "<<endl;
     char codigo[6];
     for(int x=0;x<tam;x++){
        int pos=-1;
        cout<<" "<<endl;
        cout<<" Cargando articulo..."<<endl;
        cout<<" "<<endl;
        do{
            cout<<" CODIGO de ARTICULO: ";
            cin.getline(codigo,6);
            if(x!=0){
                pos=buscarCodigo(articulos,tam,codigo);
            }
            strcpy(articulos[x].codArt,codigo);
            if(pos!=-1){
                cout<<" "<<endl;
                cout<<"ERROR: El codigo de articulo ya esta cargado. Ingrese un codigo nuevo"<<endl;
                cout<<" "<<endl;
            }
        }while(pos!=-1);
        cout<<" DESCRIPCION: ";
        cin.getline(articulos[x].descripcion,31);
        cout<<" PRECIO: ";
        cin>>articulos[x].precio;
        cout<<" STOCK: ";
        cin>>articulos[x].stock;
        cin.ignore();
     }
     cout<<" "<<endl;
     cout<<" Articulos CARGADOS"<<endl;
     cout<<" "<<endl;
     system("pause");
};

//INGRESAR VENTAS
void ingresarVenta(sArticulo articulos[],int tam){
    cin.ignore();
    system("cls");
    char codigo[6];
    int pos=-1;
    bool salir=false;
    int cantidad=0;
    encabezado();
    cout<<" "<<endl;
    cout<<" * * * VENTAS * * *"<<endl;
    cout<<" "<<endl;
    while(salir==false){
        cout<<"- - - - - - - - - - - - - -"<<endl;
        cout<<" "<<endl;
        do{
            cout<<" Cargando Venta... (En caso de salir Ingrese 0)"<<endl;
            cout<<" "<<endl;
            cout<<" INGRESE CODIGO DE ARTICULO: ";
            cin.getline(codigo,6);
            //En caso de salir elija cero
            if(strcmp(codigo,"0")==0){
                salir=true;
            } else {
                pos=buscarCodigo(articulos,tam,codigo);
                //Valida que el codigo exista en la carga
                if(pos==-1){
                    cout<<" "<<endl;
                    cout<<"\tERROR: Codigo Inexistente! Intente nuevamente"<<endl;
                    cout<<" "<<endl;
                }
            }
        }while(pos==-1&&salir==0);
        bool hay=false;
        if(salir==false){
            do{
                cout<<" INGRESE CANTIDAD A COMPRAR: ";
                cin>>cantidad;
                hay=validarCantidad(articulos,pos,cantidad);
                if(!hay){
                    cout<<" "<<endl;
                    cout<<" El stock NO es suficiente para esa cantidad, por favor compre menos!"<<endl;
                    cout<<" "<<endl;
                }
            }while(!hay);
            cout<<" "<<endl;
            cout<<" ---- VENTA REALIZADA ----"<<endl;
            cout<<" "<<endl;
            cout<<" Articulo: "<<articulos[pos].codArt<<endl;
            cout<<" Cantidad: "<<cantidad<<endl;
            cout<<" Importe: $"<<articulos[pos].precio*cantidad<<endl;
            // Se decscuenta la cantidad en el stock
            articulos[pos].stock=articulos[pos].stock - cantidad;
            cout<<" "<<endl;
            cout<<" - - - - - - - - - - - - - - - - - - -"<<endl;
            system("pause");
            cin.ignore();
        }
    }
    cout<<" "<<endl;
    cout<<" - - - - - - - - - - - - - - - - - - -"<<endl;
    cout<<" "<<endl;
    cout<<" FIN de REGISTRO de VENTAS "<<endl;
    cout<<" "<<endl;
    cout<<" - - - - - - - - - - - - - - - - - - -"<<endl;
    cout<<" "<<endl;
    system("pause");
};

//VALIDAR CODIGO
bool validarCantidad(sArticulo articulos[],int i,int cantidad){
    if(articulos[i].stock>=cantidad){
        return true;
    }
    return false;
};

void inicializarRegistros(sArticulo articulos[],int tam){
    for(int x=0;x<tam;x++){
        articulos[x] = {};
    }
};
