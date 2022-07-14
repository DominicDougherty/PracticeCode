#include <thread>
#include <cstdio>

int main(){
    std::thread myWorker([]{printf("Thread %d is using a lambda function\n", std::this_thread::get_id());}
    );
    myWorker.join();
    return 0;
}