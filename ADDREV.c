#include<stdio.h>
int main()
{
    int n,a,b,r,t,rev,rev1,x,y,nr,i,rev2;

    scanf("%d",&n);
    while(n>0)
    {
                  rev=0;
    rev1=0;
    rev2=0;         
              n--;
              scanf("%d%d",&a,&b);
              x=a;
              y=b;
              while(x)
              {
                         r=x%10;
                         x=x/10;
                         rev=rev*10+r;
                         }
              while(y)
                        {t=y%10;
                         y=y/10;
                         rev1=rev1*10+t;
                         }
              nr=rev+rev1;
              while(nr)
              {
                         i=nr%10;
                         nr=nr/10;
                         rev2=rev2*10+i;
                         }
              printf("%d\n",rev2);
              }
              return 0;
              }
