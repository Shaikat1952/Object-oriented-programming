#include<iostream>
using namespace std;
int main(){
  try{
    int sellPrice;
    cout<<"What was sell price\n";
    cin>>sellPrice;
    if(sellPrice<=500){
    throw sellPrice;
    }
    cout<<"$"<<sellPrice<<" is accepted\n";
  }
 catch(int price){
   cout<<"$"<<price<<" is not accepted, amount should be above $500\n";
 }
}
