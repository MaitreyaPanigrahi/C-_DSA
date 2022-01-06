#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string name,int i,int j){
    // Base CAse
    if(i>j){
        return true;
    }
    if(name[i]!=name[j]){
        return false;
    }

    else{
        return checkPalindrome(name,i+1,j-1);
    }
}
int main(){
    string name="malayalam";

    bool isPalindrome=checkPalindrome(name,0,name.length()-1);

    if(isPalindrome){
        cout<<"Is Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }

    
}