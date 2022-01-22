#include<bits/stdc++.h>
using namespace std;

// We can also add the header file like #include "Hero.cpp" if Hero.cpp is the file name

class Hero{

    // Properties:

    
    private:
    int health;
    

    public:
    char level;
    char *name;
    static int timeToComplete;



    Hero(){
        cout<<"Constructor is called"<<endl;
        name=new char[100];
    }

    // Parameterised Constructor

    Hero(int health){

        cout<<"This -> "<<this<<endl;
       this -> health = health;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h ){
        health=h;

    }

    void setLevel(char ch){
        level=ch;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }


    void print(){
        cout<<endl;
        cout<<"[Name: "<<this->name<<",";
        cout<<"Health: "<<this->health<<",";
        cout<<"Level: "<<this->level<<"]";
        cout<<endl;
    }

    // Copy Constructor

    Hero(Hero &temp){

        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);

        this->name=ch;

        cout<<"Copy Const is called"<<endl;
        this->health =temp.health;
        this->level=temp.level;
    }

    static int random(){
        return timeToComplete;
    }


    // Destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

    
};
int Hero::timeToComplete=5;

int main(){


    // cout<<Hero::timeToComplete<<endl;

    cout<<Hero::random()<<endl;


    // Hero a; //Static

    // Hero *b=new Hero();
    // delete b;
}

    // Hero h1;
    // h1.setHealth(88);
    // h1.setLevel('D');
    // char name[9]="Maitreya";
    // h1.setName(name);

    // h1.print();

    // Default copy constructor
    
    // Hero h2(h1);

    // h2.print();
    //   OR
    // Hero h2=h1;

    // h1.name[0]='N';
    // h1.print();

    // h2.print();

    // h1=h2;
    // h1.print();
    // h2.print();




    // Hero S;
    // S.setHealth(77);
    // S.setLevel('C');

    // S.print();

    // Hero R(S);
    // R.print();




    // Object Created statically


    // Hero ramesh(10);
    // cout<<"Address of ramesh is-> "<<&ramesh<<endl;


    // Dynamically
    // Hero *h=new Hero();










    // creation of object

    // Hero ramesh;

    // cout<<"Size of ramesh-> "<<sizeof(ramesh)<<endl;

    // cout<<"Health is -> "<<ramesh.getHealth()<<endl;

    // ramesh.setHealth(99);

    // cout<<"Ramesh Health is -> "<<ramesh.getHealth()<<endl;


    // cout<<"Level is -> "<<ramesh.getLevel()<<endl;

    // ramesh.setLevel('A');
    // cout<<"Ramesh Level is -> "<<ramesh.getLevel()<<endl;


    // Static Allocation 

    // Hero a;

    // a.setHealth(77);
    // a.setLevel('B');

    // cout<<"Health is-> "<<a.getHealth()<<endl;
    // cout<<"Level is -> "<<a.getLevel()<<endl;

    // Dynamically

    // Hero *b=new Hero;
    // b->setHealth(99);
    // b->setLevel('C');

    // cout<<"Health is-> "<<(*b).getHealth()<<endl;
    // cout<<"Level is -> "<<(*b).getLevel()<<endl;

                        // OR   

    // cout<<"Health is-> "<<b->getHealth()<<endl;
    // cout<<"Level is -> "<<b->getLevel()<<endl;




//     return 0;

// }