#include<iostream>
using namespace std;
int main()
{
    int i,j,p;
    cout<<"prime numebr from 1 to 1000";
    for(i=1;i<=1000;i++)
    { 
        p=0;
        for(j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                p=p+1;
            }
        }
        if(p==2)
        {
           cout<<"\n"<<i;
        }
    }


}
