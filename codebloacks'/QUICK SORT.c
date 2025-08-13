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
void quicksort(int low, int high)
{
    int pivot,lt,rt;
    if(low<high)
    {
        pivot=arr[high];
        lt=low-1;
        rt=high;
        while(1)
        {
            lt++;
            while(arr[lt]<pivot)
             lt++;
            rt--;
            while(arr[rt]>pivot && rt!=0)
              rt--;
            if(lt>=rt)
              break;
            else
              swap(lt,rt);
        }
        swap(lt,high);
        quicksort(low,lt-1);
        quicksort(lt+1,high);
    }
}
void swap(int l, int r)
{
    int temp;
    temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
}
