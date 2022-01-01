#include<bits/stdc++.h>
using namespace std;

void update(int **p2){
    // p2=p2+1;
    // Kuch Change Hoga-NO....
    // *p2=*p2+1;
    // Kuch Change Hoga-YES....

    **p2=**p2+1;
}
int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;


    // cout<<"Printing p-->"<<p<<endl;
    // cout<<"Address of p-->"<<&p<<endl;

    // cout<<"Value of p2-->"<<*p2<<endl;

    // cout<<"For i--> "<<endl;

    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;

    // cout<<"For p-->"<<endl;


    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;

    // cout<<"For p2-->"<<endl;


    // cout<<&p<<endl;
    // cout<<p2<<endl;


    cout<<endl<<endl;
    cout<<"Before-> "<<i<<endl;
    cout<<"Before-> "<<p<<endl;
    cout<<"Before-> "<<p2<<endl;

    update(p2);
    cout<<"After->"<<i<<endl;
     cout<<"After-> "<<p<<endl;
    cout<<"After-> "<<p2<<endl;





    return 0;
}