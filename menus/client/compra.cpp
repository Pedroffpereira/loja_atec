#include "./compra.h"

#ifndef vendaProdutos_file
#define vendaProdutos_file
void vendaProdutos(string** Products, string** SESSION, string** Bills){


    #pragma warning(disable : 4996)


        time_t tim = time(0);
        tm* gottime = gmtime(&tim);



    string currentTime = to_string(gottime -> tm_mday) + "/" + to_string(gottime -> tm_mon) + "/" + to_string(gottime -> tm_year) + "   " + to_string(gottime -> tm_hour) + ":" + to_string(gottime -> tm_min) + ":" + to_string(gottime -> tm_sec);

    //numFatura, numCliente, numLinha, nomeProduto, quantidade, preçoSemIva, IVA, totalProduto, total, valorEntregue, troco, data, \n
    string** carrinhoCompras = new string *[103];
    carrinhoCompras[0] = nullptr;
    carrinhoCompras[101] = nullptr;
    


    char confirmacao, insert, confirm;
    string tempID, tempStock;
    bool inserir = true, productBuy = true, confirmStock = true, checkout = true, payment = true, availableStock = true;
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
                while(confirmStock){
                    confirmStock = true;
                    cout << "Insira o ID do produto: ";

                    cin >> tempID;
                    for (int i = 0; i < getsize(Products); i++){
                        if(tempID == Products[i][0]){
                            if(stoi(Products[i][4]) > 0){
                                int lastPos = getsize(carrinhoCompras);
                                delete[] carrinhoCompras[lastPos];
                                carrinhoCompras[lastPos] = new string[13];

                                carrinhoCompras[lastPos][3] = Products[i][1];
                                cout << "Insira a quantidade que deseja: ";
                                while(availableStock){
                                    cin >> tempStock;
                                        int j = 0;
                                        if(stoi(tempStock) <= stoi(Products[i][4])){
                                            //preencher carrinhoCompras
                                            carrinhoCompras[lastPos][1] = SESSION[0][0];
                                            carrinhoCompras[lastPos][0] = to_string(stoi(Bills[getsize(Bills) - 1][0]) + 1);
                                            carrinhoCompras[lastPos][2] = to_string(lastPos + 1);
                                            carrinhoCompras[lastPos][4] = tempStock;
                                            carrinhoCompras[lastPos][5] = Products[i][2];
                                            carrinhoCompras[lastPos][6] = "24%";
                                            carrinhoCompras[lastPos][7] = to_string(stoi(Products[i][2]) * 1.24 * stoi(tempStock));
                                            carrinhoCompras[lastPos][8] = "0";
                                            carrinhoCompras[lastPos][9] = "0";
                                            carrinhoCompras[lastPos][10] = "0";
                                            carrinhoCompras[lastPos][12] = "\n";
                                            carrinhoCompras[lastPos + 1] = nullptr;

                                            //remover ao stock do produto
                                            Products[i][4] = to_string(stoi(Products[i][4]) - stoi(tempStock));

                                            cout << "Produto " << tempID << " adicionado com sucesso! (" << tempStock << " unidades)" << endl;
                                            system("pause");
                                            confirmStock = false;
                                            availableStock = false;
                                        }
                                        else if(stoi(tempStock) > stoi(Products[i][4])){
                                            cout << "Quantidade em stock insuficiente! Stock disponível: " << Products[i][4] << ". Por favor volte a inserir a quantidade desejada: ";
                                        }
                                    
                                    
                                }
                                
                            }
                            else if(stoi(Products[i][4]) <= 0){
                            cout << "De momento não temos stock suficiente. Por favor tente mais tarde.";
                            system("pause");
                            confirmStock = false;
                            }
                        }
                        
                    }
                    

                }
                    

                    while(productBuy){
                        confirmStock = true;
                        availableStock = true;
                        system("cls");
                        cout << "Deseja inserir mais algum produto?[y/n] ";
                        cin >> insert;


                        switch(insert){
                            case 'y':
                                system("cls");
                                cout << "Insira o ID do produto: ";
                                while(confirmStock){
                                    cin >> tempID;
                                    for (int i = 0; i < getsize(Products); i++){
                                        if(tempID == Products[i][0]){
                                            if(stoi(Products[i][4]) > 0){
                                                int lastPos = getsize(carrinhoCompras);
                                                delete[] carrinhoCompras[lastPos];
                                                carrinhoCompras[lastPos] = new string[13];

                                                carrinhoCompras[lastPos][3] = Products[i][1];
                                                cout << "Insira a quantidade que deseja: ";
                                                while(availableStock){
                                                    cin >> tempStock;
                                                        if(stoi(tempStock) <= stoi(Products[i][4])){
                                                            carrinhoCompras[lastPos][0] = to_string(stoi(Bills[getsize(Bills) - 1][0]) + 1);
                                                            carrinhoCompras[lastPos][1] = SESSION[0][0];
                                                            carrinhoCompras[lastPos][2] = to_string(lastPos + 1);
                                                            carrinhoCompras[lastPos][4] = tempStock;
                                                            carrinhoCompras[lastPos][5] = Products[i][2];
                                                            carrinhoCompras[lastPos][6] = "24%";
                                                            carrinhoCompras[lastPos][7] = to_string(stoi(Products[i][2]) * 1.24 * stoi(tempStock));
                                                            carrinhoCompras[lastPos][8] = "0";
                                                            carrinhoCompras[lastPos][9] = "0";
                                                            carrinhoCompras[lastPos][10] = "0";
                                                            carrinhoCompras[lastPos][12] = "\n";
                                                            carrinhoCompras[lastPos + 1] = nullptr;
                                                            //remover ao stock do produto
                                                            Products[i][4] = to_string(stoi(Products[i][4]) - stoi(tempStock));
                                                            cout << "Produto " << tempID << " adicionado com sucesso! (" << tempStock << " unidades)" << endl;
                                                            system("pause");
                                                            availableStock = false;
                                                            confirmStock = false;
                                                        }
                                                        else if(stoi(tempStock) > stoi(Products[i][4])){
                                                            cout << "Quantidade em stock insuficiente! Stock disponível: " << Products[i][4] << ". Por favor volte a inserir a quantidade desejada: ";
                                                        }
                                                    
                                                }
                                            }
                                            else if(stoi(Products[i][4]) <= 0){
                                            cout << "Quantidade em stock insuficiente!";
                                            system("pause");
                                            confirmStock = false;
                                            }
                                        }
                        
                                    }

                                }
                            break;

                            case 'Y':
                                system("cls");
                                cout << "Insira o ID do produto: ";
                                while(confirmStock){
                                    cin >> tempID;
                                    for (int i = 0; i < getsize(Products); i++){
                                        if(tempID == Products[i][0]){
                                            if(stoi(Products[i][4]) > 0){
                                                int lastPos = getsize(carrinhoCompras);
                                                delete[] carrinhoCompras[lastPos];
                                                carrinhoCompras[lastPos] = new string[13];

                                                carrinhoCompras[lastPos][3] = Products[i][1];
                                                cout << "Insira a quantidade que deseja: ";
                                                while(availableStock){
                                                    cin >> tempStock;
                                                        if(stoi(tempStock) <= stoi(Products[i][4])){
                                                            carrinhoCompras[lastPos][0] = to_string(stoi(Bills[getsize(Bills) - 1][0]) + 1);
                                                            carrinhoCompras[lastPos][1] = SESSION[0][0];
                                                            carrinhoCompras[lastPos][2] = to_string(lastPos + 1);
                                                            carrinhoCompras[lastPos][4] = tempStock;
                                                            carrinhoCompras[lastPos][5] = Products[i][2];
                                                            carrinhoCompras[lastPos][6] = "24%";
                                                            carrinhoCompras[lastPos][7] = to_string(stoi(Products[i][2]) * 1.24 * stoi(tempStock));
                                                            carrinhoCompras[lastPos][8] = "0";
                                                            carrinhoCompras[lastPos][10] = "0";
                                                            carrinhoCompras[lastPos][12] = "\n";
                                                            carrinhoCompras[lastPos + 1] = nullptr;
                                                            //remover ao stock do produto
                                                            Products[i][4] = to_string(stoi(Products[i][4]) - stoi(tempStock));
                                                            cout << "Produto " << tempID << " adicionado com sucesso! (" << tempStock << " unidades)" << endl;
                                                            system("pause");
                                                            availableStock = false;
                                                            confirmStock = false;
                                                        }
                                                        else if(stoi(tempStock) > stoi(Products[i][4])){
                                                            cout << "Quantidade em stock insuficiente! Stock disponível: " << Products[i][4] << ". Por favor volte a inserir a quantidade desejada: ";
                                                        }
                                                    
                                                }
                                            }
                                            else if(stoi(Products[i][4]) <= 0){
                                            cout << "Quantidade em stock insuficiente!";
                                            system("pause");
                                            confirmStock = false;
                                            }
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
                tableRelatorios(carrinhoCompras);
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
                                carrinhoCompras[y][8] = to_string(total);
                                carrinhoCompras[y][11] = to_string(gottime -> tm_mday) + "/" + to_string(gottime -> tm_mon) + "/" + to_string(gottime -> tm_year) + "   " + to_string(gottime -> tm_hour) + ":" + to_string(gottime -> tm_min) + ":" + to_string(gottime -> tm_sec);
                            }
                            system("pause");
                            checkout = false;
                        break;

                        case 'Y':
                            for(int y = 0; y < getsize(carrinhoCompras); y++){
                                total += stod(carrinhoCompras[y][7]);
                            }
                            for(int y = 0; y < getsize(carrinhoCompras); y++){
                                carrinhoCompras[y][8] = to_string(total);
                                carrinhoCompras[y][11] = to_string(gottime -> tm_mday) + "/" + to_string(gottime -> tm_mon) + "/" + to_string(gottime -> tm_year) + "   " + to_string(gottime -> tm_hour) + ":" + to_string(gottime -> tm_min) + ":" + to_string(gottime -> tm_sec);
                            }
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
                tableRelatorios(carrinhoCompras);
                system("pause");
                cout << "\n\nTotal a pagar: " << total << endl << endl;
                cout << "Insira o valor a pagar: ";

                while(payment){
                    cin >> valorEntregue;
                    if(valorEntregue > total){
                        troco = valorEntregue - total;
                        cout << "Troco: " << troco << endl;
                        cout << "Obrigado pela sua compra! Volte sempre!" << endl;
                        system("pause");
                        payment = false;
                        for(int y = 0; y < getsize(carrinhoCompras); y++){
                            growArray(Bills, carrinhoCompras[y]);
                        }
                        
                    }
                    else if(valorEntregue < total){
                        system("cls");
                        cout << "Valor insuficiente!" << endl;
                        system("pause");
                    }
                    else if(valorEntregue = total){
                        troco = 0;
                        cout << "Troco: " << troco << endl;
                        cout << "Obrigado pela sua compra! Volte sempre!" << endl;
                        for(int y = 0; y < getsize(carrinhoCompras); y++){
                            growArray(Bills, carrinhoCompras[y]);
                        }
                        system("pause");
                        payment = false;
                    }
                }
                    

            break;
 






































































            case 'Y':
                system("cls");
                while(confirmStock){
                    confirmStock = true;
                    cout << "Insira o ID do produto: ";

                    cin >> tempID;
                    for (int i = 0; i < getsize(Products); i++){
                        if(tempID == Products[i][0]){
                            if(stoi(Products[i][4]) > 0){
                                int lastPos = getsize(carrinhoCompras);
                                delete[] carrinhoCompras[lastPos];
                                carrinhoCompras[lastPos] = new string[13];

                                carrinhoCompras[lastPos][3] = Products[i][1];
                                cout << "Insira a quantidade que deseja: ";
                                while(availableStock){
                                    cin >> tempStock;
                                        int j = 0;
                                        if(stoi(tempStock) <= stoi(Products[i][4])){
                                            //preencher carrinhoCompras
                                            carrinhoCompras[lastPos][1] = SESSION[0][0];
                                            carrinhoCompras[lastPos][0] = to_string(stoi(Bills[getsize(Bills) - 1][0]) + 1);
                                            carrinhoCompras[lastPos][2] = to_string(lastPos + 1);
                                            carrinhoCompras[lastPos][4] = tempStock;
                                            carrinhoCompras[lastPos][5] = Products[i][2];
                                            carrinhoCompras[lastPos][6] = "24%";
                                            carrinhoCompras[lastPos][7] = to_string(stoi(Products[i][2]) * 1.24 * stoi(tempStock));
                                            carrinhoCompras[lastPos][8] = "0";
                                            carrinhoCompras[lastPos][9] = "0";
                                            carrinhoCompras[lastPos][10] = "0";
                                            carrinhoCompras[lastPos][12] = "\n";
                                            carrinhoCompras[lastPos + 1] = nullptr;

                                            //remover ao stock do produto
                                            Products[i][4] = to_string(stoi(Products[i][4]) - stoi(tempStock));

                                            cout << "Produto " << tempID << " adicionado com sucesso! (" << tempStock << " unidades)" << endl;
                                            system("pause");
                                            confirmStock = false;
                                            availableStock = false;
                                        }
                                        else if(stoi(tempStock) > stoi(Products[i][4])){
                                            cout << "Quantidade em stock insuficiente! Stock disponível: " << Products[i][4] << ". Por favor volte a inserir a quantidade desejada: ";
                                        }
                                    
                                    
                                }
                                
                            }
                            else if(stoi(Products[i][4]) <= 0){
                            cout << "De momento não temos stock suficiente. Por favor tente mais tarde.";
                            system("pause");
                            confirmStock = false;
                            }
                        }
                        
                    }
                    

                }
                    

                    while(productBuy){
                        confirmStock = true;
                        availableStock = true;
                        system("cls");
                        cout << "Deseja inserir mais algum produto?[y/n] ";
                        cin >> insert;


                        switch(insert){
                            case 'y':
                                system("cls");
                                cout << "Insira o ID do produto: ";
                                while(confirmStock){
                                    cin >> tempID;
                                    for (int i = 0; i < getsize(Products); i++){
                                        if(tempID == Products[i][0]){
                                            if(stoi(Products[i][4]) > 0){
                                                int lastPos = getsize(carrinhoCompras);
                                                delete[] carrinhoCompras[lastPos];
                                                carrinhoCompras[lastPos] = new string[13];

                                                carrinhoCompras[lastPos][3] = Products[i][1];
                                                cout << "Insira a quantidade que deseja: ";
                                                while(availableStock){
                                                    cin >> tempStock;
                                                        if(stoi(tempStock) <= stoi(Products[i][4])){
                                                            carrinhoCompras[lastPos][0] = to_string(stoi(Bills[getsize(Bills) - 1][0]) + 1);
                                                            carrinhoCompras[lastPos][1] = SESSION[0][0];
                                                            carrinhoCompras[lastPos][2] = to_string(lastPos + 1);
                                                            carrinhoCompras[lastPos][4] = tempStock;
                                                            carrinhoCompras[lastPos][5] = Products[i][2];
                                                            carrinhoCompras[lastPos][6] = "24%";
                                                            carrinhoCompras[lastPos][7] = to_string(stoi(Products[i][2]) * 1.24 * stoi(tempStock));
                                                            carrinhoCompras[lastPos][8] = "0";
                                                            carrinhoCompras[lastPos][9] = "0";
                                                            carrinhoCompras[lastPos][10] = "0";
                                                            carrinhoCompras[lastPos][12] = "\n";
                                                            carrinhoCompras[lastPos + 1] = nullptr;
                                                            //remover ao stock do produto
                                                            Products[i][4] = to_string(stoi(Products[i][4]) - stoi(tempStock));
                                                            cout << "Produto " << tempID << " adicionado com sucesso! (" << tempStock << " unidades)" << endl;
                                                            system("pause");
                                                            availableStock = false;
                                                            confirmStock = false;
                                                        }
                                                        else if(stoi(tempStock) > stoi(Products[i][4])){
                                                            cout << "Quantidade em stock insuficiente! Stock disponível: " << Products[i][4] << ". Por favor volte a inserir a quantidade desejada: ";
                                                        }
                                                    
                                                }
                                            }
                                            else if(stoi(Products[i][4]) <= 0){
                                            cout << "Quantidade em stock insuficiente!";
                                            system("pause");
                                            confirmStock = false;
                                            }
                                        }
                        
                                    }

                                }
                            break;

                            case 'Y':
                                system("cls");
                                cout << "Insira o ID do produto: ";
                                while(confirmStock){
                                    cin >> tempID;
                                    for (int i = 0; i < getsize(Products); i++){
                                        if(tempID == Products[i][0]){
                                            if(stoi(Products[i][4]) > 0){
                                                int lastPos = getsize(carrinhoCompras);
                                                delete[] carrinhoCompras[lastPos];
                                                carrinhoCompras[lastPos] = new string[13];

                                                carrinhoCompras[lastPos][3] = Products[i][1];
                                                cout << "Insira a quantidade que deseja: ";
                                                while(availableStock){
                                                    cin >> tempStock;
                                                        if(stoi(tempStock) <= stoi(Products[i][4])){
                                                            carrinhoCompras[lastPos][0] = to_string(stoi(Bills[getsize(Bills) - 1][0]) + 1);
                                                            carrinhoCompras[lastPos][1] = SESSION[0][0];
                                                            carrinhoCompras[lastPos][2] = to_string(lastPos + 1);
                                                            carrinhoCompras[lastPos][4] = tempStock;
                                                            carrinhoCompras[lastPos][5] = Products[i][2];
                                                            carrinhoCompras[lastPos][6] = "24%";
                                                            carrinhoCompras[lastPos][7] = to_string(stoi(Products[i][2]) * 1.24 * stoi(tempStock));
                                                            carrinhoCompras[lastPos][8] = "0";
                                                            carrinhoCompras[lastPos][10] = "0";
                                                            carrinhoCompras[lastPos][12] = "\n";
                                                            carrinhoCompras[lastPos + 1] = nullptr;
                                                            //remover ao stock do produto
                                                            Products[i][4] = to_string(stoi(Products[i][4]) - stoi(tempStock));
                                                            cout << "Produto " << tempID << " adicionado com sucesso! (" << tempStock << " unidades)" << endl;
                                                            system("pause");
                                                            availableStock = false;
                                                            confirmStock = false;
                                                        }
                                                        else if(stoi(tempStock) > stoi(Products[i][4])){
                                                            cout << "Quantidade em stock insuficiente! Stock disponível: " << Products[i][4] << ". Por favor volte a inserir a quantidade desejada: ";
                                                        }
                                                    
                                                }
                                            }
                                            else if(stoi(Products[i][4]) <= 0){
                                            cout << "Quantidade em stock insuficiente!";
                                            system("pause");
                                            confirmStock = false;
                                            }
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
                tableRelatorios(carrinhoCompras);
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
                                carrinhoCompras[y][8] = to_string(total);
                                carrinhoCompras[y][11] = to_string(gottime -> tm_mday) + "/" + to_string(gottime -> tm_mon) + "/" + to_string(gottime -> tm_year) + "   " + to_string(gottime -> tm_hour) + ":" + to_string(gottime -> tm_min) + ":" + to_string(gottime -> tm_sec);
                            }
                            system("pause");
                            checkout = false;
                        break;

                        case 'Y':
                            for(int y = 0; y < getsize(carrinhoCompras); y++){
                                total += stod(carrinhoCompras[y][7]);
                            }
                            for(int y = 0; y < getsize(carrinhoCompras); y++){
                                carrinhoCompras[y][8] = to_string(total);
                                carrinhoCompras[y][11] = to_string(gottime -> tm_mday) + "/" + to_string(gottime -> tm_mon) + "/" + to_string(gottime -> tm_year) + "   " + to_string(gottime -> tm_hour) + ":" + to_string(gottime -> tm_min) + ":" + to_string(gottime -> tm_sec);
                            }
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
                tableRelatorios(carrinhoCompras);
                system("pause");
                cout << "\n\nTotal a pagar: " << total << endl << endl;
                cout << "Insira o valor a pagar: ";

                while(payment){
                    cin >> valorEntregue;
                    if(valorEntregue > total){
                        troco = valorEntregue - total;
                        cout << "Troco: " << troco << endl;
                        cout << "Obrigado pela sua compra! Volte sempre!" << endl;
                        system("pause");
                        payment = false;
                        for(int y = 0; y < getsize(carrinhoCompras); y++){
                            growArray(Bills, carrinhoCompras[y]);
                        }
                        
                    }
                    else if(valorEntregue < total){
                        cout << "Valor insuficiente!" << endl;
                        system("pause");
                    }
                    else if(valorEntregue = total){
                        troco = 0;
                        cout << "Troco: " << troco << endl;
                        cout << "Obrigado pela sua compra! Volte sempre!" << endl;
                        for(int y = 0; y < getsize(carrinhoCompras); y++){
                            growArray(Bills, carrinhoCompras[y]);
                        }
                        system("pause");
                        payment = false;
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



