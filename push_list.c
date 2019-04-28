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

Node* Push(Node *head, int e)
{
    Node* n = (Node *) malloc(sizeof(Node));
    assert(n != NULL);  // crashes if false
    n->element = e;
    n->next = head;
    return n;
}

int main(int argc, char** argv)
{
    Node* list = NULL;
    list = Push(list,1);
    list = Push(list,2);
    printList(list);
    return 0;
}
