#include <pthread.h>
#include <cstdlib>
#include <iostream>

using namespace std;

#define NUM_THREADS 5

void *wait(void *t){
    int i;
    long tid;

    tid = long(t);
    cout<<"sleeping in thread    ";
    cout << "Thread with id: " << tid <<endl;
    pthread_exit(NULL);
}


int main(){

    pthread_t threads[NUM_THREADS];
    pthread_attr_t attr;
    int rc;
    int i;
    void* status;

    //initialize and set thread joinable
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);


        for (i=0; i<NUM_THREADS; i++){
            cout<< "Creating thread: " << i << "\n" << endl;
            rc = pthread_create(&threads[i], &attr, wait, (void *)i);

            if (rc) {
                cout << "Error unable to create thread" << endl;
                exit(-1);
            }
    }

    //free attribute and wait for the other threads
    pthread_attr_destroy(&attr);
    for( i=0; i<NUM_THREADS; i++ ){
        rc = pthread_join(threads[i], &status);

        if (rc) {
            cout << "Error unable to create thread" << endl;
            exit(-1);
        }
        cout<< "Main completed thread id: "<<i;
        cout<< " exiting with status" << status << endl;
    }

    pthread_exit(NULL);

    return 0;
}