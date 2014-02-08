#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
while(n--)
{
long long int k;
scanf("%lld",&k);
if(k&1)
printf("%lld\n",((k+1)/2-1)*500 + 192);
else
printf("%lld\n",(k/2-1)*500 + 442);
}
return 0;
}
