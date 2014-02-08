#include<stdio.h>
int main()
{
    int n,c,kn;
    long long int a,b,i,j,sum,k;
    scanf("%d",&n);
    while(n--)
    {   sum=kn=c=0;
        scanf("%lld%lld",&a,&b);
        for(i=a;i<=b;i++)
        {for(j=1;j<=i;j++)
         {if(i%j==0)
         sum=sum+j;
         }
         for(k=1;k<=sum;k++)
         {
         if(sum%k==0)
         c++;
         }
         printf("\n%lld\n%d\n",a,c);
         if(c==2)
         kn++;
         }
         printf("%d\n",kn);
    }
         return 0;
         }
