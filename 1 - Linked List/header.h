#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED



typedef struct node {
    int data;
    struct node *next;

} node;


void LLC_Display (node *root);
void LLC_AddToBegining (node *root , int value);
void LLC_AddToEnd ( node *root, int value);
void LLC_DeleteFromBegining(node *root);
void LLC_DeleteFromEnding (node *root);
void LLC_Reverse(node *root);

#endif
