#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    string name;
    int weight;
    int age;

    void SpeedUp(){
        cout<<"Speeding Up "<<endl;
    }
    void breakMaro(){
        cout<<"Break mardi"<<endl;
    }
};

class Scorpio: public Car{

};


int main(){
Scorpio babbarwali;
babbarwali.SpeedUp();


return 0;

}