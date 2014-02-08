#include<stdio.h>
#include<string.h>
int main()
{
    char n[110];
    int c1=0,c2=0,c3=0;
    int i;
    gets(n);
    int temp=strlen(n);
    for(i=0;i<temp;i++)
    {
            if(n[i]=='0')
            {
                         c3++;
                         if(i==temp-1)
                         {
                         if(n[0]=='0')c1++;
                         if(n[0]=='1')
                         c2++;
                         continue;
                         }
                         if(n[i+1]=='0')
                         c1++;
                         else if(n[i+1]=='1')
                         c2++;
            }
    }
    if(c3==temp){printf("EQUAL");return 0;}
    if(c1>c2){printf("SHOOT");return 0;}
    if(c1==c2){printf("EQUAL");return 0;}
    else printf("ROTATE");
    return 0;
}
