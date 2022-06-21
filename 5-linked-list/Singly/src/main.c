#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedList.h"

int main(int argc, char argv)
{
  int i = 0;
  struct node *head = NULL;
  struct node *s = NULL;

  if((s = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  init(head);

  insert(&head,1000);
  insert(&head,2000);
  insert(&head,3000);
  insert(&head,4000);
  insert(&head,5000);
  insert(&head,6000);

  printf("\n");
  display(&head);

  printf("\n");

  printf("Size: %d\n", list_size());
  /*
  printf("\n");
  delete_value(&head,4000);

  printf("\n");
  display(&head);
  */

  //search(&head);

  return 0;
}
