#include<bits/stdc++.h>
using namespace std;
int main(){
    int countDistinctWayToClimbStair(long long nStairs)
{
//     BASE CASE
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }
    
    int ans=countDistinctWayToClimbStair(nStairs-1)+countDistinctWayToClimbStair(nStairs-2);
    return ans;
    
}
}