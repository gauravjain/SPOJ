#include<stdio.h>
#include<math.h>
int main()
{   int k,a,b,c,n,c1,i,j;
    scanf("%d",&n);
    while(n--)
    {         c1=0;
              scanf("%d%d%d",&k,&a,&b);
              for(i=a;i<=b;i++)
              {c=0;
               for(j=1;j<=i;j++)
              {if((i%j)==0)
              c++;
              }
              if(c==k-1)
              c1++;
              }
              printf("%d\n",c1);
              }
              return 0;
              }
