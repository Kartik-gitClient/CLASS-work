#include <stdio.h>
#include <stdlib.h>

// LINKED LIST IMPLEMENTATION USING C

struct node {
    int data;
    struct node *next;
};

struct node *first = NULL;

// Function Prototypes
void create();
void insertFirst(int data);
void insertLast(int data);
void insertMiddle(int data, int pos);
void deleteFirst();
void deleteLast();
void deleteMiddle(int pos);
void traverse();
struct node* createNode(int data);

int main() {
    int choice, data, pos;

    while (1) {
        printf("\n--- LINKED LIST OPERATIONS ---");
        printf("\n1. Create List");
        printf("\n2. Insert at First");
        printf("\n3. Insert at Last");
        printf("\n4. Insert at Middle");
        printf("\n5. Delete from First");
        printf("\n6. Delete from Last");
        printf("\n7. Delete from Middle");
        printf("\n8. Display List");
        printf("\n9. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                insertFirst(data);
                break;
            case 3:
                printf("Enter data: ");
                scanf("%d", &data);
                insertLast(data);
                break;
            case 4:
                printf("Enter data: ");
                scanf("%d", &data);
                printf("Enter position: ");
                scanf("%d", &pos);
                insertMiddle(data, pos);
                break;
            case 5:
                deleteFirst();
                break;
            case 6:
                deleteLast();
                break;
            case 7:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deleteMiddle(pos);
                break;
            case 8:
                traverse();
                break;
            case 9:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

struct node* createNode(int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void create() {
    int data, ch;
    struct node *ptr, *newNode;
    
    printf("Enter data for first node: ");
    scanf("%d", &data);
    first = createNode(data);
    ptr = first;

    do {
        printf("Enter data for next node: ");
        scanf("%d", &data);
        newNode = createNode(data);
        ptr->next = newNode;
        ptr = newNode;
        
        printf("Press 1 to add more, else any other key: ");
        scanf("%d", &ch);
    } while (ch == 1);
}

void insertFirst(int data) {
    struct node *newNode = createNode(data);
    newNode->next = first;
    first = newNode;
    printf("Node inserted at first.\n");
}

void insertLast(int data) {
    struct node *newNode = createNode(data);
    if (first == NULL) {
        first = newNode;
    } else {
        struct node *temp = first;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Node inserted at last.\n");
}

void insertMiddle(int data, int pos) {
    if (pos <= 1) {
        insertFirst(data);
        return;
    }
    struct node *newNode = createNode(data);
    struct node *temp = first;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of bounds!\n");
        free(newNode);
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
        printf("Node inserted at position %d.\n", pos);
    }
}

void deleteFirst() {
    if (first == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct node *temp = first;
    first = first->next;
    free(temp);
    printf("First node deleted.\n");
}

void deleteLast() {
    if (first == NULL) {
        printf("List is empty!\n");
        return;
    }
    if (first->next == NULL) {
        free(first);
        first = NULL;
    } else {
        struct node *temp = first;
        struct node *prev = NULL;
        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
    }
    printf("Last node deleted.\n");
}

void deleteMiddle(int pos) {
    if (first == NULL) {
        printf("List is empty!\n");
        return;
    }
    if (pos == 1) {
        deleteFirst();
        return;
    }
    struct node *temp = first;
    struct node *prev = NULL;
    for (int i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of bounds!\n");
    } else {
        prev->next = temp->next;
        free(temp);
        printf("Node at position %d deleted.\n", pos);
    }
}

void traverse() {
    if (first == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct node *temp = first;
    printf("\nElements in Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}