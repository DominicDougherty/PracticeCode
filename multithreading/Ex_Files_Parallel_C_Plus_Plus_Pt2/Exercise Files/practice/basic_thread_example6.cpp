#include <thread>
#include <cstdio>
#include <string>

void changeTarget(std::string& targetCity){
    targetCity = "Sootopolis";
    printf("Target city in thread is %s\n", targetCity);
}

int main(){

    std::string targetCity = "MossDeep";
    std::thread myThread(changeTarget, targetCity);
    myThread.join();
    printf("Target city is currently %s\n", targetCity);
    return 0;
}