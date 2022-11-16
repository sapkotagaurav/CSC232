#ifndef STACK_H
#define STACK_H
#include <vector>

using namespace std;

template <class T>
class Stack
{
private:
    vector<T> arr;
public:
    Stack(/* args */);
    ~Stack();
    void pop();
    T top();
    void push(T);
    bool empty();
    vector<T> getStack();

};

template <class T>
Stack<T>::Stack(){
    arr ={};


}
template <class T>
Stack<T>::~Stack()
{
}
template <class T>
void Stack<T>::pop(){
    arr.erase(arr.begin());
}
template <class T>
T Stack<T>::top(){
    return *arr.begin();
}
template <class T>
void Stack<T>::push(T x){
    arr.insert(arr.begin(),x);

}

template <class T>
vector<T> Stack<T>::getStack(){
    return arr;
}
template <class T>
bool Stack<T>::empty(){
    return arr.size() ==0;
}




#endif