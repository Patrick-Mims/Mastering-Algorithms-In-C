#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedList.h"

int main(int argc, char argv)
{
  int i = 0;
  struct node *head = NULL;

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
  delete_value(&head,4000);

  printf("\n");
  display(&head);

  /*
  delete_value(&head,2000);
  display(&head);

  insert(&head,3000);
  display(&head);

  insert(&head,4000);
  insert(&head,5000);

  delete_value(&head,4000);
  display(&head);
  */

  //search(&head);

  return 0;
}
