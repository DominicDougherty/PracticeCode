#include <stdio.h>

class Adder {
    public: 
        //constructor
        Adder (int i=0){total = i;}

        //interface to outside world
        void addNum(int number) {
            total+=number;
        }
        int getTotal()
        {
            return total;
        }

    private:
        //hidden data from the outside world
        int total;
};


int main(){
    Adder a;

    a.addNum(10);
    a.addNum(20);
    a.addNum(30);

    printf("Total = %d\n", a.getTotal());
    return 0;
}