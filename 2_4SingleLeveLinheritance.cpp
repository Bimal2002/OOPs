#include<bits/stdc++.h>
using namespace std;
class Fruit{
    public:
    string name;
};

class Mango:public Fruit{
    public:
    int weight;
};

class Alphanso: public Mango {
    public:
    int sugerLevel;
};

int main(){

Alphanso a;
cout<<a.name<<" "<<a.weight<<" "<<a.sugerLevel<<endl;
}