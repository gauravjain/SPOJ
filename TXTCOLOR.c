#include<stdio.h>
int main()
{
    char t[201];
    int n,i,flag;
    scanf("%d\n",&n);
    while(n>0)
    {         n--;
              flag=0;
              i=0;
              gets(t);
              while(i<=strlen(t))
              {
                                if(t[i]=='a'||t[i]=='b'||t[i]=='d'||t[i]=='e'||t[i]=='g'||t[i]=='o'||t[i]=='p'||t[i]=='q'||t[i]=='A'||t[i]=='D'||t[i]=='O'||t[i]=='P'||t[i]=='Q'||t[i]=='R')
                                flag++;
                                else if(t[i]=='B')
                                flag=flag+2;
                                i++;
                                }
                                    printf("%d\n",flag);
                      }
                                    return 0;
                                    }              
