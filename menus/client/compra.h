#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

#include "../../data/data.cpp"
#include "../../control_array/array_function.cpp"
#include "../../config/ProductsFunctions.cpp"


void showProducts(string** Products, string** SESSION);
void vendaProdutos(string** Products, string** SESSION, string** list_products);
void tableReceipt(string** Products);