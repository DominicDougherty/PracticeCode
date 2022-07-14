#include <pthread.h>
#include <cstdlib>
#include <iostream>

using namespace std;

#define NUM_THREADS 5

struct threadData {
    int thread_id;
    char *message;
};

void *PrintHello1(void *threadid){
    long tid;
    tid = (long)threadid;
    cout << "Hello world! Thread ID: " << tid << "\n" << endl;

    pthread_exit(NULL);
}

void *PrintHello2(void *threadarg){
    struct threadData *myData;
    myData = (struct threadData*) threadarg;
    
    cout << "My id is: "<< myData->thread_id<<"\n"<<endl;
    cout << "My message is: "<< myData->message<<"\n"<<endl;

    pthread_exit(NULL);
}

int main(){

    pthread_t threads[NUM_THREADS];
    struct threadData td[NUM_THREADS];
    int rc;
    int i;

    /*for (i=0; i<NUM_THREADS; i++){
        cout<< "Creating thread: " << i << "\n" << endl;
        rc = pthread_create(&threads[i], NULL, PrintHello1, (void *)i);

        if (rc) {
            cout << "Error unable to create thread" << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);*/

        for (i=0; i<NUM_THREADS; i++){
            td[i].thread_id = i;
            td[i].message = "This is message";
            cout<< "Creating thread: " << i << "\n" << endl;
            rc = pthread_create(&threads[i], NULL, PrintHello2, (void *)&td[i]);

            if (rc) {
                cout << "Error unable to create thread" << endl;
                exit(-1);
            }
    }
    pthread_exit(NULL);

    return 0;
}