#include <stdio.h>
#include <stdlib.h>

// DOUBLY LINKED LIST IMPLEMENTATION USING C

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *first = NULL;

// Function Prototypes
void CREATE();
void FTRAVERSE();
void BTRAVERSE();
void INSERTFIRST();
void INSERT_LAST();
void DELETE_FIRST();
void DELETE_LAST();
void DELETE_BET();
struct node* createNode(int data);

int main() {
    int choice;

    while (1) {
        printf("\n--- DOUBLY LINKED LIST OPERATIONS ---");
        printf("\n1. CREATE");
        printf("\n2. FTRAVERSE (Forward Traverse)");
        printf("\n3. BTRAVERSE (Backward Traverse)");
        printf("\n4. INSERTFIRST");
        printf("\n5. INSERT_LAST");
        printf("\n6. DELETE_FIRST");
        printf("\n7. DELETE_LAST");
        printf("\n8. DELETE_BET");
        printf("\n9. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: CREATE(); break;
            case 2: FTRAVERSE(); break;
            case 3: BTRAVERSE(); break;
            case 4: INSERTFIRST(); break;
            case 5: INSERT_LAST(); break;
            case 6: DELETE_FIRST(); break;
            case 7: DELETE_LAST(); break;
            case 8: DELETE_BET(); break;
            case 9: exit(0);
            default: printf("Invalid choice!\n");
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
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void CREATE() {
    int data, ch;
    struct node *temp, *newNode;
    
    printf("Enter data for first node: ");
    scanf("%d", &data);
    first = createNode(data);
    temp = first;

    do {
        printf("Enter data for next node (or 0 to stop): ");
        scanf("%d", &data);
        if (data == 0) break;
        
        newNode = createNode(data);
        temp->next = newNode;
        newNode->prev = temp;
        temp = newNode;
        
        printf("Press 1 to add more, else 0: ");
        scanf("%d", &ch);
    } while (ch == 1);
}

void FTRAVERSE() {
    if (first == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct node *temp = first;
    printf("\nForward Traversal: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void INSERTFIRST() {
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    struct node *newNode = createNode(data);
    if (first == NULL) {
        first = newNode;
    } else {
        newNode->next = first;
        first->prev = newNode;
        first = newNode;
    }
    printf("Node inserted at first.\n");
}

void INSERT_LAST() {
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    struct node *newNode = createNode(data);
    if (first == NULL) {
        first = newNode;
    } else {
        struct node *temp = first;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("Node inserted at last.\n");
}

void DELETE_FIRST() {
    if (first == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct node *temp = first;
    first = first->next;
    if (first != NULL) {
        first->prev = NULL;
    }
    free(temp);
    printf("First node deleted.\n");
}

void DELETE_LAST() {
    if (first == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct node *temp = first;
    if (temp->next == NULL) {
        free(temp);
        first = NULL;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
    }
    printf("Last node deleted.\n");
}

void DELETE_BET() {
    if (first == NULL) {
        printf("List is empty!\n");
        return;
    }
    int pos;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    
    if (pos == 1) {
        DELETE_FIRST();
        return;
    }
    
    struct node *temp = first;
    for (int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Position out of bounds!\n");
    } else {
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        if (temp->prev != NULL) {
            temp->prev->next = temp->next;
        }
        free(temp);
        printf("Node at position %d deleted.\n", pos);
    }
}

void BTRAVERSE() {
    if (first == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct node *temp = first;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    printf("\nBackward Traversal: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}