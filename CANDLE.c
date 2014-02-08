#include <stdio.h>
#include <math.h>
 
int main()
{
    int i=0,ans=0,min,k,flag=0,p=0,j,arr[10],n;
    scanf("%d",&n);
    for(;i<n;i++)
    {   min=10;
        for(j=0;j<10;j++)
        {
            scanf("%d",&arr[j]);
            if(arr[j]<min)
            {
                min=arr[j];
                p=j;
            }
            if((arr[j]==0)&&((j!=0)&&(flag==0)))
            {flag=1;p=j;ans=p;}
        }
        if(arr[0]==0)
        ans=10;
 
        else
        {   if(p!=0)
            for(k=0;k<=min;k++)
            ans+=pow(10,k)*p;
 
            else
            ans=10*pow(10,min);
        }
        printf("%d\n",ans);
    }
    return 0;
}
