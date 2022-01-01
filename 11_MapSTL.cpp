#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string> m;

    m[1]="panigrahi";
    m[2]="maitreya";
    m[13]="tubu";
    m.insert({5,"beeem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<< endl;
    }

    cout<<"Finding 13 "<<m.count(13)<<endl;
}
