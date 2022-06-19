#ifndef ALGORITHMS_H
#define ALGORITHMS_H

struct node
{
  int data;
  char address[25];
  struct node *nextNode;
};

void init(struct node *);

#endif
