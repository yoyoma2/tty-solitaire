#ifndef TTY_SOLITAIRE_STACK_H
#define TTY_SOLITAIRE_STACK_H

#include "card.h"

struct stack {
  struct card  *card;
  struct stack *next;
};

void allocate_stack(struct stack **);
void initialize_stack(struct stack *);
void free_stack(struct stack *);
struct stack *duplicate_stack(struct stack *);
bool empty(struct stack *);
int length(struct stack *);
void push(struct stack **, struct card *);
struct card *pop(struct stack **);
struct stack *reverse(struct stack *);

#endif
