#include<bits/stdc++.h>
using namespace std;
class Animal{
     //public: 
     private:
             int age;
             int weight;
     public:
             void eat(){
                    cout<<"Eating "<<endl;
             }    
             
             int getAge(){
                return this->age;
             }
             void setAge(int age){
                this->age=age;
             }
};
int main(){
    cout<<"Hello World"<<endl;
    return 0;
}