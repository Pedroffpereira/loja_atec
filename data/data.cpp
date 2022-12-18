#include "./data.h"

//Load Accounts Data
#ifndef loadClients_file
#define loadClients_file
void loadClients(string** Accounts) {

    Accounts[0] = new string[9];

    Accounts[1] = new string[9];

    Accounts[0][0] = "1";

    Accounts[0][1] = "pedro.pereira@gmail.com";

    Accounts[0][2] = "1234";

    Accounts[0][3] = "ADMIN";

    Accounts[0][4] = "274687313";

    Accounts[0][5] = "Pedro Pereira";

    Accounts[0][6] = "913336677";

    Accounts[0][7] = "Rua";

    Accounts[0][8] = "\n";

    Accounts[1][0] = "2";

    Accounts[1][1] = "bernardo.teixeira@gmail.com";

    Accounts[1][2] = "5678";

    Accounts[1][3] = "CLIENT";

    Accounts[1][4] = "2";

    Accounts[1][5] = "Bernardo Teixeira";

    Accounts[1][6] = "913336677";

    Accounts[1][7] = "Rua da Avenida";

    Accounts[1][8] = "\n";

    Accounts[2] = nullptr;
}
#endif
#ifndef loadProducts_file
#define loadProducts_file
void loadProducts(string** Products) {
    //id, nome, preçoSemIva, preçoComIva, stock, \n
    Products[0] = new string[6];

    Products[1] = new string[6];

    Products[0][0] = "101";

    Products[0][1] = "Konosuba";

    Products[0][2] = "20";

    Products[0][3] = "26";

    Products[0][4] = "5";

    Products[0][5] = "\n";

    Products[1][0] = "102";

    Products[1][1] = "Chainsaw Man";

    Products[1][2] = "30";

    Products[1][3] = "29";

    Products[1][4] = "20";

    Products[1][5] = "\n";




    
    Products[2] = nullptr;
}
#endif
#ifndef loadBills_file
#define loadBills_file
void loadBills(string** Bills) {

    //idfatura, idcliente, idlinha, nome, quant, precoSiva, iva, precoCiva, valorEntregue, troco, data, \n 

    Bills[0] = new string[12];

    Bills[0][0] = "1";

    Bills[0][1] = "2";

    Bills[0][2] = "1";

    Bills[0][3] = "Blame V1";

    Bills[0][4] = "2";

    Bills[0][5] = "20";

    Bills[0][6] = "24%";
     
    Bills[0][7] = "24.80";

    Bills[0][8] = "25";

    Bills[0][9] = "0.20";

    Bills[0][10] = "11-12-2022";

    Bills[0][11] = "\n";

    Bills[1] = nullptr;
}

#endif