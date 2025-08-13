#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* ptr;
} node;

void insertsll_pos();
void display();

node* start = NULL;
int n = 0;

void main() {
    int choice, pos, value;
 while(1)
 {
        printf("\nMenu:\n1. Insert at Position\n2. Display\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter the value to insert: ");
                scanf("%d", &value);
                printf("Enter the position: ");
                scanf("%d", &pos);
                insertsll_pos(pos, value);
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}

void insertsll_pos(int pos, int value) {
    node* newnode = (node*)malloc(sizeof(node));
    node* temp = start;
    newnode->data = value;
    newnode->ptr = NULL;

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        free(newnode);
        return;
    }

    if (pos == 1) {
        newnode->ptr = start;
        start = newnode;
    } else {
        for (int i = 2; i < pos ; i++) {
            temp = temp->ptr;
        }

        temp->ptr = newnode;
    }
    n++;
}

void display() {
    node* temp = start;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("List elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->ptr;
    }
    printf("\n");
}
