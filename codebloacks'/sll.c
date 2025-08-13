#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* ptr;
} node;

void insertsll_pos(int pos, int value);
void delete_pos(int pos);
void display();

node* start = NULL;
int n = 0;

void main() {
    int choice, pos, value;
    while (1) {
        printf("\nMenu:\n1. Insert at Position \n2. Delete \n3. Display\n4. Exit\n");
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
                printf("Enter the position to delete: ");
                scanf("%d", &pos);
                delete_pos(pos);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}

void insertsll_pos(int pos, int value) {
    node* newnode = (node*)malloc(sizeof(node));
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
        node* temp = start;
        for (int i = 1; i < pos - 1; i++) {
            temp = temp->ptr;
        }
        newnode->ptr = temp->ptr;
        temp->ptr = newnode;
    }
    n++;
}

void delete_pos(int pos) {
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }

    if (pos < 1 || pos > n) {
        printf("Invalid position\n");
        return;
    }

    node* temp = start;

    if (pos == 1) {
        start = start->ptr;
        free(temp);
    } else {
        node* prev = NULL;
        for (int i = 1; i < pos; i++) {
            prev = temp;
            temp = temp->ptr;
        }
        prev->ptr = temp->ptr;
        free(temp);
    }
    n--;
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
