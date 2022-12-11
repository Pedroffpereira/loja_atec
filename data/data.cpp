#include "./data.h"

//Load Accounts Data
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

void loadProducts(string** Products) {
    Products[0] = nullptr;
}

void loadBills(string** Bills) {

    Bills[0] = nullptr;

}