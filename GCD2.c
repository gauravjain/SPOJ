#include<stdio.h>
/*double gcd(double a, double b)
{       if(a==0)
       return b;
       while(b>0)
       {if(b>a)
           b=b-a;
        else
           a=a-b;
           return a;
           }
           
}*/
int gcd(int a, int b)
{   if(b>a) 
    goto b_larger;
    while (1) 
    {
        a=a%b;
        if(a==0) 
        return b;
        b_larger:
        b=b%a;
        if(b==0)
        return a;
    }
}

/*int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}*/
main()
{
      int x,y,r,n;
      scanf("%d",&n);
      while(n!=0)
      {
                 
                 scanf("%d %d",&x,&y);
                 r=gcd(x,y);
                 printf("%d\n",r);
                 n--;
                 }
                 }
                 
