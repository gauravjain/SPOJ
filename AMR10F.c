#include<stdio.h>
int main()
{
    int n,a,d,t,sum,i;
    scanf("%d",&t);
    while(t--)
    {
             scanf("%d%d%d",&n,&a,&d);
             sum=n*(2*a+(n-1)*d)/2;
             printf("%d\n",sum);
             }
             return 0;
             }                
