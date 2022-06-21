#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedList.h"

static int counter = 0;

/* Initialize list
 * */
void init(struct node *list)
{
  printf("Initialize List\n");

  if((list = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  printf("Linked List Initialized\n");
}

/* Insert into list
 * */
void insert(struct node **list, int item)
{
  counter = counter + 1;
  printf("Insert -> %d\n", item);
  struct node *newNode = NULL;

  if((newNode = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  newNode->data = item;
  newNode->nextPtr = *list;

  *list = newNode;
}

/* Display list
 * */
void display(struct node **list)
{
  printf("Display\n");

  for(*list; *list != NULL; *list = (*list)->nextPtr)
    printf("%hu\n", (*list)->data);
}

/* Delete a value from the list
 * */
void delete_value(struct node **list, int item)
{
  counter = counter - 1;
  printf("Deleting Value -> %d\n", item);

  struct node *cNode = NULL;
  struct node *pNode = NULL;

  for(cNode = *list; cNode != NULL && cNode->data != item;
      pNode = cNode, cNode = cNode->nextPtr)
    ;

  if(cNode == NULL)
  {
    printf("Item was not found\n");
    exit(EXIT_FAILURE);
  }

  if(pNode == NULL)
    *list = (*list)->nextPtr;
  else
    (*list)->nextPtr = (*list)->nextPtr;
}

int list_size()
{
  return counter;
}

/*
   bool isHead(head){}
   bool isTail(head){}
   void destroy(){}
   void head(head){}
   void next(head){}
   void search(struct node **list){}
   void tail(&head){}
 */
