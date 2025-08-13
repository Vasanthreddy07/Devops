#include <string.h>
int main()
{
 char text[20],pat[20];
 int a,b,i,j;
 printf("Enter the string : ");
 gets(text);
 printf("Enter the pattern to find : ");
 gets(pat);
 a = strlen(pat);
 b = strlen(text);
 for (i = 0; i <= b - a; i++)
 {
     for(j=0;j<a;j++)
 if (text[i + j] != pat[j])
 break;
 if (j == a){
 printf("Pattern found at position %d \n", i);}

 }
}
