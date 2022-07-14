#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <stdexcept>

using namespace std;

template <typename T>
inline T const& Max (T const& a, T const& b) {
    return a < b ? b:a;
}

template <class T>
class Stack {
    private:
        vector<T> elems;

    public:
        void push(T const&);
        void pop();
        T top() const;
        bool empty() const{
            return elems.empty();
        }

};

template <class T>
class Stack {
    private:
        vector<T> elems;

    public:
        void push(T const&);
        void pop();
        T top() const;
        bool empty() const{
            return elems.empty();
        }

};

template <class T>
void Stack<T>::push(T const& elem) {
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop() {
    if (elems.empty())
    {
        throw out_of_range("empty stack");
    }
    elems.pop_back();
}

template <class T>
T Stack<T>::top() const{
    if (elems.empty())
    {
        throw out_of_range("empty stack");
    }
    return elems.back();
}



int main () {

    int i = 39;
    int j = 20;
    cout <<"Max(f1,f2): " << Max(i,j) << endl;

    double f1 = 13.5;
    double f2 = 20.7;
    cout <<"Max(f1,f2): " << Max(f1,f2) << endl;

    string s1 = "Hello";
    string s2 = "World";
    cout <<"Max(f1,f2): " << Max(s1,s2) << endl;
    try{
    Stack<int> intStack;
    Stack<string> stringStack;

    intStack.push(7);
    cout << intStack.top() <<endl;


    stringStack.push("hello");
    cout << stringStack.top() <<endl;

    stringStack.pop();
    stringStack.pop();
    }
    catch (exception const& ex){
        cerr << ex.what() << endl;
    }


    return 0;
}