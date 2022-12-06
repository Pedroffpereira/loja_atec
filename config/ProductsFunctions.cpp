
#include "../control_array/array_function.h"

#include "./ProductsFunctions.h"


#ifndef tableProducts_file
#define tableProducts_file

    //Show table of products
    void tableProducts(string** list_products){
        cout << "___________________________________________________________________" << endl;
        cout << "|*****************************************************************|" << endl;
        cout << "  Id | Nome | Preço de custo | Preço Venda" << endl;


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
    void searchProduct(int position, string value, string** list_products) {
        
        int j=0;
        string** searchList = new string* [getsize(list_products)];
        for (int i = 0; i < getsize(list_products); i++) {

            if(list_products[i][position] == value){
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