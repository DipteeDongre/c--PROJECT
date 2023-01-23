#include<iostream>
using namespace std;
class Swap
{
    public:
          int a,b,c;
          void getdata();
          void swapv();
          void display();
};
void Swap::getdata()
{
    cout<<"enter two number:";
    cin>>a>>b;
}
void Swap::swapv()
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void Swap::display()
{
    cout<<"a="<<a<<"\nb="<<b;
}
int main()
{
    Swap obj1;
    obj1.getdata();

    obj1.swapv();
    cout<<"\nafter swap:";

    obj1.display();
}