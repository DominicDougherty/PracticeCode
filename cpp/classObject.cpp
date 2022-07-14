#include <cstdio>
#include <stdio.h>

class Box {
    public:
        Box(void){}
        ~Box(void){printf("Box is being deleted\n");}
        Box(double len, double b, double h){
            length = len;
            breadth = b;
            height = h;
        }
        double getVolume(void){
            return length*breadth*height;
        }

        void setLength(double len){
            length = len;
        }
        void setHeight(double h){
            height = h;
        }
        void setBreadth(double b){
            breadth = b;
        }
        double getLength(void){
            return length;
        }
        double getHeight(void){
            return height;
        }
        double getBreadth(void){
            return breadth;
        }

    private:
        double length;
        double breadth;
        double height;
};

/*Box::Box(void){}
Box::~Box(void){printf("Box is being deleted\n");}
Box::Box(double len, double b, double h){
    length = len;
    breadth = b;
    height = h;
}*/

int main(){
    Box box1;
    Box box2(1,2,3);
    Box *ptr;

    ptr = &box2;

    double volume = 3;

    box1.setHeight(5);
    box1.setBreadth(6);
    box1.setLength(7);

    volume = box1.getHeight() * box1.getBreadth() * box1.getLength();
    printf("Volume = %f\n", volume);
    printf("Volume =  %f\n", box1.getVolume());
    printf("Volume2 =  %f\n", box2.getVolume());
    printf("Pointer Volume2 =  %f\n", ptr->getVolume());

    return 0;
}