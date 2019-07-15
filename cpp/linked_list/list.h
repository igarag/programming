
#include <iostream>
#include <stdlib.h>
#include <string>


// Lo que hace ifndef es no volver a instanciar esta clase
// si ya lo ha hecho otra parte del programa.
#ifndef LIST_H
#define LIST_H


class List /* Clase Lista */
{
    private:
        int *p_inicio;
        int *p_final;

    public: // Métodos
        // Constructor. Inicializa los atributos de la clase.
        List();

        void insertar();
    
        void recorrer();

        void get();
    
        void set(int a, int b);

        void insert(int valor_);
};

#endif
