#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    int age;
    int weight;

    void eat()
    {
        cout << "Eating" << endl;
    }
};

// class Dog:public Animal{

// };
// class Dog : protected Animal{
// public:
//     void print()
//     {
//         cout << this->age;
//     }
// };

class Dog : private Animal{
public:
    void print()
    {
        cout << this->age;
    }
};

int main()
{
    Dog d1;
    // d1.eat();
    // cout<<d1.age;
    d1.print();
    return 0;
}