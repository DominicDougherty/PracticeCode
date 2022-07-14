#include <stdio.h>


#include <stdio.h>
#include <cstdio>

//Base class
 class Shape {
    protected:
        int width, height;
    public:
    Shape(int a =0, int b = 0)
    {
        width = a;
        height = b;
    }
    virtual int area(){ //Keyword virtual 
        return 0;
    }
 };


 //Derived class

class Rectangle: public Shape{
    public:

        Rectangle(int a =0, int b=0):Shape(a,b) {}
        int area(){
            return (width * height);
        }
};

class Triangle: public Shape{
    public:
        Triangle(int a =0, int b=0):Shape(a,b) {}
        int area(){
            return (0.5*(width * height));
        }
};

int main(void){
    Shape* shape;
    Rectangle rec(10, 7);
    Triangle tri(10,5);

    shape = &rec;
    printf("Rec area = %i\n" , shape->area());

    shape = &tri;
    printf("Tri area = %i\n" , shape->area());

    return 0;
}