
#include "../control_array/array_function.h"

#include "./ProductsFunctions.h"


#ifndef tableProducts_file
#define tableProducts_file

    //Show table of clients
    void tableClients(string** list_products){
        cout << "___________________________________________________________________" << endl;
        cout << "|*****************************************************************|" << endl;
        cout << "  Id | Nome | Nº Telefone | Morada" << endl;


        for (int i = 0; i < getsize(list_products); i++) {

            
            cout << "| " << list_products[i][0] << " | " << list_products[i][1] << " | " << list_products[i][2] << " | " << list_products[i][3] << " | " << list_products[i][4] << " |" << endl;
        }

        cout << "*****************************************************************" << endl;
        cout << "___________________________________________________________________" << endl;
    }
#endif



#ifndef searchProducts_file
#define searchProducts_file

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