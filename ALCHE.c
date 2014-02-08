#include<stdio.h>
int main() 
{
int i,w;
while(scanf("%d%d",&i,&w)==2) 
{
if(i==-1 && w==-1)
break;
if(37*i==1000*w)
printf("Y\n");
else 
printf("N\n");
}
return 0;
}
