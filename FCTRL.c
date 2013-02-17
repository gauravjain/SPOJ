#include<stdio.h>
#include<stdlib.h>
int fctrl(int n)
{
int count =0;
int d= 5;
while(n>=d)
 {
  count+=(n/d) ;
  d=d*5;
 }
return count;
}
int main()
{
int t,i;
scanf("%d",&t);
for(i=0;i<t;i++)
 {
  int num;
  scanf("%d",&num);
  printf("%d\n",fctrl(num));
 }
return 0;
}
