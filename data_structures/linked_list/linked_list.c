#include <stdio.h>
#include <stdlib.h>

void printList();

struct Node
{
  int data;
  struct Node *next;
};

int main()
{
  struct Node *head = NULL;
  struct Node *second = NULL;
  struct Node *third = NULL;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  second->next = NULL;

  printList(head);

  free(head);
  free(second);
  free(third);
}

void printList(struct Node *n)
{
  while (n != NULL)
  {
    printf(" %d ", n->data);
    n = n->next;
  }
}
