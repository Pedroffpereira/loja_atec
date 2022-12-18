
#include"./login.h"
#ifndef logins

#define logins

bool login(string **SESSION, string** accounts) {
	system ("CLS");
    string email, pass;

    cout << "Digite o seu email:" << endl << endl;

    cin >> email;
    
    cout << endl << endl;


    cout << "Digite a sua password:" << endl << endl;

    cin >> pass;
    //Login administrado
    if(email == "admin" && pass == "admin") {
        string* tempaccounts = new string [7];
        tempaccounts[0] = "10000";
        tempaccounts[1] = "admin";
        
        tempaccounts[2] = "admin";
        
        tempaccounts[3] = "ADMIN";
        
        tempaccounts[4] = "";

        tempaccounts[5] = "";

        tempaccounts[6] = "\n";

        growArray(SESSION, tempaccounts);
            return true;
    }
//Login cliente
    for (int i = 0; i < getsize(accounts); i++) {
        if(accounts[i][1] == email && accounts[i][2] == pass){
            growArray(SESSION,accounts[i]);
            return true;
        }

    }


    return false;
    
    
}


#endif