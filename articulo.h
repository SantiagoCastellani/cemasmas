#ifndef ARTICULO_H_INCLUDED
#define ARTICULO_H_INCLUDED

struct sArticulo
{
    char codArt[6];
    char descripcion[31];
    float precio;
    int stock;
};

#endif // ARTICULO_H_INCLUDED
