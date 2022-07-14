#include <thread>
#include <cstdio>

void myFunc(int num){
    for (int i=0; i<num; i++){
        printf("Thread %d has executed %d times\n",std::this_thread::get_id(), i+1);
    }
}

int main(){

    std::thread myThread(myFunc, 5);
    myThread.join();
    return 0;
}