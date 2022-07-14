#include <thread>
#include <cstdio>

class myClass
{
    public:
        void operator ()() const
        {
            printf("Thread %d is firing missiles\n", std::this_thread::get_id());
        }
};

int main(){
    myClass test;
    std::thread myWorkers[5];
    for(int i=0; i<5; i++)
    {
        myWorkers[i] = std::thread(test);
    }
    myWorkers[0].join();
    myWorkers[1].join();
    myWorkers[2].join();
    myWorkers[3].join();
    myWorkers[4].join();
    return 0;
}