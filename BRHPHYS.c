#include<stdio.h>
#include<string.h>
	 
	int main()
	{
	  int i,j,k;
	  int n,resp,ress,p,s;
	  float avg=0;
	  scanf("%d",&n);
	  resp=0;ress=0;
	  while(n--)
	  {
	   scanf("%d%d",&p,&s);
	   resp+=p;
	   ress+=s;
	  }
	  avg=0;
	  avg=(float)((ress*100)/resp);
	  if(avg>=90&&avg<=100)
	    printf("A\n");
	  else if(avg>=80&&avg<=89)
	   printf("B\n");
	  else if(avg>=70&&avg<=79)
	   printf("C\n");
	  else if(avg>=60&&avg<=69)
	   printf("D\n");
	  else
	   printf("F\n");
		return 0;
	}
