#include<iostream>
using namespace std;
class  A
{
private:
        int n,i,f;
public:
        void getdata();
        void fact();
};
void A::getdata()
{
    cout<<"enter value of n:";
    cin>>n;
}
 void A::fact()
{
    f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"\nfactorial is="<<f;
}
int main()
{
    A obj1;
    obj1.getdata();
    obj1.fact();
}
        
