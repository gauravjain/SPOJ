#include<stdio.h>
int main() {
int m,n;
double a,b;
while(scanf("%d %d", &n, &m)==2 && m+n)
{
if(!n)
printf("1.000000\n");
else if(n > m) 
printf("0.000000\n");
else {
a=m; 
b=n;
printf("%lf\n",(a-b+1.0)/(a+1.0));
}
}
return 0;
}
