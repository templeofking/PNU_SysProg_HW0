#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef struct ListNode {
    int element;
    struct ListNode* next;
} Node;

void printList(Node* head) {
    Node* curr = head;
    printf("\[ ");
    while (curr != NULL) {
        printf(" (value: %d) ", curr->element);
        curr = curr->next;
    }
	printf(" ]\n");
}


// Create a new item and set its value
// Link the new item to point to the head of the list
// Set the head of the list to be our new item
void Push(Node **head, int e)
{
    Node* newNode = (Node *) malloc(sizeof(Node));
    assert(newNode != NULL);  // crashes if false
    newNode->element = e;
    newNode->next = *head;
    *head = newNode;
}

int main(int argc, char** argv)
{
    Node* head = NULL;
    Push(&head,1);
    Push(&head,2);
    Push(&head,3);
    printList(head);
    return 0;
}
