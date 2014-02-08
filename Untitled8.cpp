#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int modulo (int a, int b, int c){
    int result = 1;

    while (b){
        if (b&1){
          result *= a;
          result %= c;
        }
        b >>=1 ;
        a *= a;
        a %= c;
    }

    return result;
}

int isPrime(int n){
    int i;
    int x;

    if (n==2)
        return 1;

    for (i=0;i<10;i++){
        x = rand()%n;
        if (x==0||x==1)
            x++;
        if (modulo(x,n-1,n)!=1)
            return 0;
    }

    return 1;
}

int main(){
    int i;
    int count = 0;

    for (i=2;i<10000000;i++){
        if(isPrime(i))
            count++;
    }

    printf("count=%d\n",count);

return 0;
} 
