#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    
    q.push("Maitreya");
    q.push("Tubu");
    q.push("Panigrahi");


    cout<<"First Element is "<<q.front()<<endl;
    
    cout<<"Size after pop "<<q.size()<<endl;
    q.pop();
    cout<<"First Element is "<<q.front()<<endl;

    cout<<"Size after pop "<<q.size()<<endl;

}