#include<iostream>
using namespace std;
int main()
{
    try{
        int a,b;
        cin>>a>>b;
        int z=a+b;
        if(a==0 || b==0)
        {
            throw a;
        }
        cout<<z<<endl;

    }
    catch(int i)
        {
            cout<<"Try again ; you entered "<<i<<endl;
        }
        return 0;


}
