#include <iostream>


namespace first_space {
    void func(){
        std::cout<<"hello"<<std::endl;
    }
}

using namespace first_space;
int main(){

    func();
    return 0;
}