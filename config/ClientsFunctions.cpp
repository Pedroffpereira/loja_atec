
#include "../control_array/array_function.h"

#include "./ProductsFunctions.h"


#ifndef tableClients_file
#define tableClients_file

    //Show table of clients
    void tableClients(string** list_products){
        cout << "___________________________________________________________________" << endl;
        cout << "|*****************************************************************|" << endl;
        cout << "|  Id | Email | Nome | Contribuinte | Nº Telefone | Morada | Role |" << endl;


        for (int i = 0; i < getsize(list_products); i++) {
            cout << "| " << list_products[i][0] << " | " << list_products[i][1] << " | " << list_products[i][5] << " | " << list_products[i][4] << " | " << list_products[i][6] << " | " << list_products[i][7] << " | " << list_products[i][7] << " |" << endl;
        }

        cout << "|****************************************************************|" << endl;
        cout << "|________________________________________________________________|" << endl;
    }
#endif


#ifndef searchClients_file
#define searchClients_file

    //search of product by position
    void searchClients(int position, string value, string** listClients) {
        
        int j=0;
        string** searchList = new string* [getsize(listClients)];
        for (int i = 0; i < getsize(listClients); i++) {

            if(listClients[i][position] == value){
                searchList[j];
                j++;
            }
        }

        searchList[j] = nullptr;

        tableProducts(searchList);

        for (int i = 0; i < getsize(searchList); i++) {

            delete[] searchList[i];

        }
    }
#endif