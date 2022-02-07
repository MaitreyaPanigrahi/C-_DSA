#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    // properties
    int *arr;
    int top;
    int size;
  // behaviour
    Stack(int size){
        this->size=size;
        arr = new int[size];
        top = -1;

    }

    void push(int element){
        if(size - top >1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0 && top < size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

  
};
int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
     st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty mere dost"<<endl;
    }
    else{
        cout<<"Stack is not empty mere dost"<<endl;
    }
    /*
    // Creation of stack
    stack<int> s;
    s.push(2);
    s.push(6);

    s.pop();

    cout<<"printing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of stack is "<<s.size()<<endl;
    */





    return 0;
}