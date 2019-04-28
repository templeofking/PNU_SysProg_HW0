#include <stdio.h>
#include <stdlib.h>


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


int main(int argc, char** argv) {

  Node *head = NULL; // empty list
  // create head node
  // the head node does not contain any data
  head = malloc(sizeof(Node));


  Node n1, n2;  // first and second node
  head->next = &n1;   // n1 is connected to the head node
  n1.element = 1;

  n1.next = &n2;  // n2 is connected to n1
  n2.element = 2;
  n2.next = NULL;

  printList(head->next);

  return 0;
}
