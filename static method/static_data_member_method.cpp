#include<iostream>
using namespace std;
class Emp
{
    private: 
            int ecode;
            char ename[20];
            int esal;
            static int total;
    public:
           void GetDetails()
           {
            cout<<"enter employee code,name,salary";
            cin>>ecode>>ename>>esal;
            total=total+esal;
           }        
           void ShowDetails()
           {
              cout<<"\n employee code="<<ecode;
              cout<<"\n employee name="<<ename;
              cout<<"\n employee sal="<<esal;
           }
           static void ShowTotal()
           {
            cout<<"\n total salary of all employee="<<total;
           }
};
int Emp::total;
int main()
{
    Emp e1,e2;
    e1.GetDetails();
    e2.GetDetails();
    e1.ShowDetails();
    e2.ShowDetails();
     Emp::ShowTotal();

     
}