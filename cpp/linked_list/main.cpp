#include <iostream>
#include <stdlib.h>

#include "node.h"

using namespace std;

class List /* Clase Lista */
{
    private: // Atributos
        int *p_inicio;
        int *p_final;

    public: // Métodos
        // Constructor. Inicializa los atributos de la clase.
        List()
        {
            p_inicio = NULL;
            p_final = NULL;
        }

        void insertar()
        {
            cout << "Estoy insertando." << endl;
        }

        void recorrer()
        {
            cout << "Estoy recorriendo." << endl;
        }

        void get()
        {
            cout << "p_inicio es: " << &p_inicio << ". p_final es: " << &p_final << endl;
        }
        /*
        void set(int a, int b)
        {
            p_inicio = a;
            p_final  = b;
        }
        */
};




main() /* Main program */
{
    /* Se crea la lista */
    List my_list = List();

    my_list.insertar();
    my_list.recorrer();
    my_list.get();
    //my_list.set(3, 6);

    /* Crear un nodo */
    //Node node = Node(2);
    Node node(2);
    node.get();

    return 0;
}