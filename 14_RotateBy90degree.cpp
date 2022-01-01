
#include<bits/stdc++.h>
using namespace std;
void printCol(int arr[][3],int i,int j){


    // cout<<"Printing Col Sum-->"<<endl;


    for(int i=0;i<3;i++){
        for(int j=2;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
    cout<<endl;
    }
}
int main(){
    int arr[3][3];
    
    cout<<"Enter the Elements-->"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    printCol(arr,3,3);
}
