#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i;
scanf("%d",&n);
while(n!=0)
{
n--;
int ng,mg,tmp;
scanf("%d%d",&ng,&mg);
int ngmax=0;
int mgmax=0;
for(i=0;i<ng;i++)
{
scanf("%d",&tmp);
if(ngmax<tmp)
ngmax=tmp;
}
for(i=0;i<mg;i++)
{
scanf("%d",&tmp);
if(mgmax<tmp)
mgmax=tmp;
}	
if(ngmax>=mgmax)
printf("Godzilla\n");
else
printf("MechaGodzilla\n");

}
return 0;
}
