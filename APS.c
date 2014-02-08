#include<stdio.h>
#include<math.h>
int prime(long long int k)
{
    int x,y,z=0;
    if(k==2 || k%2==0)
    return 2;
    else
    {
    for(x=3;x<=k;x+=2)
    {if(k%x==0)
     {for(y=1;y<=sqrt(x*1.0);y++)
     {if(x%y==0)
     z++;
     }}
     if(z==1)
     break;
    }
     return x;
    }
}
int main()
{
    int n,t,i,j;
    long long int k,a[100000];
    scanf("%d",&n);
    a[0]=0;
    a[1]=0;
    while(n>0)
    {         n--;
              i=2;
              scanf("%lld",&k);
              while(i<=k)
              {
              a[i]=a[i-1]+prime(i);
              i++;
              }
              printf("%lld\n",a[k]);
              }
              return 0;
}
