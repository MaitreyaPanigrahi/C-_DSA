#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch(int arr[],int s,int e,int key){
    cout<<endl;

    print(arr,s,e);
    // Base Case-> If Element is NOt Present
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    cout<<"The Value of mid is "<<arr[mid]<<endl;
    // Base Case -> If Element is Present
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}
int main(){
    int arr[6]={2,4,6,8,10,12};
    int size=6;
    int key=12;
    bool ans=binarySearch(arr,0,size-1,key);

    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}