#include<stdio.h>
int main()
{   int n,k,i;
    double fact;
    scanf("%d",&n);
    while(n>0)
    {         fact=1;
              n--;
              scanf("%d",&k);
              for(i=1;i<=k;i++)
              { fact=fact*i;
              }
              printf("%d\n",fact);
              }
              return 0;
              }
