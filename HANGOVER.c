#include <stdio.h>
int main()
{
int x;
float t,sum;
while(1)
{
scanf("%f",&t);
if(t==0.00)
break;
sum = 0.0;
x=2;
while(sum<t)
{
sum+= 1.0/x;
x++;
}
printf("%d card(s)\n",x-2);
}
return 0;
}
