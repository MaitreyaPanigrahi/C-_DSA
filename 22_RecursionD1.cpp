#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    // base case
    if(n==0)
    return 1;

    // int smallProb=factorial(n-1);
    // int bigProb=n*smallProb;

    // return bigProb;

    return n *  factorial(n-1);
}

int power(int n ){
    // base case

    if(n==0){
        return 1;
    }

    // int smallerProb=power(n-1);
    // int biggerProb=2*smallerProb;

    // return biggerProb;

    return 2*power(n-1);
}

void print (int n){
    // Base Case
    if(n==0){
        return;
    }

    // cout<<n<<endl;
    // print(n-1);

    print(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;

    // int ans=factorial(n);
    // cout<<ans<<endl;

    // int ans=power(n);
    // cout<<ans<<endl;

    cout<<endl;

    print(n);


    return 0;
}