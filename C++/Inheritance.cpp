#include<iostream>
using namespace std;
class shape
{
    protected:
    int height,weight;
    public:
    void set_height(int x)
    {
        height=x;
    }
    void set_weight(int y)
    {
        weight=y;
    }
};
class triangle:public shape
{
    public:
    int get_result()
    {
        return height*weight;
    }

};
int main()
{
    triangle ok;
    ok.set_height(7);
    ok.set_weight(7);
    cout<<ok.get_result()<<endl;
}
