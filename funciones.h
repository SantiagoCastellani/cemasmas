#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include "articulo.h"

/// Funciones Menu

//ENCABEZADO
void encabezado();
// FUNCION MENU
void menu();

/// Funciones Cargar y Mostrar Articulos (Consigna 2)

//CARGAR LOTE de ARTICULOS
void cargarArticulos(sArticulo *,int);
//MOSTRAR LOTE de ARTICULOS
void mostrarArticulos(sArticulo *,int);

/// Funciones Cargar y Mostrar 1 Articulo (Consigna 1)

//CARGAR 1 ARTICULO
void cargarArticulo(sArticulo *);
//MOSTRAR 1 ARTICULO
void mostrarArticulo(sArticulo);

/// Funciones Buscar Codigo de Articulo (Consigna 3 y 4)

//FILTRAR POR CODIGO DE ARTICULO - Devolver Posición
int buscarCodigo(sArticulo *,int,char *);

//RESULTADO BUSQUEDA de CODIGO de ARTICULO - Mostrar Registro
void resultadoBusqueda(sArticulo *,int);

/// Funciones Cargar ARTICULO CON FILTRO DE CODIGO(Consigna 5)

//CARGAR LOTE de ARTICULOS con FILTRO de CODIGO de ARTICULO
void cargarArticulosFiltro(sArticulo *,int);

/// Funciones Ingresar ventas (Consigna 6)

//INGRESAR VENTAS
void ingresarVenta(sArticulo *,int);

//VALIDAR CANTIDAD
bool validarCantidad(sArticulo *,int,int);

//Inicializar Registros
void inicializarRegistros(sArticulo *,int);

#endif // FUNCIONES_H_INCLUDED
