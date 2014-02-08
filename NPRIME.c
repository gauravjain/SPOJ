#include <stdio.h>
#include<stdlib.h>
#define LIMIT 100001 
int main(){
    long long int i,j;
    int *primes;
    int k,z;
    primes = malloc(sizeof(int)*LIMIT);
    while(scanf("%d",&k)==1)
    {z=1;
    for (i=2;i<LIMIT;i++)
        primes[i]=1;
    for (i=2;i<LIMIT;i++)
        if (primes[i])
            for (j=i;i*j<LIMIT;j++)
                primes[i*j]=0;
    for (i=2;i<LIMIT;i++)
        if (primes[i])
            {
            if(z==k)
            printf("%lld\n",i);
            z++;
            }}
return 0;
}
