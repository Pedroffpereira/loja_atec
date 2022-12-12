#include "main.h"


int main() {

setlocale(LC_ALL, "en_US.UTF-8");

    

    //STACK GLOBAL DA LISTA DAS ESTRUTURAS
    string*** GLOBAL =  new string **[4];

    

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

    do {
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
            getErrors(1);
        }

    } while(true);
return 0;
}
