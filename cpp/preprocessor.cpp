#include <iostream>
using namespace std;
#define DEBUG

#define MIN(a,b) (((a)<(b))? a:b)
#define MKSTR(x) #x
#define concat(a,b) a##b

int main(){
    int i, j;
    i = 300;
    j = 30;

    int xy = 100;
    #ifdef DEBUG
    cerr <<"Trace" << endl;
    #endif

    #if 0
    aoiudhfaoisufhaidufhaosfia
    #endif

    cout << "The minimum is: " << MIN(i,j) << endl;
    cout<< MKSTR(Hello world) << endl;
    cout<<concat(x,y);

    #ifdef DEBUG
    cerr<<"Coming out of function"<<endl;
    #endif




    return 0;
}