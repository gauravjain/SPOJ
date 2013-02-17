#include <stdio.h>
#include<stdlib.h>
#include <math.h>

long long sumdiv(int n) 
{
    long long i;
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    if(n==3)
    {
        return 1;
    }
    int j = (int)sqrt(n);
    long long int sum =0;
    for(i=2;i<=j;i++)
    if(n%i==0)
    sum+= i + n/i;
    if(n==j*j)
    sum-= j;
    sum++;
    return sum;
}
int main( )
{
    int n,k;
    scanf("%d",&n);  
    while(n>0)
    {
               n--;
               scanf("%d",&k);
               printf( "%d \n",sumdiv(k));
    }
    return 0;
}
