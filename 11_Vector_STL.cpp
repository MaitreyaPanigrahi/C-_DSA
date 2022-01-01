#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> a(5,1);
    cout<<"Print a ";
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;


    vector<int> last(a);
    cout<<"Print Last ";!
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> v;
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity  "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity  "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity "<<v.capacity()<<endl;
    cout<<"Size "<<v.size()<<endl;

    cout<<"Element at 2nd index is "<<v.at(2)<<endl;

    cout<<"First Element is "<<v.front()<<endl;
    cout<<"Last Element is "<<v.back()<<endl;


    cout<<"Before Pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After Pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size before clear "<<v.size()<<endl;
    v.clear();
    cout<<"Size after clear "<<v.size()<<endl;
}