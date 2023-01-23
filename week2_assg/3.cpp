#include<iostream>
using namespace std;
class F
{
     private:
             int a=0,b=1,c=0,i,number;
     public:
             void getdata();
             void febnc();        
};
void F::getdata()
{
    cout<<"enter the number of element:";
    cin>>number;
    
}
void F::febnc()
{
      for(i=1;i<=number;i++)
      {
        cout<<"\t"<<c;
        a=b;
        b=c;
        c=a+b;
        
      }
}
int main()
{
        F obj1;
         obj1.getdata();
         obj1.febnc();
}