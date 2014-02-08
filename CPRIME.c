#include<stdio.h>
#include<math.h>
#define LIMIT 100000000 /*size of integers array*/
#define PRIMES 7000000 /*size of primes array*/
int bSearch(int n,int array[], int start, int end){
    int middle = (start+end)/2;

    if (start>end)
        return 0;

    if (n==array[middle])
        return 1;

    if (n>array[middle])
        return bSearch(n,array,middle+1, end);
    else
        return bSearch(n,array,start,middle-1);
}

int main()
{
    int i,j;
    int *primes,*numbers;
    int count = 0;
    primes = malloc(sizeof(int)*PRIMES);
    numbers = malloc(sizeof(int)*LIMIT);
    /*fill the array with natural numbers*/
    for (i=0;i<LIMIT;i++){
        numbers[i]=i+2;
    }
    /*sieve the non-primes*/
    for (i=0;i<LIMIT;i++){
        if (numbers[i]!=-1){
            for (j=2*numbers[i]-2;j<LIMIT;j+=numbers[i])
                numbers[j]=-1;
        }
    }
    j = 0;
    for (i=0;i<LIMIT&&j<PRIMES;i++)
        if (numbers[i]!=-1)
            primes[j++] = numbers[i];
    while((scanf("%lld",&x))==1 && x!=0)
    {  for (i=2;i<x;i++)
        if (bSearch(i,primes,0,j-1))
            count++;
            printf("count=%d\n",count);

            f=(x/log(x));
            d=((f-n)/n)*100.0;
            diff=floor(d*10+0.5)/10.00;
            if(diff<0)
             diff*=-1;
             printf("%.01f\n",diff);
             
}
int main()
{
    long long int x,n,i,j,e;   
    float d,f,diff;
    int c;
    {        n=0;
             c=0;
             for(i=2;i<=x;i++)
             {if(isPrime(i))
             n++;
             }
             }
             return 0;
}
