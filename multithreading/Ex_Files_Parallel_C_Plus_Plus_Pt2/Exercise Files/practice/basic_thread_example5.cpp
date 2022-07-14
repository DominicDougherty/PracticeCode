#include <thread>
#include <cstdio>

void myFunc(int num, int counter){
    for (int i=0; i<num; i++){
        counter++;
        printf("Thread %d has executed %d times\n",std::this_thread::get_id(), i+1);
        printf("counter = %d\n", counter);
    }
}

int main(){

    std::thread myThread(myFunc, 5, 29);
    myThread.join();
    return 0;
}