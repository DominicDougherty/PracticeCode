#include <stdio.h>
#include <cstdio>

//Base class
 class Shape {
    public:
    void setWidth(int w){
        width = w;
    }
    void setHeight(int h){
        height = h;
    }

    protected:
     int width;
     int height;


 };

 class PaintCost {
    public:
    int getCost(int area){
        return area*70;
    }
 };

 //Derived class

class Rectangle: public Shape, public PaintCost {
    public:
        int getArea(){
            return (width * height);
        }
};

int main(void){

    Rectangle Rect;
    Rect.setHeight(5);
    Rect.setWidth(7);
    printf("Rectangle area = %i\n", Rect.getArea());
    printf("Rectangle total paint cost = %i\n", Rect.getCost(Rect.getArea()));

    return 0;
}