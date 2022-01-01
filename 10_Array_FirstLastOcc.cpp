#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;


        }

        else if(key>arr[mid]){
            s=mid+1;

        }
        else if(key<arr[mid]){
            e=mid-1;

        }
    }
    return ans;
}

int lastOcc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            s=mid+1;
            ans=mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    int arr[11]={1,2,3,3,3,3,3,3,5,6,7};

    cout<<"First OCC of 3 is "<<firstOcc(arr,11,3)<<endl;
    cout<<"Last Occ of 3 is "<<lastOcc(arr,11,3)<<endl;

    cout<<"Total number of occ of 3 is "<<lastOcc(arr,11,3)-firstOcc(arr,11,3)+1<<endl;

    return 0;
}