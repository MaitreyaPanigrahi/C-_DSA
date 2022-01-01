#include<bits/stdc++.h>
using namespace std;

void printRowSum(int arr[][3],int i,int j){

    cout<<"Printing Row Sum-->"<<endl;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int largestRowSum(int arr[][3],int i,int j){
    int maxi=INT_MIN;
    int rowIndex=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
        sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowIndex;
}

void printColSum(int arr[][3],int i,int j){


    cout<<"Printing Col Sum-->"<<endl;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[3][3];
    
    cout<<"Enter the Elements-->"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Your Array is-->"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // printRowSum(arr,3,3);
    // printColSum(arr,3,3);

    int ansIndex=largestRowSum(arr,3,3);

    cout<<"The Index of Largest Sum of the Row is "<<ansIndex<<endl;
}