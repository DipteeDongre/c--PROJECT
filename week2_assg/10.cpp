#include<iostream>
using namespace std;
int main()
{
   int fact(int);
   int n,k;
    cout<<"Enter the number:";
    cin>>n;
    k=fact(n);
}
int fact(int a)
{
    int i,f=1;
    for(i=1; i<=a; i++) 
    {
        f=f*i;
    }
    cout<<"\nfactorial="<<f;
    return(f);
}