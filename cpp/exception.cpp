#include <stdio.h>
#include <exception>

double division (int a, int b)
{
    if(b==0){
        throw "Division by zero error!\n";
    }
    return a/b;
}

struct myException: public std::exception {
    const char* what () const throw () {
        return "C++ exception";
    }
};

int main()
{
    int x = 50;
    int y = 0;
    double z = 0;


    try {
        z = division(x,y);
    }
    catch (const char* msg)
    {
        printf(msg);
    }

    throw myException();

    return 0;
}