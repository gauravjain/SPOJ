#include<stdio.h>
#include<math.h>
int main()
{
    int n,c,p,m,max,t,i,a[102][2];
    float x,grade,sum,d,diff;
    scanf("%d",&n);
    while(n--)
    {         i=0;
              scanf("%d%d",&c,&p);
              grade=p;
              sum=c;
              d=p/c;
              scanf("%d",&t);
              while(t--)
              {
                        scanf("%d%d",&a[i][0],&a[i][1]);
                        if(a[i][1]>d)
                        {
                                         grade=grade+(a[i][0]*a[i][1]);
                                         sum=sum+a[i][0];
                                         }
                                         i++;
                                         }
                                         x=grade/sum;
                                         diff=floor(x*100+0.5)/100.00;
                                         printf("%.02f\n",diff);
                                         }
                                         return 0;
                                         }
