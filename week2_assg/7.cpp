#include<iostream>
using namespace std;
class A
{
    private:
            int n,i,sum=0;
    public:
            void getdata();
            void evennum();
};
void A::getdata()
{
    cout<<"first 10 even number is:";
}
void A::evennum()
{
    for (i=1;i<=10;i++)
    {
        
        sum=sum+(2*i);
    }
    cout<<"\nsum of first 10 even number is="<<sum; 
    
}
int main()
{
    A obj1;
    obj1.getdata();
    obj1.evennum();
}
