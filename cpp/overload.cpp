#include <stdio.h>
#include <cstring>

class printData {
    public: 
    void print(int i){
        printf("%i\n",i);

    }
    void print(double d){
        printf("%f\n",d);
    }
    void print(char* c){
        printf("%s\n",c);
    }
};

int main(){
    printData pd;

    char hi[12] = "Hello World";
    pd.print(5);
    pd.print(5.0);
    pd.print(hi);



    return 0;
}