

#include "./ProductsFunctions.h"


#ifndef tableProducts_file
#define tableProducts_file

    //Show table of products
    void tableProducts(string** list_products){
        if(getsize(list_products) > 0) {
            cout << "." << setfill('_') << setw(getsizestring(list_products, 0, "Id") +
                                getsizestring(list_products, 1, "Nome") + 
                                getsizestring(list_products, 2, "Pre�o de custo") + 
                                getsizestring(list_products, 2, "Pre�o Venda") +
                                getsizestring(list_products, 2, "Stock") + 15
            )
            << "." << endl << setfill(' ');
            cout << "| " << setw(getsizestring(list_products, 0, "Id")) << "Id" << " | "
                << setw(getsizestring(list_products, 1, "Nome")) << left << "Nome" << " | "
                << setw(getsizestring(list_products, 2, "Pre�o de custo"))  << right << "Pre�o de custo" << " | "
                << setw(getsizestring(list_products, 2, "Pre�o Venda")) << "Pre�o Venda" << " | "
                << setw(getsizestring(list_products, 2, "Stock")) << "Stock" << " |" << endl;


            for (int i = 0; i < getsize(list_products); i++) {

                
                cout << "| " << setw(getsizestring(list_products, 0, "Id")) << list_products[i][0] << " | " 
                    << setw(getsizestring(list_products, 1, "Nome")) << left << list_products[i][1] << " | "
                    << setw(getsizestring(list_products, 2, "Pre�o de custo")) << right << list_products[i][2] << " | "
                    << setw(getsizestring(list_products, 3, "Pre�o Venda")) << list_products[i][3] << " | " 
                    << setw(getsizestring(list_products, 4, "Stock")) << list_products[i][4] << " |" << endl;
            }

            cout << "'" << setfill('-') << setw(getsizestring(list_products, 0, "Id") +
                                getsizestring(list_products, 1, "Nome") + 
                                getsizestring(list_products, 2, "Pre�o de custo") + 
                                getsizestring(list_products, 2, "Pre�o Venda") +
                                getsizestring(list_products, 2, "Stock") + 15
            )
            << "'" << endl << setfill(' ');
        } else {
            cout << "N�o foram encontrados Produtos";
        }
    }
#endif