#include<bits/stdc++.h>
using namespace std;

class Human{

    public:
    int height;
    int weight;
    
    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }
};

class Male:public Human{

    public:

    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }


};
int main(){

    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    object1.sleep();


    object1.setWeight(67);
    cout<<object1.weight;
    


    return 0;

}