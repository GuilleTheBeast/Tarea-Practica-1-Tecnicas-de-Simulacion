#include <iostream>
#include "newsheet.h"
#include "opensheet.h"

using namespace std;


void MainMenu(int option) {
    if (option == 1) {
        cout << "\nOpción A seleccionada\n" << endl;
    } else if (option == 2) {
        cout << "\nOpción B seleccionada\n" << endl;
    } else if (option == 3) {
        cout << "\nCerrando programa...\n" << endl;
        exit(0);
    } else {
        cout << "\nOpción inválida\n" << endl;
    }
}


int main() {
    
    cout<<"Menú Principal:\n";
    cout<<"---------------\n";
    cout<<"---------------\n\n";
    cout<<"1. Nuevo.\n";
    cout<<"2. Abrir.\n";
    cout<<"3. Salir.\n\n";

    int input;
    cout<<"Ingrese su opción: "; cin>>input;
    MainMenu(input);



    return 0;
}