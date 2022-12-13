#include "main.h"


int main() {

setlocale(LC_ALL, "en_US.UTF-8");

    

    //STACK GLOBAL DA LISTA DAS ESTRUTURAS
    string*** GLOBAL =  new string **[3];

    

    string** SESSION =  new string *[100000];
    //Accounts
    GLOBAL[0] = new string*[100000];
    //Products
    GLOBAL[1] = new string*[100000];
    //Bills
    GLOBAL[2] = new string*[102];

    SESSION[0] = nullptr;

    //Lista de contas
    loadClients(GLOBAL[0]);
    
    //Lista de produtos
    loadProducts(GLOBAL[1]);

    //Lista de compras 
    loadBills(GLOBAL[2]);
    
    int action;

    do {
        cout << "1 - Login" << endl;

        cout << "2 - Criar Conta" << endl;

        cout << "0 - Sair" << endl;

        action = validateTypeInt();
        switch (action)
        {
            case 1:
                
                if(login(SESSION, GLOBAL[0])){
                    cout << SESSION[0][1];
                    if(SESSION[0][3] == "ADMIN"){
                        menu_admin(GLOBAL);
                    
                    } else {
                        menu_client(GLOBAL, SESSION);
                    }
                    cout << 1;
                    delete[] SESSION[0];
                    SESSION[0] = nullptr;
                } else{
                    cout << "Não temos nenhum cliente com esses dados";
                }

            break;

            case 2:

                CreateClients(GLOBAL[0]);

                cout << "Conta Criada";

            break;
        }
            

    } while(action != 0);

    for (int i = 0; i < getsize(GLOBAL[0]); i++)
    {
        delete[] GLOBAL[0][i];
    }

    for (int i = 0; i < getsize(GLOBAL[1]); i++)
    {
        delete[] GLOBAL[1][i];
    }

   for (int i = 0; i < getsize(GLOBAL[2]); i++)
    {
        delete[] GLOBAL[2][i];
    }
    
    delete[] GLOBAL[0];

    delete[] GLOBAL[1];

    delete[] GLOBAL[2];
    
    cout << "Saio do Programa" << endl;

    system("pause");

return 0;
}
