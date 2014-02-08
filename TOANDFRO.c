#include<stdio.h>
#include<string.h>
int main()
{
 int n,i,z,f,k;
 while(1)
 {
 scanf("%d\n",&n);
 if(n==0)
 break;
 char s[201];
 //char* s = (char*)malloc(200*sizeof(int));
 //scanf("%s",s);
 gets(s);
 int l = strlen(s);
 char arr[l/n][n];
 for(i=0;i<l;i++)
 arr[i/n][i%n] = s[i];
 for(i=1;i<l/n;i=i+2)
 for(k=0;k<n/2;k++)
 {
 char c = arr[i][k];
 arr[i][k] = arr[i][n-k-1];
 arr[i][n-k-1] = c;
 }
 for(z=0;z<n;z++)
 for(f =0;f<l/n;f++)
 printf("%c",arr[f][z]);
 printf("\n");	
 }	
 return 0;
}
