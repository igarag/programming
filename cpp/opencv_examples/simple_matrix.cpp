#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int myMatriz[2][2] = {{1, 2}, {3, 4}};
    int filas = (sizeof(myMatriz) / sizeof(myMatriz[0]));
    int columnas = (sizeof(myMatriz[0]) / sizeof(myMatriz[0][0]));
    cout << "[";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << myMatriz[i][j] << " ";
        }
        cout << i << end;
        if (i == filas) {
            cout << "]";
        } else {
            cout << "\n";
        }
        
    }
}




