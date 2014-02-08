#include<stdio.h>
int main()
{
    int n,t,l,i,x,c;
    char a[1010];
    scanf("%d",&n);
    while(n--)
    {         i=0;
              c=0;
              scanf("%d\n",&l);
              gets(a);
              while(i<=strlen(a))
              {if(a[i]=='0')
               c++;
               if(c>l)
               {printf("NO\n");
               break;
               }
               if(a[i]=='1')                  
               c=0;
               i++;
               }
               if(c<l)
               printf("YES\n");
               }
               return 0;
               }
