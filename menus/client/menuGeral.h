#include<iostream>
#include<string>


#include "./manageAcc.cpp"
#include "./compra.cpp"
#include "../admin/relatorios.h"
#include "../../data/data.cpp"
#include "../../data/data.h"
#include "../../config/ProductsFunctions.cpp"


using namespace std;

void showClientInfo(string*** GLOBAL,string** SESSION);

void changeClientAcc(string*** GLOBAL,string** SESSION);


void menu_client(string*** GLOBAL,string** SESSION, string** list_products);
