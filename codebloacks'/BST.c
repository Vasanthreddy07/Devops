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
if(current->right)
        {
            push(stack1,current->right);
        }
    }
    while(!isEmpty(stack2))
    {
        struct Node *temp=pop(stack2);
        printf("%d ",temp->key);
    }
    free(stack1);
    free(stack2);
}

struct Node *insert(struct Node *root,int key)
{
    if(root==NULL)
    {
        return newNode(key);
    }
    if(key<root->key)
    {
        root->left=insert(root->left,key);
    }
    else if(key>root->key)
    {
        root->right=insert(root->right,key);
    }
    return root;
}

int main()
{
    struct Node *root=NULL;
    int ch,key;
    while(1){
        printf("1. Insert key\n");
        printf("2. Preorder Traversal\n");
        printf("3. Inorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter key to insert: ");
                scanf("%d",&key);
                root=insert(root,key);
                break;
            case 2:
                printf("Preorder traversal: ");
                Preorder(root);
                printf("\n");
                break;
            case 3:
                printf("Inorder traversal: ");
                Inorder(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder traversal: ");
                Postorder(root);
                printf("\n");
                break;
            case 5:
                printf("Terminated\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}
