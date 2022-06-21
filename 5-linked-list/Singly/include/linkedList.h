#ifndef ALGORITHMS_H
#define ALGORITHMS_H

struct node
{
  int data;
  int size;
  char address[25];
  struct node *nextPtr;
};

void init(struct node *);
void insert(struct node **, int);
void display(struct node **);
void delete_value(struct node **, int);
void search(struct node **);
int list_size();
#endif
