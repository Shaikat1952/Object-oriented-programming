#include<iostream>
using namespace std;
int main(){
  try{
    int a,b;
    cout<<"Enter first age\n";
    cin>>a;
    if(a<18){
      throw a;
    }
    cout<<"Access granted a="<<a;
  }
  catch(int x){
    cout<<"Wrong input,you enter="<<x<<endl;
  }
}
