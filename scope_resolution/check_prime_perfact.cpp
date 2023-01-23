#include<iostream>
using namespace std;
class A
{
    private:
            int n;
    public:
            void getdata();
            void prime();
            void perfact();          
};
void A::getdata()
{
    cout<<"Enter value of n:";
    cin>>n;
}
void A::prime()
{
    int i,p=0,c=0;
    p=n/2;
    for(i=2;i<=p;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime number";
            c=1;
            break;
        }
    }
    if(c==0)
    cout<<"\nprime number";
}
void A::perfact()
{
    int  i,c=0,num=n;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        c=c+i;
    }
    if(c==num)
    cout<<"\n"<<num<<" is a perfact numbr";
    else
    cout<<"\n"<<num<<" is a not perfact number";
}
int main()
{
    A obj1;
    obj1.getdata();
    obj1.prime();
    obj1.perfact();
    return 0;
}