#include<math.h>
#include<stdio.h>
int main(void)
{      double c = .5/acos(-1);     
       int l;
       for(;scanf("%d", &l)==1 && l; )
       printf("%.2lf\n",l*l*c);
       return 0;
}
