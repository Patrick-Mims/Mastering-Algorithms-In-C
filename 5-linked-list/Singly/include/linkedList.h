#ifndef ALGORITHMS_H
#define ALGORITHMS_H

struct node
{
  short data;
  char address[25];
  struct node *nextPtr;
};

void list_init(struct node *);
void list_insert(struct node **, short);

#endif
