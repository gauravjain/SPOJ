#include<stdio.h>
int main()
{
    int x,y,z;
    while((scanf("%d%d%d",&x,&y,&z))==3 && (x+y+z)!=0)
    {
                                        if(x>y && x>z)
                                        {
                                        if(x*x == (z*z + y*y))
                                        printf("right\n");
                                        else
                                        printf("wrong\n");
                                        }
                                        else if(y>z)
                                        {
                                        if(y*y == (z*z + x*x))
                                        printf("right\n");
                                        else
                                        printf("wrong\n");
                                        }
                                        else
                                        {
                                        if(z*z == (x*x + y*y))
                                        printf("right\n");
                                        else
                                        printf("wrong\n");
                                        }
                                        }
                                        return 0;
                                        }
