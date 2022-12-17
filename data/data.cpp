#include "./data.h"

//Load Accounts Data
#ifndef loadClients_file
#define loadClients_file
void loadClients(string** Accounts) {

    Accounts[0] = new string[9];
    //Conta admin só entra na parte de admin do projeto
    Accounts[0][0] = "1";

    Accounts[0][1] = "pedro.pereira@gmail.com";

    Accounts[0][2] = "1234";

    Accounts[0][3] = "ADMIN";

    Accounts[0][4] = "274687313";

    Accounts[0][5] = "Pedro Pereira";

    Accounts[0][6] = "913336677";

    Accounts[0][7] = "Rua";

    Accounts[0][8] = "\n";

    Accounts[1] = new string[9];

    Accounts[1][0] = "2";

    Accounts[1][1] = "bernardo.teixeira@gmail.com";

    Accounts[1][2] = "5678";

    Accounts[1][3] = "CLIENT";

    Accounts[1][4] = "2";

    Accounts[1][5] = "Bernardo Teixeira";

    Accounts[1][6] = "913336677";

    Accounts[1][7] = "Rua da Avenida";

    Accounts[1][8] = "\n";

    Accounts[2] = new string[9];

    Accounts[2][0] = "3";

    Accounts[2][1] = "henrique@gmail.com";

    Accounts[2][2] = "1234";

    Accounts[2][3] = "CLIENT";

    Accounts[2][4] = "2";

    Accounts[2][5] = "Henrique";

    Accounts[2][6] = "913116470";

    Accounts[2][7] = "Rua da Foz";

    Accounts[2][8] = "\n";

    Accounts[3] = new string[9];

    Accounts[3][0] = "4";

    Accounts[3][1] = "benaci@gmail.com";

    Accounts[3][2] = "1234";

    Accounts[3][3] = "CLIENT";

    Accounts[3][4] = "2";

    Accounts[3][5] = "João Benaci";

    Accounts[3][6] = "913336007";

    Accounts[3][7] = "Rua da Boavista";

    Accounts[3][8] = "\n";

    Accounts[4] = new string[9];

    Accounts[4][0] = "5";

    Accounts[4][1] = "joao@gmail.com";

    Accounts[4][2] = "1234";

    Accounts[4][3] = "CLIENT";

    Accounts[4][4] = "2";

    Accounts[4][5] = "João Pereira";

    Accounts[4][6] = "913336671";

    Accounts[4][7] = "Pr Dr jose sampaio";

    Accounts[4][8] = "\n";

    Accounts[5] = nullptr;
}
#endif
#ifndef loadProducts_file
#define loadProducts_file
void loadProducts(string** Products) {
    Products[0] = new string[6];

    Products[0][0] = "1";

    Products[0][1] = "Blame V1";

    Products[0][2] = "20";

    Products[0][3] = "26";

    Products[0][4] = "5";

    Products[0][5] = "\n";

    Products[1] = new string[6];

    Products[1][0] = "2";

    Products[1][1] = "Gigant V1";

    Products[1][2] = "20";

    Products[1][3] = "26";

    Products[1][4] = "10";

    Products[1][5] = "\n";


    Products[2] = new string[6];

    Products[2][0] = "3";

    Products[2][1] = "Boku no Hero V1";

    Products[2][2] = "10";

    Products[2][3] = "13";

    Products[2][4] = "8";

    Products[2][5] = "\n";

    Products[3] = new string[6];

    Products[3][0] = "4";

    Products[3][1] = "Full Metal Alchemist V1";

    Products[3][2] = "10";

    Products[3][3] = "13";

    Products[3][4] = "8";

    Products[3][5] = "\n";

    Products[4] = new string[6];

    Products[4][0] = "5";

    Products[4][1] = "Boku no Pico V100";

    Products[4][2] = "100";

    Products[4][3] = "130";

    Products[4][4] = "100";

    Products[4][5] = "\n";

    Products[5] = nullptr;
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