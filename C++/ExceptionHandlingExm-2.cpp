#include<iostream>
using namespace std;
int main(){
  try{
    int a,b;
    cout<<"Enter first number\n";
    cin>>a;
    cout<<"Enter second number\n";
    cin>>b;
    if(b==0){
      throw b;
    }
    cout<<"Output="<<a/b;
  }
  catch(int x){
    cout<<"Wrong input,you enter="<<x<<endl;
  }
}
