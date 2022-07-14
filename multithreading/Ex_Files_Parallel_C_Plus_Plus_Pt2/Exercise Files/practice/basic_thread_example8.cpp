#include <thread>
#include <cstdio>
#include <future>
#include <iostream>

void myFunc(int num, int counter){
    for (int i=0; i<num; i++){
        counter++;
        printf("Thread %d has executed %d times\n",std::this_thread::get_id(), i+1);
        printf("counter = %d\n", counter);
    }
}

int main(){
    auto promise = std::promise<std::string>();
    auto producer = std::thread([&]{
        std::this_thread::sleep_for(std::chrono::seconds(5));
        promise.set_value("some message");
    });

    auto future = promise.get_future();
    auto consumer = std::thread([&]{
        std::cout << future.get().c_str();
    });

    producer.join();
    consumer.join();
}