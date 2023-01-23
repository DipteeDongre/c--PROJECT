#include<iostream>
using namespace std;
class A
{
     private:
             int i,n,t;
     public:
             void getdata();
             void table();        
};
void A::getdata()
{
    cout<<"enter the number :";
    cin>>n;
    
}
void A::table()
{
      for(i=1;i<=10;i++)
      {
           t=i*n;
           cout<<"\n"<<t;
      }
}
int main()
{
        A obj1;
         obj1.getdata();
         obj1.table();
}