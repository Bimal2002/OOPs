#include<bits/stdc++.h>
using namespace std;
class Param{
      public:
      int val;

      void operator +(Param& obj2){
        int value1=this->val;// sudhu val likhle o kaj korbe.
        int value2=obj2.val;
        cout<<(value2-value1)<<endl;

      }
};
int main(){
    Param obj1,obj2;
    obj1.val=7;
    obj2.val=2;

    //this is use print difference between them 
    obj1+obj2;


    return 0;
}