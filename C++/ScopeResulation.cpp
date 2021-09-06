#include<iostream>
using namespace std;
class prime{
public:
  int a,i,count=0;
  prime(int x){
    for(i=1;i<=x;i++){
      if(x%i==0){
        count++;
      }
    }
    if(count==2){
      cout<<"Number is prime.\n";
    }
    else{
      cout<<"Number is not prime\n";
    }
  }
};
int main(){
  int a;
  cout<<"Enter a number to check it prime\n";
  cin>>a;
  prime ob(a);
}
