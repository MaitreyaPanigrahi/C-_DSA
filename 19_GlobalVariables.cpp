#include<bits/stdc++.h>
using namespace std;

int score=13;


void a(int &i){
    cout<<score<<" in a"<<endl;
    score++;
    // cout<<i<<endl;
    // b(i);
}
void b(int &i){
    // cout<<i<<endl;
    cout<<score<<" in b"<<endl;
}
int main(){
    int i=5;
    a(i);
    b(i);
    // {
    //     int i=2;
    //     cout<<i<<endl;
    // }
    // cout<<i<<endl;

    cout<<score<<" in  main"<<endl;



    return 0;

}