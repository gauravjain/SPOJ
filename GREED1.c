#include<stdio.h>
int main()
{
    char c;
    int n,t,i=0,j,k,min,mx,temp,c1,c2;
    int l[100002],a[100002];
    scanf("%d",&n);
    while(n--)
    {
              scanf("%c",&c);
              if(c=='N')
              {
              scanf("%d",&l[i]);
              a[i]=l[i];
              i++;
              }
              else if(c=='T')
              {
                        if(i%2==0)
                        printf("0\n");
                        else
                        {
                            for(j=0;j<i-1;j++)
                        {min=j;
                            for(k=j+1;k<i;k++)
                        {if(a[k]<a[j])
                        min = k;
                        }
                        temp=a[j];
                        a[j]=a[min];
                        a[min]=temp;
                        }
                        mx=a[(i+1)/2];
                        for(j=0;j<i;j++)
                        {
                                        if(mx>a[j])
                                        c1++;
                                        else
                                        c2++;             
                                        }
                                        if(c1==c2)
                                        printf("%d\n",mx);
                                        else
                                        printf("0\n");
                                        }}}
                                        return 0;
                                        }                          
