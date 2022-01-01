#include<bits/stdc++.h>
using namespace std;
int main(){
    // int ch='a';
    // switch(ch){
    //     case 1:cout<<"First"<<endl;
    //     break;

    //     case '2':cout<<"Second"<<endl;
    //     break;

    //     default:cout<<"Its default"<<endl;
    // }

    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    
    cout<<"Enter the value of b"<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation you want to perform"<<endl;
    cin>>op;

    switch(op){
        case '+':cout<<(a+b)<<endl;
        break;

        case '-':cout<<(a-b)<<endl;
        break;

        case '*':cout<<(a*b)<<endl;
        break;

        case '/':cout<<(a/b)<<endl;
        break;

        case '%':cout<<(a%b)<<endl;
        break;

        default:cout<<"Enter a valid operation"<<endl;
    }
}