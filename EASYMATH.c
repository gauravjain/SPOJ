#include<stdio.h>
int main()
{   int t,n,m,a,d,i,c;
    scanf("%d",&t);
    while(t--)
    {         
              scanf("%d%d%d%d",&n,&m,&a,&d);
              c=m-n+1;
              for(i=n;i<=m;i++)
              {                
                               if((i%a==0) || (i%(a+d)==0) || (i%(a+(2*d))==0) || (i%(a+3*d)==0) || (i%(a+4*d)==0))
                               c--;
                               }
                               printf("%d\n",c);
                               
                               }
                               return 0;
                               }
