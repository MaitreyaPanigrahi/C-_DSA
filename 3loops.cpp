#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     cout<<i<<" ";
    //     i=i+1;
    // }

    // int n;
    // cin>>n;
    // int sum=0;
    // int i=1;
    // while(i<=n){
    //     sum=sum+i;
    //     i=i+1;
    // }
    // cout<<sum;

    // int n;
    // cin>>n;
    // int i=2;
    // int sum=0;
    // while(i<=n){
    // sum=sum+i;
    // i=i+2;

    // }
    // cout<<sum;

    // float far,cel;
    // cin>>far;
    // cel=5*(far-32)/9;
    // cout<<cel;

    int n;
    cin>>n;
    int num=2;
    while(num<n){
        if((n%num)==0){
            cout<<"Not Prime for "<<num<<endl;
        }
        else{
            cout<<"Prime for "<<num<<endl;
        }
        num=num+1;
    }


}