#include "./compra.h"

#ifndef vendaProdutos_file
#define vendaProdutos_file
void vendaProdutos(string** Products, string** SESSION){
    loadProducts(Products);

    string carrinhoCompras[100];
    for(int f = 0; f < 100; f++){
        carrinhoCompras[f] = "0";
    }
    char confirmacao, insert;
    string tempID;
    bool inserir = true, productBuy = true;

    



    system("cls");
    cout << "Deseja comprar algum produto?[y/n] ";
    cin >> confirmacao;

    while(productBuy){

        switch(confirmacao){
            case 'y':
                system("cls");
                cout << "Insira o ID do produto: ";
                cin >> tempID;
                for (int i = 0; i < getsize(Products); i++){

                    if(tempID == Products[i][0]){
                        carrinhoCompras[i] = Products[i][0];
                        cout << "Produto " << tempID << " adicionado com sucesso!" << endl;
                        system("pause");
                    }

                }

                    while(productBuy){
                        system("cls");
                        cout << "Deseja inserir mais algum produto?[y/n] " << endl;
                        cin >> insert;


                        switch(insert){
                            case 'y':
                                system("cls");
                                cout << "Insira o ID do produto: ";
                                cin >> tempID;
                                for (int i = 0; i < getsize(Products); i++){

                                    if(tempID == Products[i][0]){
                                        carrinhoCompras[i] = Products[i][0];
                                        cout << "Produto " << tempID << " adicionado com sucesso!" << endl;
                                        system("pause");                                }

                                }
                            break;

                            case 'Y':
                                system("cls");
                                cout << "Insira o ID do produto: ";
                                cin >> tempID;
                                for (int i = 0; i < getsize(Products); i++){

                                    if(tempID == Products[i][0]){
                                        carrinhoCompras[i] = Products[i][0];
                                        cout << "Produto " << tempID << " adicionado com sucesso!" << endl;
                                        system("pause");
                                    }

                                }
                            break;

                            case 'n':
                                productBuy = false;
                            break;

                            case 'N':
                                productBuy = false;
                            break;
                        }
                    }



                system("cls");
                cout << "Produtos adicionados: " << endl;
                for(int h = 0; h < 100; h++){
                    if(carrinhoCompras[h] != "0"){
                        cout << carrinhoCompras[h] << endl;
                    }
                }
                system("pause");

            break;

            case 'Y':
                system("cls");
                cout << "Insira o ID do produto: ";
                cin >> tempID;
                for (int i = 0; i < getsize(Products); i++){

                    if(tempID == Products[i][0]){
                        carrinhoCompras[i] = Products[i][0];
                        cout << "Produto " << tempID << " adicionado com sucesso!" << endl;
                        system("pause");
                    }

                }

                while(inserir){
                    system("cls");
                    cout << "Deseja inserir mais algum produto?[y/n] " << endl;
                    cin >> insert;

                    switch(insert){
                        case 'y':
                            system("cls");
                            cout << "Insira o ID do produto: ";
                            cin >> tempID;
                            for (int i = 0; i < getsize(Products); i++){

                                if(tempID == Products[i][0]){
                                    carrinhoCompras[i] = Products[i][0];
                                    cout << "Produto " << tempID << " adicionado com sucesso!" << endl;
                                    system("pause");
                                }

                            }
                        break;

                        case 'Y':
                            system("cls");
                            cout << "Insira o ID do produto: ";
                            cin >> tempID;
                            for (int i = 0; i < getsize(Products); i++){

                                if(tempID == Products[i][0]){
                                    carrinhoCompras[i] = Products[i][0];
                                    cout << "Produto " << tempID << " adicionado com sucesso!" << endl;
                                }

                            }
                        break;

                        case 'n':
                            inserir = false;
                        break;

                        case 'N':
                            inserir = false;
                        break;
                    }

                }


                system("cls");
                cout << "Produtos adicionados: " << endl;
                for(int h = 0; h < 100; h++){
                    if(carrinhoCompras[h] != "0"){
                        cout << carrinhoCompras[h] << endl;
                    }
                }
            break;

            case 'n':
                productBuy = false;
            break;

            case 'N':
                productBuy = false;
            break;
        }
    }


    
    system("pause");
    exit(0);



}
#endif


//vendaProdutos(GLOBAL[1]);