#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedList.h"

int main(int argc, char argv)
{
  struct node *head = NULL;

  list_init(head);
  list_insert(&head,12345);
  list_display(head);

  return 0;
}
