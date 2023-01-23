
#include<stdio.h>
void main()
{int n,p;
    
    int prime(int);
    printf("enter any number:");
    scanf("%d",&n);
    p=prime(n);
}
int prime(int a)
{
    int i,c=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }

}