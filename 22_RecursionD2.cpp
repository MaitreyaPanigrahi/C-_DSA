#include<bits/stdc++.h>
using namespace std;

void reachHome(int src,int dest){
    cout<<"Source is --> "<<src<<" and destination is -->"<<dest<<endl;

    // BASE CASE
    if(src==dest){
        cout<<"REACHED HOME"<<endl;
        return;
    }
    // PROCESSING
    src++;

    // RECURSIVE CALL
    reachHome(src,dest);
}
int main(){
    int src=1;
    int dest=10;

    cout<<endl;
    reachHome(src,dest);

    return 0;
}