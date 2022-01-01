#include<bits/stdc++.h>
using namespace std;

int uniqueElement(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[9]={1,3,1,3,6,6,7,10,7};

    cout<<uniqueElement(arr,9);

}