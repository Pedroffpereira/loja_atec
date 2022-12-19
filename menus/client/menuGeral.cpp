#include "./menuGeral.h"


#ifndef menu_client_file
#define menu_client_file
void menu_client(string*** GLOBAL,string** SESSION){

    system("cls");
    
    int action;


    do{
        bool confirmAction = true;

        system("cls");

        cout << "1 - Produtos" << endl;

        cout << "2 - Gerir conta" << endl;

        cout << "0 - Sair" << endl;



        
        while(confirmAction){
            cin >> action;

            switch (action){
                case 1:
                    vendaProdutos(GLOBAL[1], SESSION, GLOBAL[2]);
                    confirmAction = false;
                break;

                case 2:
                    menu_manage_client(GLOBAL, SESSION, &action);
                    system("pause");
                    confirmAction = false;
                break;

                case 0:
                    confirmAction = false;
                break;

            }
        }
    }
    while(action != 0);

    

}
#endif