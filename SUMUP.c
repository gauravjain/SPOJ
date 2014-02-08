#include<stdio.h>
int main()
{int n,k,i,e;
 long long int p,c,d;
 float s;
 scanf("%d",&n);
    while(n--)
    {         c=1,d=3,e=4,s=0;
              scanf("%d",&k);
              for(i=1;i<=k;i++)
              {         p=c*d;
                        c=d;
                        d+=e;
                        e+=2;
                        s+=(float)i/(float)p;
                        }
                        printf("%.5f\n",s);
                        }
                        return 0;
                        }
