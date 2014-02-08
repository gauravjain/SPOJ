#include <stdio.h>
#include <string.h>
int main()
{
  char s[11];
  scanf("%s",s);
  int l=strlen(s);
  if(s[l-1]=='0')
    {
      printf("2\n");
    }
  else
    {
      printf("1\n%d\n",s[l-1]-'0');
    }
  return 0;
}
