#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedList.h"

void list_init(struct node *list)
{
  if((list = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  printf("Linked List Initialized\n");
}

void list_insert(struct node **list, short item)
{
  struct node *newNode = NULL;

  if((newNode = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  newNode->data = item;
  newNode->nextPtr = *list;

  *list = newNode;
}

void list_display(struct node *list)
{
  struct node *d = NULL;

  for(d = list; d != NULL; d = d->nextPtr)
  {
    printf("Display: %hu\n", d->data);
  }
}
