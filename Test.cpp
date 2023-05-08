#include <iostream>

void MainMenu(char option) {
    switch (option) {
        case '1':
            std::cout << "\nOpción A seleccionada\n" << std::endl;
            system("pause");
            break;
        case '2':
            std::cout << "\nOpción B seleccionada\n" << std::endl;
            system("pause");
            break;
        case '3':
            std::cout << "\nCerrando programa...\n" << std::endl;
            exit(0);
            break;
        default:
            std::cout << "\nOpción inválida\n" << std::endl;
            system("pause");
            break;
    }
}

using namespace std;

int main() {
    
    cout<<"Menú Principal:\n";
    cout<<"---------------\n";
    cout<<"---------------\n\n";
    cout<<"1. Nuevo.\n";
    cout<<"2. Abrir.\n";
    cout<<"3. Salir.\n\n";

    char input;
    cout<<"Ingrese su opción: "; cin>>input;
    MainMenu(input);



    return 0;
}