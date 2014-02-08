#include <stdio.h>
int main()
{
        int i, n, t,x; 
        scanf("%d", &t);
        long long sum,st;
        while(t--)
        {   sum=0;
            scanf("%d", &n);
            for(i=0;i<n;i++) 
            {
            scanf("%lld",&st);
            sum=(sum+st)%n;
            }
            x=sum?"NO":"YES";
            printf("%s\n",x);
        }
        return 0;
    }
