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
    Products[0] = nullptr;
}
#endif
#ifndef loadBills_file
#define loadBills_file
void loadBills(string** Bills) {

    Bills[0] = new string[12];

    Bills[0][0] = "1";

    Bills[0][1] = "2";

    Bills[0][2] = "1";

    Bills[0][3] = "Blame V1";

    Bills[0][4] = "0";

    Bills[0][5] = "20";

    Bills[0][6] = "24%";
     
    Bills[0][7] = "2.80";

    Bills[0][8] = "25";

    Bills[0][9] = "0.20";

    Bills[0][10] = "11-12-2022";

    Bills[0][11] = "\n";

    Bills[1] = new string[12];

    Bills[1][0] = "1";

    Bills[1][1] = "2";

    Bills[1][2] = "1";

    Bills[1][3] = "Blame V1";

    Bills[1][4] = "1";

    Bills[1][5] = "20";

    Bills[1][6] = "24%";
     
    Bills[1][7] = "1.80";

    Bills[1][8] = "25";

    Bills[1][9] = "0.20";

    Bills[1][10] = "11-12-2022";

    Bills[1][11] = "\n";

    Bills[2] = new string[12];

    Bills[2][0] = "2";

    Bills[2][1] = "2";

    Bills[2][2] = "1";

    Bills[2][3] = "Blame V2";

    Bills[2][4] = "2";

    Bills[2][5] = "20";

    Bills[2][6] = "24%";
     
    Bills[2][7] = "24.80";

    Bills[2][8] = "25";

    Bills[2][9] = "0.20";

    Bills[2][10] = "11-12-2022";

    Bills[2][11] = "\n";

    Bills[3] = nullptr;
}

#endif