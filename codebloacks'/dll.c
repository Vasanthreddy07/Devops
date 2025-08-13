#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *lptr;
struct node *rptr;
}node;
int n=0;
node *start=NULL;
void insert_pos();
void delete_pos();
void display();
void main ()
{ int value, pos;
    int choice;
    while (1)
        printf("\n MENU \n 1. INSERT \n 2.DELETE \n 3.DISPLAY \n 4.EXIT");
    printf("\n Enter the choice:");
    scanf("%d",&choice);


switch(choice){
case 1:
    prinf("\nEnter the position:");
    scanf("%d",&pos);
    printf("\n enter value:");
    scanf("%d",&value);
    insert_pos();
    break;
case 2:
    printf("\n Enter the position to deleted :");
    scanf("%d,&p");
    delete_pos();break ;
case 3:
    display();
    break ;
    case 4.Exit (0)
} default :printf("\n invalid chioce");
}

