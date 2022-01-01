#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        int mid=(s)+(e-s)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            e=mid-1;
        }
        if(arr[mid]<key){
            s=mid+1;
        }
    }
    return -1;

}
int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[5]={3,8,11,14,16};

    cout<<"The index of 10 is "<<binarySearch(even,6,8)<<endl;
    cout<<"The index of 11 is "<<binarySearch(odd,5,8)<<endl;


    

}