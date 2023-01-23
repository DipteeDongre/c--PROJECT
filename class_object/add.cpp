#include<iostream>
using namespace std;
class calc
{
    private:
            int a,b,c;
    public:
            void getdata()
            {
                cout<<"enter value of a and b:";
                cin>>a>>b;
            }
            void showdata()
            {
                cout<<"\n value of a="<<a;
                cout<<"\n value of b="<<b;
            }
            void sum()
            {
                c=a+b;
                cout<<"\nsum="<<c;
            }
};
int main()
{
    calc obj1;
    obj1.getdata();
    obj1.showdata();
    obj1.sum();
}