#include<bits/stdc++.h>
using namespace std;

class A{

    public:
    void sayHello(){
        cout<<"Hello Maitreya Panigrahi"<<endl;
    }

    void sayHello(string name){
        cout<<" Hello"<<endl;
    }

};

class B{


    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+(B &obj){
        // int value1=this->a;
        // int value2=obj.a;
        // cout<<"Output "<<value2-value1<<endl;

        cout<<"Hello Maitreya"<<endl;
    }

    void operator() (){
        cout<<"I am Bracket "<<this->a<<endl;
    }

    void operator& (){
        cout<<"I am ampercent "<<this->a<<endl;
    }

    void operator~ (){
        cout<<"I am tilda "<<this->a<<endl;
    }
};
int main(){

    // A obj;
    // obj.sayHello();

    B obj1,obj2,obj3;
    obj1.a=4;
    obj2.a=7;
    obj3.a=66;

    obj1 + obj2;

    obj1();

    &obj2  ; 

    ~obj3; 



    return 0;
}