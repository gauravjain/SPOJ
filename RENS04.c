#include<stdio.h>
#include<stdlib.h>
int main()
{
int t,i,n,flag,s;
scanf("%d",&t);
while(t!=0)
{
t--;
scanf("%d",&n);
flag=0;
for(i=0;i<n;i++)
{
scanf("%d",&s);	
flag=flag+(s/(i+1));
}
if(flag%2 == 0)
printf("BOB\n");
else
printf("ALICE\n");	
}
return 0;
}

