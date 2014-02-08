#include<stdio.h>
int main()
{
int a[10001],i,n,avg,sum,k;
while(scanf("%d", &n) == 1 && n > 0)
{sum=0;
for(i=0;i<n; i++)
{
scanf("%d",&a[i]);
sum+= a[i];
}
k=0;
if(sum % n == 0)
{
avg= sum / n;
for(i=0;i<n;i++)
{
if(a[i]<avg)
k+=avg-a[i];
}
printf("%d\n",k);
}
else printf("-1\n");
}
return 0;
}
