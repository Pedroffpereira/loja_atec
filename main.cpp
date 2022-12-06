#include "main.h"

int main() {

    string** products = new string*[100000];

    string** SESSION =  new string *[100000];

    string** accounts = new string*[100000];

    string** fatura = new string*[100000];

    //STACK GLOBAL DA LISTA DAS ESTRUTURAS
    string*** GLOBAL =  new string **[4];

    SESSION[0] = nullptr;

    products[0] = nullptr;

    fatura[0] = nullptr;

    accounts[0] = new string[5];

    accounts[0][0] = 1;

    accounts[0][1] = "pedro.pereira@gmail.com";

    accounts[0][2] = "1234";

    accounts[0][3] = "ADMIN";

    accounts[0][4] = "\n";

    accounts[1] = nullptr;

    //Lista de contas
    GLOBAL[0] = accounts;
    
    //Lista de produtos
    GLOBAL[1] = products;

    //Lista de compras 

    //

    //Lista 


    do {
        if(login(SESSION, GLOBAL[0])){
            cout << SESSION[0][1];
            if(SESSION[0][3] == "ADMIN"){
                menu_admin(GLOBAL);
                delete SESSION[0];
            } else {
                //menu_client(GLOBAL, SESSION);
            }
        } else{
            getErrors(1);
        }

    } while(true);
return 0;
}
