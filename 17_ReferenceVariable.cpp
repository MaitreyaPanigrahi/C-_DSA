#include<bits/stdc++.h>
using namespace std;

void update(int n){
    n++;
}
void update2(int &n){
    n++;
}

// int *func(int n){
//     int *ptr=&n;
//     return ptr;
// }
int main(){
    // int i=5;
    // int &j=i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;

    int n=5;
    cout<<"Before-->"<<n<<endl;
    update2(n);
    cout<<"After-->"<<n<<endl;

    func(n);

    






    return 0;

}