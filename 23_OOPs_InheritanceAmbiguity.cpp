#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void func(){
        cout<<"OOK"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"Tell"<<endl;
    }
};

class C:public A,public B{

};
int main(){

    // Inheritance Ambiguity
    C obj;

    obj.func();
    obj.A::func();
    obj.B::func();

}