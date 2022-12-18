#include "./compra.h"

#ifndef vendaProdutos_file
#define vendaProdutos_file
void vendaProdutos(string** Products, string** SESSION, string** Bills){


    #pragma warning(disable : 4996)


        time_t tim = time(0);
        tm* gottime = gmtime(&tim);



    string currentTime = to_string(gottime -> tm_hour) + ":" + to_string(gottime -> tm_min) + ":" + to_string(gottime -> tm_sec);

    //numFatura, numCliente, numLinha, nomeProduto, quantidade, preçoSemIva, IVA, totalProduto, total, valorEntregue, troco, data, \n
    string** carrinhoCompras = new string *[103];
    carrinhoCompras[0] = nullptr;
    carrinhoCompras[101] = nullptr;
    


    char confirmacao, insert, confirm;
    string tempID, tempStock;
    bool inserir = true, productBuy = true, confirmStock = true, checkout = true, payment = true;
    double total, valorEntregue, troco;

    
    
    showProducts(Products, SESSION);
    system("pause");

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
                    while(confirmStock){
                        if(tempID == Products[i][0] && stoi(Products[i][4]) > 0){
                            delete[] carrinhoCompras[i];
                            carrinhoCompras[i] = new string[13];
                            carrinhoCompras[i][3] = Products[i][1];
                            cout << "Insira a quantidade que deseja: ";
                            cin >> tempStock;
                            if(stoi(tempStock) <= stoi(Products[i][4])){
                                carrinhoCompras[i][0] = to_string(stoi(Bills[getsize(Bills) - 1][0]) + 1);
                                carrinhoCompras[i][1] = SESSION[0][0];
                                carrinhoCompras[i][2] = to_string(getsize(carrinhoCompras) + 1);
                                carrinhoCompras[i][4] = tempStock;
                                carrinhoCompras[i][5] = Products[i][2];
                                carrinhoCompras[i][6] = "24%";
                                carrinhoCompras[i][7] = to_string(stoi(Products[i][2]) * 1.24 * stoi(tempStock));
                                carrinhoCompras[i][8] = "0";
                                carrinhoCompras[i][9] = "0";
                                carrinhoCompras[i][11] = "\n";
                                carrinhoCompras[i + 1] = nullptr;
                                //remover ao stock do produto
                                Products[i][4] = to_string(stoi(Products[i][4]) - stoi(tempStock));
                                confirmStock = false;
                            }
                        }
                        else if(stoi(Products[i][4]) <= 0){
                            cout << "Quantidade em stock insuficiente!";
                            system("pause");
                            confirmStock = false;
                        }
                        cout << "Produto " << tempID << " adicionado com sucesso! (" << tempStock << " unidades)" << endl;
                        system("pause");

                    }
                    
                }

                    while(productBuy){
                        confirmStock = true;
                        system("cls");
                        cout << "Deseja inserir mais algum produto?[y/n] ";
                        cin >> insert;


                        switch(insert){
                            case 'y':
                                system("cls");
                                cout << "Insira o ID do produto: ";
                                cin >> tempID;
                                while(confirmStock){
                                    for (int i = 1; i < getsize(Products); i++){
                                        if(tempID == Products[i][0] && stoi(Products[i][4]) > 0){

                                            delete[] carrinhoCompras[i];
                                            carrinhoCompras[i] = new string[13];
                                            carrinhoCompras[i][3] = Products[i][1];
                                            cout << "Insira a quantidade que deseja: ";
                                            cin >> tempStock;
                                            if(stoi(tempStock) <= stoi(Products[i][4])){
                                                carrinhoCompras[i][0] = to_string(stoi(Bills[getsize(Bills) - 1][0]) + 1);
                                                carrinhoCompras[i][1] = SESSION[0][0];
                                                carrinhoCompras[i][2] = to_string(getsize(carrinhoCompras) + 1);
                                                carrinhoCompras[i][4] = tempStock;
                                                carrinhoCompras[i][5] = Products[i][2];
                                                carrinhoCompras[i][6] = "24%";
                                                carrinhoCompras[i][7] = to_string(stoi(Products[i][2]) * 1.24 * stoi(tempStock));
                                                carrinhoCompras[i][8] = "0";
                                                carrinhoCompras[i][9] = "0";
                                                carrinhoCompras[i][11] = "\n";
                                                carrinhoCompras[i + 1] = nullptr;
                                                Products[i][4] = to_string(stoi(Products[i][4]) - stoi(tempStock));
                                                confirmStock = false;
                                                cout << "Produto " << tempID << " adicionado com sucesso! (" << tempStock << " unidades)" << endl;
                                                system("pause");
                                            }
                                            
                                        }
                                        else if(stoi(Products[i][4]) <= 0){
                                            cout << "Quantidade em stock insuficiente!";
                                            system("pause");
                                            confirmStock = false;
                                        }

                                    }

                                }
                            break;

                            case 'Y':
                                system("cls");
                                cout << "Insira o ID do produto: ";
                                cin >> tempID;
                                while(confirmStock){
                                    for (int i = 1; i < getsize(Products); i++){
                                        if(tempID == Products[i][0] && stoi(Products[i][4]) > 0){
                                            delete[] carrinhoCompras[i];
                                            carrinhoCompras[i] = new string[13];
                                            carrinhoCompras[i][3] = Products[i][1];
                                            cout << "Insira a quantidade que deseja: ";
                                            cin >> tempStock;
                                            if(stoi(tempStock) <= stoi(Products[i][4])){
                                                carrinhoCompras[i][0] = to_string(stoi(Bills[getsize(Bills) - 1][0]) + 1);
                                                carrinhoCompras[i][1] = SESSION[0][0];
                                                cout << "ultimo carrinho [2]: " << getsize(carrinhoCompras) + 1;
                                                system("pause");
                                                carrinhoCompras[i][2] = to_string(getsize(carrinhoCompras) + 1);
                                                carrinhoCompras[i][4] = tempStock;
                                                carrinhoCompras[i][5] = Products[i][2];
                                                carrinhoCompras[i][6] = "24%";
                                                carrinhoCompras[i][7] = to_string(stoi(Products[i][2]) * 1.24 * stoi(tempStock));
                                                carrinhoCompras[i][8] = "0";
                                                carrinhoCompras[i][9] = "0";
                                                carrinhoCompras[i][11] = "\n";
                                                carrinhoCompras[i + 1] = nullptr;
                                                Products[i][4] = to_string(stoi(Products[i][4]) - stoi(tempStock));
                                                confirmStock = false;
                                                cout << "Produto " << tempID << " adicionado com sucesso! (" << tempStock << " unidades)" << endl;
                                                system("pause");
                                            }
                                            
                                        }
                                        else if(stoi(Products[i][4]) <= 0){
                                            cout << "Quantidade em stock insuficiente!";
                                            system("pause");
                                            confirmStock = false;
                                        }

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
                cout << "Carrinho: " << endl;
                tableProducts(Products);
                /*for(int y = 0; y < getsize(carrinhoCompras); y++){
                    for(int x = 0; x < getsize(carrinhoCompras[y]); x++){
                        cout << carrinhoCompras[y][x] << " ";
                    }
                    cout << endl;
                }*/
                system("pause");


                







                system("cls");
                cout << "Deseja prosseguir?[y/n]";
                cin >> confirm;
                while(checkout){
                    switch(confirm){
                        case 'y':
                            for(int y = 0; y < getsize(carrinhoCompras); y++){
                                total += stod(carrinhoCompras[y][7]);
                            }
                            for(int y = 0; y < getsize(carrinhoCompras); y++){
                                for(int x = 0; x < getsize(carrinhoCompras[y]); x++){
                                    carrinhoCompras[y][8] = total;
                                    carrinhoCompras[y][9] = currentTime;
                                }
                            }
                            cout << "Preço total: " << total << endl;
                            system("pause");
                            checkout = false;
                        break;

                        case 'Y':
                            for(int y = 0; y < getsize(carrinhoCompras); y++){
                                total += stod(carrinhoCompras[y][7]);
                            }
                            cout << "Preço total: " << total << endl;
                            system("pause");
                            checkout = false;
                        break;

                        case 'n':
                            checkout = false;
                        break;

                        case 'N':
                            checkout = false;
                        break;
                    }
                }
                

                //imprimir talão
                system("cls");
                cout << "Receipt:" << endl << endl;

                for(int y = 0; y < getsize(carrinhoCompras); y++){
                    for(int x = 0; x < getsize(carrinhoCompras[y]); x++){
                        cout << carrinhoCompras[y][x] << " ";
                    }
                    cout << endl;
                }
                cout << "\n\nTotal a pagar: " << total << endl << endl;
                cout << "Insira o valor a pagar: ";
                cin >> valorEntregue;

                while(payment){
                    if(valorEntregue > total){
                        troco = valorEntregue - total;
                        cout << "Troco: " << troco << endl;
                        cout << "Obrigado pela sua compra! Volte sempre!" << endl;
                        system("pause");
                        exit(0);
                    }
                    else if(valorEntregue < total){
                        system("cls");
                        cout << "Valor insuficiente!" << endl;
                        system("pause");
                        exit(0);
                    }
                    else if(valorEntregue = total){
                        troco = 0;
                        cout << "Troco: " << troco << endl;
                        cout << "Obrigado pela sua compra! Volte sempre!" << endl;
                        system("pause");
                        exit(0);
                    }
                }
                    

            break;
 






































































            case 'Y':
                system("cls");
                cout << "Insira o ID do produto: ";
                cin >> tempID;
                for (int i = 0; i < getsize(Products); i++){
                    while(confirmStock){
                        if(tempID == Products[i][0] && stoi(Products[i][4]) > 0){
                            delete[] carrinhoCompras[i];
                            carrinhoCompras[i] = new string[13];
                            carrinhoCompras[i][3] = Products[i][1];
                            cout << "Insira a quantidade que deseja: ";
                            cin >> tempStock;
                            if(stoi(tempStock) <= stoi(Products[i][4])){
                                carrinhoCompras[i][0] = to_string(stoi(Bills[getsize(Bills) - 1][0]) + 1);
                                carrinhoCompras[i][1] = SESSION[0][0];
                                carrinhoCompras[i][2] = to_string(getsize(carrinhoCompras) + 1);
                                carrinhoCompras[i][4] = tempStock;
                                carrinhoCompras[i][5] = Products[i][2];
                                carrinhoCompras[i][6] = "24%";
                                carrinhoCompras[i][7] = to_string(stoi(Products[i][2]) * 1.24 * stoi(tempStock));
                                carrinhoCompras[i][8] = "0";
                                carrinhoCompras[i][9] = "0";
                                carrinhoCompras[i][11] = "\n";
                                carrinhoCompras[i + 1] = nullptr;
                                //remover ao stock do produto
                                Products[i][4] = to_string(stoi(Products[i][4]) - stoi(tempStock));
                                confirmStock = false;
                            }
                        }
                        else if(stoi(Products[i][4]) <= 0){
                            cout << "Quantidade em stock insuficiente!";
                            system("pause");
                            confirmStock = false;
                        }
                        cout << "Produto " << tempID << " adicionado com sucesso! (" << tempStock << " unidades)" << endl;
                        system("pause");

                    }
                    
                }

                    while(productBuy){
                        confirmStock = true;
                        system("cls");
                        cout << "Deseja inserir mais algum produto?[y/n] ";
                        cin >> insert;


                        switch(insert){
                            case 'y':
                                system("cls");
                                cout << "Insira o ID do produto: ";
                                cin >> tempID;
                                while(confirmStock){
                                    for (int i = 1; i < getsize(Products); i++){
                                        if(tempID == Products[i][0] && stoi(Products[i][4]) > 0){

                                            delete[] carrinhoCompras[i];
                                            carrinhoCompras[i] = new string[13];
                                            carrinhoCompras[i][3] = Products[i][1];
                                            cout << "Insira a quantidade que deseja: ";
                                            cin >> tempStock;
                                            if(stoi(tempStock) <= stoi(Products[i][4])){
                                                carrinhoCompras[i][0] = to_string(stoi(Bills[getsize(Bills) - 1][0]) + 1);
                                                carrinhoCompras[i][1] = SESSION[0][0];
                                                carrinhoCompras[i][2] = to_string(getsize(carrinhoCompras) + 1);
                                                carrinhoCompras[i][4] = tempStock;
                                                carrinhoCompras[i][5] = Products[i][2];
                                                carrinhoCompras[i][6] = "24%";
                                                carrinhoCompras[i][7] = to_string(stoi(Products[i][2]) * 1.24 * stoi(tempStock));
                                                carrinhoCompras[i][8] = "0";
                                                carrinhoCompras[i][9] = "0";
                                                carrinhoCompras[i][11] = "\n";
                                                carrinhoCompras[i + 1] = nullptr;
                                                Products[i][4] = to_string(stoi(Products[i][4]) - stoi(tempStock));
                                                confirmStock = false;
                                                cout << "Produto " << tempID << " adicionado com sucesso! (" << tempStock << " unidades)" << endl;
                                                system("pause");
                                            }
                                            
                                        }
                                        else if(stoi(Products[i][4]) <= 0){
                                            cout << "Quantidade em stock insuficiente!";
                                            system("pause");
                                            confirmStock = false;
                                        }

                                    }

                                }
                            break;

                            case 'Y':
                                system("cls");
                                cout << "Insira o ID do produto: ";
                                cin >> tempID;
                                while(confirmStock){
                                    for (int i = 1; i < getsize(Products); i++){
                                        if(tempID == Products[i][0] && stoi(Products[i][4]) > 0){
                                            delete[] carrinhoCompras[i];
                                            carrinhoCompras[i] = new string[13];
                                            carrinhoCompras[i][3] = Products[i][1];
                                            cout << "Insira a quantidade que deseja: ";
                                            cin >> tempStock;
                                            if(stoi(tempStock) <= stoi(Products[i][4])){
                                                carrinhoCompras[i][0] = to_string(stoi(Bills[getsize(Bills) - 1][0]) + 1);
                                                carrinhoCompras[i][1] = SESSION[0][0];
                                                cout << "ultimo carrinho [2]: " << getsize(carrinhoCompras) + 1;
                                                system("pause");
                                                carrinhoCompras[i][2] = to_string(getsize(carrinhoCompras) + 1);
                                                carrinhoCompras[i][4] = tempStock;
                                                carrinhoCompras[i][5] = Products[i][2];
                                                carrinhoCompras[i][6] = "24%";
                                                carrinhoCompras[i][7] = to_string(stoi(Products[i][2]) * 1.24 * stoi(tempStock));
                                                carrinhoCompras[i][8] = "0";
                                                carrinhoCompras[i][9] = "0";
                                                carrinhoCompras[i][11] = "\n";
                                                carrinhoCompras[i + 1] = nullptr;
                                                Products[i][4] = to_string(stoi(Products[i][4]) - stoi(tempStock));
                                                confirmStock = false;
                                                cout << "Produto " << tempID << " adicionado com sucesso! (" << tempStock << " unidades)" << endl;
                                                system("pause");
                                            }
                                            
                                        }
                                        else if(stoi(Products[i][4]) <= 0){
                                            cout << "Quantidade em stock insuficiente!";
                                            system("pause");
                                            confirmStock = false;
                                        }

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
                cout << "Carrinho: " << endl;
                for(int y = 0; y < getsize(carrinhoCompras); y++){
                    for(int x = 0; x < getsize(carrinhoCompras[y]); x++){
                        cout << carrinhoCompras[y][x] << " ";
                    }
                    cout << endl;
                }
                system("pause");


                







                system("cls");
                cout << "Deseja prosseguir?[y/n]";
                cin >> confirm;
                while(checkout){
                    switch(confirm){
                        case 'y':
                            for(int y = 0; y < getsize(carrinhoCompras); y++){
                                total += stod(carrinhoCompras[y][7]);
                            }
                            for(int y = 0; y < getsize(carrinhoCompras); y++){
                                for(int x = 0; x < getsize(carrinhoCompras[y]); x++){
                                    carrinhoCompras[y][8] = total;
                                    carrinhoCompras[y][9] = total;
                                }
                            }
                            cout << "Preço total: " << total << endl;
                            system("pause");
                            checkout = false;
                        break;

                        case 'Y':
                            for(int y = 0; y < getsize(carrinhoCompras); y++){
                                total += stod(carrinhoCompras[y][7]);
                            }
                            cout << "Preço total: " << total << endl;
                            system("pause");
                            checkout = false;
                        break;

                        case 'n':
                            checkout = false;
                        break;

                        case 'N':
                            checkout = false;
                        break;
                    }
                }
                

                //imprimir talão
                system("cls");
                cout << "Receipt:" << endl << endl;

                for(int y = 0; y < getsize(carrinhoCompras); y++){
                    for(int x = 0; x < getsize(carrinhoCompras[y]); x++){
                        cout << carrinhoCompras[y][x] << " ";
                    }
                    cout << endl;
                }
                cout << "\n\nTotal a pagar: " << total << endl << endl;
                cout << "Insira o valor a pagar: ";
                cin >> valorEntregue;

                while(payment){
                    if(valorEntregue > total){
                        troco = valorEntregue - total;
                        cout << "Troco: " << troco << endl;
                        cout << "Obrigado pela sua compra! Volte sempre!" << endl;
                        system("pause");
                        exit(0);
                    }
                    else if(valorEntregue < total){
                        system("cls");
                        cout << "Valor insuficiente!" << endl;
                        system("pause");
                        exit(0);
                    }
                    else if(valorEntregue = total){
                        troco = 0;
                        cout << "Troco: " << troco << endl;
                        cout << "Obrigado pela sua compra! Volte sempre!" << endl;
                        system("pause");
                        exit(0);
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


    


}
#endif



#ifndef showProducts_file
#define showProduts_file

void showProducts(string** Products, string** SESSION){

    system("cls");
    cout << "Produtos em stock: " << endl << endl;

    for(int y = 0; y < getsize(Products); y++){
        for(int x = 0; x < getsize(Products[y]); x++){
            if(Products[y][x] != "0"){
                cout << Products[y][x] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
#endif



#ifndef tableReceipt_file
#define tableReceipt_file
void tableReceipt(string** Products){
    cout << "." << setfill('_') << setw(getsizestring(list_products, 0, "Id") +
                                getsizestring(list_products, 1, "Nome") + 
                                getsizestring(list_products, 2, "Preço de custo") + 
                                getsizestring(list_products, 2, "Preço Venda") +
                                getsizestring(list_products, 2, "Quantidade") + 15
            )
            << "." << endl << setfill(' ');
            cout << "| " << setw(getsizestring(list_products, 0, "Id")) << "Id" << " | "
                << setw(getsizestring(list_products, 1, "Nome")) << left << "Nome" << " | "
                << setw(getsizestring(list_products, 2, "Preço de custo"))  << right << "Preço de custo" << " | "
                << setw(getsizestring(list_products, 2, "Preço Venda")) << "Preço Venda" << " | "
                << setw(getsizestring(list_products, 2, "Quantidade")) << "Quantidade" << " |" << endl;


            for (int i = 0; i < getsize(list_products); i++) {

                
                cout << "| " << setw(getsizestring(list_products, 0, "Id")) << list_products[i][0] << " | " 
                    << setw(getsizestring(list_products, 1, "Nome")) << left << list_products[i][1] << " | "
                    << setw(getsizestring(list_products, 2, "Preço de custo")) << right << list_products[i][2] << " | "
                    << setw(getsizestring(list_products, 3, "Preço Venda")) << list_products[i][3] << " | " 
                    << setw(getsizestring(list_products, 4, "Quantidade")) << list_products[i][4] << " |" << endl;
            }

            cout << "'" << setfill('-') << setw(getsizestring(list_products, 0, "Id") +
                                getsizestring(list_products, 1, "Nome") + 
                                getsizestring(list_products, 2, "Preço de custo") + 
                                getsizestring(list_products, 2, "Preço Venda") +
                                getsizestring(list_products, 2, "Quantidade") + 15
            )
            << "'" << endl << setfill(' ');

}
#endif