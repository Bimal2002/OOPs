#include <bits/stdc++.h>
using namespace std;

class Animal
{
  // state or Properties
private:
  int weight;

public:
  int age;
  string type;

  // default constructor  compiler automatically create

  // khudka likha huya constructor
  Animal()
  {
    this->weight = 0;
    this->age = 0;
    this->type = "";
    cout << "constructor call" << endl;
  }

  // Parameterised constructor call
  Animal(int age)
  {
    this->age = age;
    cout << "Parameterised constructor call" << endl;
  }

  Animal(int age, int weight)
  {
    this->age = age;
    this->weight = weight;
    cout << "Parameterised constructor 2 call" << endl;
  }

  Animal(int age, int weight, string type)
  {
    this->age = age;
    this->weight = weight;
    this->type = type;
    cout << "Parameterised constructor 3 call" << endl;
  }

  // copy constructor
  Animal(Animal &obj)
  { // pass by reference . if we use pass by value infinite time will be created .
    this->age = obj.age;
    this->weight = obj.weight;
    this->type = type;
    cout << "I am inside copy constructor" << endl;
  }

  // behavior
  void sleep()
  {
    cout << "sleeping" << endl;
  }

  void eat()
  {
    cout << "Eating" << endl;
  }

  int getWeight()
  {
    return weight;
  }

  //   void setWeight(int w){
  //     weight=w;
  //   }

  void setWeight(int weight)
  {
    this->weight = weight; // here   this->weight indicate the weight that is written in line number 7 and = weigth indicate (int weight)
    //** this is a pointer to current object
  }

  void Print()
  {
    cout << this->age << " " << this->weight << " " << this->type << endl;
  }

  // Destructor
  ~Animal()
  {
    cout << "I am inside destructor" << endl;
  }
};

int main()
{
  // object

  //   //static
  //   Animal ramesh;
  //   ramesh.age=12;
  //   ramesh.type="lion";
  //   cout<<"Age of ramesh is : "<<ramesh.age<<endl;
  //   cout<<"Type of ramesh is :"<<ramesh.type<<endl;

  //   ramesh.sleep();
  //   ramesh.eat();

  //   for accessing Private members WE use geter and setter
  //   ramesh.setWeight(101);
  //   cout<<"Weight of Ramesh : "<<ramesh.getWeight()<<endl;

  //**********************************************

  //   //Dynamic Memory
  //   Animal *suresh=new Animal;
  //   (*suresh).age=15;
  //   (*suresh).type="billi";

  //   //alternative methods for Dynamic Memory allocation
  //   suresh->age=17;
  //   suresh->type="baby";

  //   suresh-> eat();
  //   suresh->sleep();

  //****************************************************************

  // Constructor call
  // Animal a; // khudka constructor likhene ke bad me default constructor overwrite ho jata he
  // Animal *b=new Animal();

  // parameterised constructor call
  // Animal a(10);
  // Animal* b=new Animal(100,45);
  // Animal* c=new Animal(120,20,"Bimal");

  // copy constructor call
  // object copy
  // Animal c=a;
  // Animal c(b); // both are same meaning

  //**************************
  // Animal a;
  // a.age=20;
  // a.setWeight(101);
  // a.type="Bimal";

  // Animal b=a;

  // a.Print();
  // b.Print();
  //***************************
  cout << "a obj creation " << endl;
  Animal a;
  a.age = 5;

  cout << "b obj creation " << endl;
  Animal *b = new Animal();
  b->age = 12;

  // Manually call
  delete b;
}