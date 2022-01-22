#include<bits/stdc++.h>
using namespace std;

class Animal{
 public:
    int age;
    int weight;
public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal{


};


class GermanShephard:public Dog{

};
int main(){
    GermanShephard g;
    cout<<g.age<<endl;
    g.speak();


    return 0;
}