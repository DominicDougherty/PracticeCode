#include <iostream>


int main(){

    double* pvalue = NULL;
    pvalue = new double;

    *pvalue = 29494.99;

    std::cout << *pvalue << std::endl;

    delete pvalue;
    return 0;
}