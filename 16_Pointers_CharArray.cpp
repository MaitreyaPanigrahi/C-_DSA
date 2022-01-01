#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";

    cout<<arr<<endl;
    // ATTENTION HERE -->
    cout<<ch<<endl;

    char *c=&ch[0];
    // Prints entire String
    cout<<c<<endl;

    char temp='z';
    char *p=&temp;
    cout<<p<<endl;
}