
#include "../control_array/array_function.h"

#include "./ProductsFunctions.h"


#ifndef addProduct_file
#define addProduct_file
    void addProduct(string** list_products, string* product){

        growArray(list_products, product);

        return;
    }
#endif