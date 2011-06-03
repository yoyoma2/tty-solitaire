#ifndef DISPLAY_H
#define DISPLAY_H

#include "card.h"
#include "stack.h"
#include "deck.h"
#include "cursor.h"

#define EMPTY_STACKS_NUMBER 13

#define BLACK_ON_WHITE 1
#define RED_ON_WHITE   2
#define WHITE_ON_BLUE  3
#define WHITE_ON_GREEN 4

void erase_stack(struct stack *);
void draw_card(struct card *);
void draw_stack(struct stack *);
void draw_deck(struct deck *);
void draw_cursor(struct cursor *);
void erase_cursor(struct cursor *);

#endif