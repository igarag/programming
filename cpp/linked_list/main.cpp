#include <iostream>
#include <stdlib.h>

#include "node.h"
#include "list.h"

using namespace std;

//     __ _     _                     _                    _
//    / /(_)___| |_ __ _    ___ _ __ | | __ _ ______ _  __| | __ _
//   / / | / __| __/ _` |  / _ \ '_ \| |/ _` |_  / _` |/ _` |/ _` |
//  / /__| \__ \ || (_| | |  __/ | | | | (_| |/ / (_| | (_| | (_| |
//  \____/_|___/\__\__,_|  \___|_| |_|_|\__,_/___\__,_|\__,_|\__,_|
//


main() /* Main program */
{
    cout << "" << endl;
    cout << "   __ _     _                     _                    _" << endl;
    cout << "  / /(_)___| |_ __ _    ___ _ __ | | __ _ ______ _  __| | __ _" << endl;
    cout << " / / | / __| __/ _` |  / _ \\ '_ \\| |/ _` |_  / _` |/ _` |/ _` |" << endl;
    cout << "/ /__| \\__ \\ || (_| | |  __/ | | | | (_| |/ / (_| | (_| | (_| |" << endl;
    cout << "\\____/_|___/\\__\\__,_|  \\___|_| |_|_|\\__,_/___\\__,_|\\__,_|\\__,_|" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "" << endl;





    /* Se crea la lista */
    List* my_list = new List();

    //my_list->recorrer();


    /*
    cout << "Inserte un número: " << endl;
    int valor_insertar;
    cin >> valor_insertar;
    */
    
    /* Insertar un nodo */
    my_list->insertEnd(5);

    for (int i = 0; i < 9; i++){
        my_list->insertEnd(i);
    }

    my_list->print_list();

    return 0;

}