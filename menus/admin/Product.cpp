#include"./Product.h"


#ifndef CreateProduct_file
#define CreateProduct_file
    void CreateProduct(string **Products)
    {

        string * product = new string[5];

        string name;

        double price_cost, stock;

        cout << "Insira o Nome do Produto" << endl;

        cin >> name;
        
        cout << "Insira o preço do produto" << endl;
        
        cin >> price_cost;
        
        cout << "Insira a quantidade de stock desse produto" << endl;
        
        cin >> stock;

        product[0] = ""; 

        product[1] = name; 

        product[2] = price_cost;

        product[3] = stock;

        product[4] = to_string(price_cost * 0.30);

        addProduct(Products, product);
        

    }
#endif

#ifndef GeralProducts_file
#define GeralProducts_file
    void GeralProducts(string **Products)
    {
        int action;

        cout << "1 - Produto" << endl;

        cout << "2 - Cliente" << endl;

        cout << "3 - Relatórios" << endl;

        cout << "4 - Outros" << endl;

        cout << "0 - Sair" << endl;

        cin >> action;

        CreateProduct(Products);
    }
#endif