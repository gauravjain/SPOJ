#include<stdio.h>
#include<math.h>
int main()
{
	    double i,j,k;
	    double p = 0;
	    i=0.5;
	    j=0.2;
	    k=0.125;
	    p=4.0*(atan(i)+atan(j)+atan(k));
    	printf("%.20g",p);
    	return 0;
	}
