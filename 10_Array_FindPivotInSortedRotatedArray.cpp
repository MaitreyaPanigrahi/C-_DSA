#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}
int main(){
    int arr[7]={8,10,17,19,21,1,3};
    cout<<"The Pivot is "<<getPivot(arr,7)<<endl;
}