#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int>d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    cout<<"1st index Element is "<<d.at(1)<<endl;
    cout<<"Front element is "<<d.front()<<endl;
    cout<<"Back element is "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;


}