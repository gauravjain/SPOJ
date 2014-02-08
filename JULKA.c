#include<stdio.h>
int main()
{
    int n;
    long long long int i,j,k,l;
    n=10;
    while(n>0)
    {        
             n--;
             scanf("%d",&i);
             scanf("%d",&j);
             k=((i-j)/2);
             l=(k+j);
             printf("%d\n%d\n",l,k);
             }
             return 0;
             }
