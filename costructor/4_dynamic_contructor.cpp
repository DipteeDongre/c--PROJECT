#include<iostream>
#include<string.h>
using namespace std;
class A
{
    private:
             int count;
             char *name;
    public:
            A(char nm[])
            {
                count=strlen(nm);
                name=new char[count+1];
                cout<<"\n dynamic memory created";
                strcpy(name,nm);
                cout<<"\n objet initialized";
            }   
};
~A()
{
    delete(name);
    cout<<"\nobject destroyed";
}
void show()
{
   cout<<"\n name="<<name;
   cout<<"\n number of alphabet="<<count; 
}
int main()
{
    A obj1("gfgtfy");
    obj1.show
}

