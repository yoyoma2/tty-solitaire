#ifndef TTY_SOLITAIRE_DECK_H
#define TTY_SOLITAIRE_DECK_H

#include "stack.h"

#define FOUNDATION_STACKS_NUMBER 4
#define MANEUVRE_STACKS_NUMBER 7

struct deck {
  struct stack *stock;
  struct stack *waste_pile;
  struct stack *foundation[FOUNDATION_STACKS_NUMBER];
  struct stack *maneuvre[MANEUVRE_STACKS_NUMBER];
};

void allocate_deck(struct deck **);
void initialize_deck(struct deck *);
void free_deck(struct deck *);

#endif
