#include<iostream>
using namespace std;
class A
{
     private:
             int n,f,i,c;
     public:
             void getdata();
             void fact();
             void check();        
};
void A::getdata()
{
    cout<<"\nenter value of n";
    cin>>n;
}
void A::fact()
{
    f=1;
    while(n>0)
    {
        f=f*n;
        n--;
    }
    cout<<"\n factorial="<<f;
}
void A::check()
{
    if(n%2==0)
    {
        cout<<"\n even";
    }
    else
    {
        cout<<"\n odd";
    }
}
int main()
{
    A obj1;
    obj1.getdata();
    obj1.check();
    obj1.fact();
}