#include<stdio.h>
int main()
{
    int n,j,i,k,c,q;
    long int a[30001],d[200001][2];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    scanf("%d",&q);
    i=0;
    while(q--)
    {scanf("%d%d",d[i][0],d[i][1]);
    i++;
    }
    k=0;
    for(i=d[k][0];i<=d[k][1];i++)
    {
