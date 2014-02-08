#include<stdio.h>
int main()
{
int i,prime, lim_up, lim_low, n;
scanf("%d", &lim_low);
scanf("%d", &lim_up);
printf("\n\n\t PRIME NUMBERS ARE…:");
for(n=lim_low+1; n<lim_up; n++)
{
prime = 1;
for(i=2; i<n; i++)
if(n%i == 0)
{
prime = 0;
break;
}
if(prime)
printf("\n\n\t\t\t%d", n);
}
return 0;
}
