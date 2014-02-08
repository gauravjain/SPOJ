#include<stdio.h>
int main()
{
    int n,t,k;
    long long int a[100001];
    while(scanf("%d",&n)!='0')
    {
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=1;i<n;i++)
        {if(a[i]-a[i-1]>1)
         t=t+(a[i]-a[i-1]);
         }



        n--;
