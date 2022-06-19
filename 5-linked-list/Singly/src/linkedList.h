#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedList.h"

void linkedListInit()
{
  struct node *head = NULL;

  if((head = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  printf("Linked List Initialized\n");
}
