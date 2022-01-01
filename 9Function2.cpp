#include<bits/stdc++.h>
using namespace std;
bool isEven(int num){
    if(num&1){
        return 0;
    }
    return 1;
}

int main(){
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }

}