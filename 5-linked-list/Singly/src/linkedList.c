#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedList.h"

/* Initialize list
 * */
void init(struct node *list)
{
  if((list = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  printf("Linked List Initialized\n");
}

/* Insert into list
 * */
void insert(struct node **list, int item)
{
  struct node *newNode = NULL;

  if((newNode = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  newNode->data = item;
  newNode->nextPtr = *list;

  *list = newNode;
}

/* Display list
 * */
void display(struct node *list)
{
  struct node *d = NULL;

  for(d = list; d != NULL; d = d->nextPtr)
  {
    printf("Display: %hu\n", d->data);
  }
}

/* Delete a value from the list
 * */
void delete_value(struct node **list, int item)
{
  struct node *cNode = NULL;
  struct node *pNode = NULL;

  for(cNode = *list; cNode != NULL && cNode->data != item;
      pNode = cNode, cNode = cNode->nextPtr)
    ;

  if(cNode == NULL)
    printf("Item was not found\n");

  if(pNode == NULL)
    *list = (*list)->nextPtr;


  free(cNode);
}
