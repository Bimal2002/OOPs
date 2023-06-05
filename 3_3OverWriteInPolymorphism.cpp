#include<bits/stdc++.h>
using namespace std;
class Animal{
   public:
   Animal(){
       cout<<"i am inside animal constructor"<<endl;
   }
   //virtual void Speak(){ 
   void Speak(){ 

    cout<<"Speaking "<<endl;
   }
};

class Dog:public Animal{
    public:
    Dog(){
        cout<<"i am inside dog constructor "<<endl;
    }
    // over ride
    void Speak(){
     cout<<"Gheou Gheou"<<endl;
    
    }

};

int main(){
    // Dog d;
    // d.Speak();

    
    // Animal* a=new Animal;
    // a->Speak();


    // Dog* a=new Dog;
    // a->Speak();
     
    // //UPcasting 
    // Animal* a=new Dog;
    // a->Speak();

    // // down  casting
    // //Dog *d=new Animal; ** down casting won't work here
    // Dog *d=(Dog*) new Animal;

    // d->Speak();

    //Animal *a=new Animal();
    // Animal *a=new Dog();
    // Dog *a=new Dog();
    Dog* a=(Dog*)new Animal();
    
    

}