#include<stdio.h>
void main ()
{
int n,i,arr[100];
printf("enter the no.of elements :");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
if(arr[i]/2==0)
    printf(" prime ");
    else
        printf("not");
}
