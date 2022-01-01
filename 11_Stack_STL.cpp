#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> s;
    s.push("Maitreya");
    s.push("Tubu");
    s.push("Panigrahi");

    cout<<"Top element is "<<s.top()<<endl;

    s.pop();
    cout<<"Top element is "<<s.top()<<endl;

    cout<<"Size of stack is "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;
}