#include<iostream>
using namespace std;
class B
{
    private:
            int n,r,s=0;
    public:
            void getdata();
            void sumdigit();                  
};
void B::getdata()
{
     cout<<"enter value of integer:";
     cin>>n;
}
void B::sumdigit()
{
        while(n>0)
        {
             r=n%10;
             s=s+r;
             n=n/10;
        }
        cout<<"\n sum of digit ="<<s;
}
int main()
{
        B obj1;
        obj1.getdata();
        obj1.sumdigit();
}