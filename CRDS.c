#include<stdio.h>
int main()
{
int n;
long long int k,sum;
scanf("%d",&n);
while(n--)
{
    sum=0;
    scanf("%lld",&k);
    sum=3*((k*(k+1))/2)-k;
    printf("%lld\n",sum%1000007);
}
return 0;
}
