#include<iostream>
using namespace std;
class first{
public:
   void print(){
    cout<<"Hello first->"<<endl;
  }
};
class two:public first{
public:
  void print(){
   cout<<"Hello two->"<<endl;
 }

};
int main(){
  two one;
  one.print();
}
