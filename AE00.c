#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for (j=i;j<=n;j++)
        {
            if(i*j>n)
            break;
            c++;   
        }
    }
    printf("%d\n",c);
    return 0;
}
