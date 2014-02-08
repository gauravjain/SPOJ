#include<stdio.h>
int main()
{
    int n,flag;
    long long int i,j,a,b;
    scanf("%d",&n);
    while(n>0)
    {
              n--;
              scanf("%lld%lld",&a,&b);
              for(i=a;i<=b;i++)
              {                flag=0;
                               for(j=1;j<=i;j++)
                               {
                                               if(i%j==0)
                                               flag++;
                                               }
                                               if(flag==2)
                                               printf("%lld\n",i);

                                               }
                                               printf("\n");
                                               }
               return 0;
               }
