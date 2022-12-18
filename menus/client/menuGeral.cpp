#include "./menuGeral.h"


#ifndef menu_client_file
#define menu_client_file
void menu_client(string*** GLOBAL,string** SESSION){

    system("cls");
    
    int action;


    do{

    cout << "1 - Produtos" << endl;

    cout << "2 - Gerir conta" << endl;

    cout << "3 - Relatórios" << endl;

    cout << "4 - Outros" << endl;

    cout << "0 - Sair" << endl;



    cin >> action;

    switch (action){
        case 1:
            vendaProdutos(GLOBAL[1], SESSION, GLOBAL[2]);
            system("pause");
            menu_client(GLOBAL, SESSION);
        break;

        case 2:
            menu_manage_client(GLOBAL, SESSION);
            system("pause");
            menu_client(GLOBAL, SESSION);
        break;

        case 3:
            //relatorioClientes(Bills, NameClientes);
        break;

        /*case 4:

        break;*/


    }





    }
    while(action != 0);

    

}
#endif