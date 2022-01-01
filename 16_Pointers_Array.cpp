#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[10]={2,5,4};
    // cout<<"Address of first memory block is "<<arr<<endl;
    // cout<<"Address of first memory block is "<<&arr[0]<<endl;
    // cout<<"66th "<<*arr<<endl;
    // cout<<"67th "<<*arr+1<<endl;
    // cout<<"68th "<<*(arr+1)<<endl;
    // cout<<"69th "<<(*arr)+1<<endl;
    // cout<<"70th "<<*(arr+2)<<endl;

    // int i=2;
    // cout<<i[arr]<<endl;


    // int temp[10]={1,2};
    // cout<<sizeof(temp)<<endl;
    // cout<<"1st "<<sizeof(*temp)<<endl;
    // cout<<"2nd "<<sizeof(&temp)<<endl;

    // int *ptr=&temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    // int a[20]={1,2,3,5};
    // cout<<"-->"<<&a[0]<<endl;
    //  cout<<&a<<endl;
    // cout<<a<<endl;

    // int *p=&a[0];
    // cout<<"-->"<<&p<<endl;


    int arr[10];
    // arr=arr+1; ERROR

    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;




    return 0;
}