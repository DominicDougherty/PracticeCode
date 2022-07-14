#include <csignal>
#include <iostream>

using namespace std;

void signalhandler(int signum){

    cout << "Interrupt signal (" << signum << ") received\n";
    exit (signum);
}

int main() {
    signal(SIGINT, signalhandler);
    int i =0;
    while(++i)
    {
        cout<<" going to sleep "<<endl;
        if(i==5){
            raise (SIGINT);
        }
        //sleep(1);
    }


    return 0;
}