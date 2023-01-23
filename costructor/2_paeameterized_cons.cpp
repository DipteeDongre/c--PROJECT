#include<iostream>
using namespace std;
class product
{
    private:
             int pid;
             string pname;
             int price;
    public:
           product(int id,string nm,int p)
           {
            pid=id;
            pname=nm;
            price=p;
            cout<<"\n parameterized constuctor invoked";
           }         
           void showdata()
           {
            cout<<"\n product ID="<<pid;
            cout<<"\n product name="<<pname;
            cout<<"\n product price="<<price;
           }
};
int main()
{
    product p1(101,"soap",90);
    p1.showdata();
    product p2(102,"sugar",900);
    p2.showdata();
    product p3(103,"tel",901);
    p3.showdata();
}