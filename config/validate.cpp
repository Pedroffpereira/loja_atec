#include "./validate.h"


#ifndef validateName_file
#define validateName_file

string validateName(string** Matrix){

    char first;

    string choice,Name;


    bool error = false;
    
    do {
        cin >> first;

        getline(cin, choice);
        
        Name = first + choice;

        
        for (int i = 0; i < getsize(Matrix); i++)
        {
            if(Matrix[i][1] == Name){
                error = true;
                cout << "O nome já esta a ser utilizado " << endl;
                cout << "Por favor insira um novo nome" << endl;
                break;
            }
        }
        

    } while (error);
    
    return Name;
}


#endif




#ifndef validatetype_file
#define validatetype_file

int validateTypeInt(){

    int choice;

    while (!(cin >> choice))
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Por favor insira um numero" << endl;
    }
    


    return choice;

}
#endif

#ifndef validateTypeDouble_file
#define validateTypeDouble_file


double validateTypeDouble(){

    double choice;

    while (!(cin >> choice))
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Por favor insira um numero" << endl;
    }
    


    return choice;

}

#endif