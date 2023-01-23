#include<iostream>
using namespace std;
class student
{
    private:
             int rno;
             string sname;
             int marks;
    public:
            student()
            {
                rno=100;
                sname="guest";
                marks=500;
                cout<<"\ndefault constructor invoked";
            }         
            void showDetails()
            {
                cout<<"\n Roll number="<<rno;
                cout<<"\n student name="<<sname;
                cout<<"\n marks="<<marks;
            }
};
int main()
{
    student S1;
    S1.showDetails();
    student S2;
    S2.showDetails();
}