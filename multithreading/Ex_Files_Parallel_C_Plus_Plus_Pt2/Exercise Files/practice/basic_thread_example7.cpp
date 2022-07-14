#include <thread>
#include <cstdio>

void count(){
    for(int i=0; i<100; i++)
    {
        printf("counter = %d\n", i);
    }
}

int main(){

    std::thread myThread(count);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    myThread.detach();
    return 0;
}