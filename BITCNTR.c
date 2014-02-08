#include<stdio.h>
int main()
{
    int t,n,a,s,c=0;
    scanf("%d",&t);
    while(t--)
    {         c=0;
              scanf("%d",&a);
              while(a)
              {       
                      if(a%2==1)
                      c++;
                      a=a/2;
                      }
                      printf("%d\n",c);
                      }
                      return 0;
                      }
