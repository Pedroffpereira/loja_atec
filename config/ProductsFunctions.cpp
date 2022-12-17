

#include "./ProductsFunctions.h"


#ifndef tableProducts_file
#define tableProducts_file

    //Show table of products
    void tableProducts(string** list_products){
        
        cout << "." << setfill('_') << setw(getsizestring(list_products, 0, "Id") +
                            getsizestring(list_products, 1, "Nome") + 
                            getsizestring(list_products, 2, "Preco de custo") + 
                            getsizestring(list_products, 2, "Preco Venda") +
                            getsizestring(list_products, 2, "Stock") + 15
        )
        << "." << endl << setfill(' ');
        cout << "| " << setw(getsizestring(list_products, 0, "Id")) << "Id" << " | "
              << setw(getsizestring(list_products, 1, "Nome")) << left << "Nome" << " | "
              << setw(getsizestring(list_products, 2, "Preco de custo"))  << right << "Preco de custo" << " | "
              << setw(getsizestring(list_products, 2, "Preco Venda")) << "Preco Venda" << " | "
              << setw(getsizestring(list_products, 2, "Stock")) << "Stock" << " |" << endl;


        for (int i = 0; i < getsize(list_products); i++) {

            
            cout << "| " << setw(getsizestring(list_products, 0, "Id")) << list_products[i][0] << " | " 
                << setw(getsizestring(list_products, 1, "Nome")) << left << list_products[i][1] << " | "
                << setw(getsizestring(list_products, 2, "Preco de custo")) << right << list_products[i][2] << " | "
                << setw(getsizestring(list_products, 3, "Preco Venda")) << list_products[i][3] << " | " 
                << setw(getsizestring(list_products, 4, "Stock")) << list_products[i][4] << " |" << endl;
        }

        cout << "." << setfill('-') << setw(getsizestring(list_products, 0, "Id") +
                            getsizestring(list_products, 1, "Nome") + 
                            getsizestring(list_products, 2, "Preco de custo") + 
                            getsizestring(list_products, 2, "Preco Venda") +
                            getsizestring(list_products, 2, "Stock") + 15
        )
        << "." << endl << setfill(' ');
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