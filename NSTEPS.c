#include <stdio.h>     
int main()
{
  int n =0;
  scanf("%d",&n);
  int x =0,y=0;
  while(n--)
    {
      scanf("%d",&x);
      scanf("%d",&y);
      if((x == y) || (x == y + 2))
      {
      if(x&1)
      {
      if(y==x)
      {
      printf("%u\n",2*x - 1);
      }
      else
      {
      printf("%u\n",2*x - 3);
      }
      }
      else
      {
      if(y==x)
      {
      printf("%u\n",2*x);
      }
      else
      {
      printf("%u\n",2*(x - 1));
      }
      }
      }
      else
      {
      printf("No Number\n");
      }
     
    }
  return 0;
}
