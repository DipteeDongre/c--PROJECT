#include<iostream>
using namespace std;
int main()
{
       float i,n,s=0;
       cout<<"enter value of n";
       cin>>n;
       for(i=1;i<=n;i++)
       {
         cout<<1<<"/"<<i<<"+";
         s=s+(1/i);
       }
       cout<<"\n sum of series="<<s;
}