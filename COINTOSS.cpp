#include<stdio.h>
int main()
{
    int t,m,n;
    long long int k=0;
    scanf("%d",&t);
    while(t--)
    {
                  scanf("%d %d",&n,&m);
                  k=0;
                  if(n==m){printf("0.00\n\n");continue;}
                  if(m==0){
                           for(int i=1;i<=n;i++){
                                   k+=(1<<i);
                           }
                           printf("%lld.00\n\n",k);
                  }else{
                           for(int i=1;i<=n;i++){
                                   k+=(1<<i);
                           }
                           printf("%lld.00\n\n",n-m+(k>>1));

                  }
    }
    return 0;
}
