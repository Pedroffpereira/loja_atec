#include<iostream>

#include "../control_array/array_function.h"

#include <string>



using namespace std;

<<<<<<< HEAD
bool login(string **SESSION, string** accounts);
=======
    cout << "Digite a sua password:" << endl << endl;

    cin >> pass;


    for (int i = 0; i < getsize(accounts); i++) {
        if(accounts[i][1] == email && accounts[i][2] == pass){
            
            growArray(SESSION,accounts[i]);
            return true;
        }

    }
>>>>>>> 4fc2cb3287ca396ad006dfa37780aa9c52c6514d

