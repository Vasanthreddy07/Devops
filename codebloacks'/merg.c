#include <stdio.h>
#define size 50
int arr[size];
void quicksort(int,int);
void swap(int,int);
int main()
{
    int i,n;
    printf("\n Enter no.of elements u want?");
    scanf("%d",&n);
    printf("\n Enter any %d elements:",n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    quicksort(0,n-1);
     printf("\n After sorting the elements are:");
    for(i=0;i<n;i++)
      printf("%d\t",arr[i]);

    return 0;
}
void quicksort(int l, int h)
{
    int pivot= l,i=l,j=h;
    if(l<h)
    {
        while(i<j)
        {
            while(arr[i]<=arr[pivot]&&i<h)
             i++;
            while(arr[j]>arr[pivot] && j>0)
              j--;
            if(i<j)
              swap(i,j);
        }
        swap(j,pivot);
        quicksort(l,j-1);
        quicksort(j+1,h);
    }
}
void swap(int l, int r)
{
    int temp;
    temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
}
