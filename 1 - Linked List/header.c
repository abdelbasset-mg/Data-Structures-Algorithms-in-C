#include <stdio.h>
#include <stdlib.h>
#include "header.h"

//Display the content of the linked list
//The display will be like : " %d --> %d .... --> NULL
void LLC_Display (node *root){
    node *p;
    if (root = NULL) {
        printf("the list in empty");
    }
    else {p= root;
        do {
            printf("%d --> ",p->data);
            p=p->next;
        }while (p!=NULL);
        printf ("NULL");
    }
}


//Insert a new node with the data "value" at the begining of the limked list
void LLC_AddToBegining (node *root , int value){
    node *p = malloc(sizeof(node));
    p->data=value;
    p->next=root;
    root=p;
}


//Insert a new node with the data "value" at the end of the linked list
void LLC_AddToEnd ( node *root, int value){
    node *p = malloc(sizeof(node));
    p->data=value;
    p->next=NULL;
    node *q;
    q=root;
    while (q->next!=NULL){
        q=q->next;
    };
    q->next=p;
}


//Delete a node from the begining of the linked list
void LLC_DeleteFromBegining(node *root){
    if (root != NULL){
    node *p;
    p=root;
    root=root->next;
    free(p);
    };
}


//Delete a node from the end of the linked list
void LLC_DeleteFromEnding (node *root){
    if (root != NULL){
    node *p;
    p=root;
    while (p->next!=NULL){
        p=p->next;
    };
    free(p);
    }
}

//Creat a reverse linked list from another one with deleting the first one
void LLC_Reverse(node *root){
    node *newroot;
    while (root != NULL){
        LLC_AddToBegining(newroot,root->data);
        LLC_DeleteFromBegining(root);
    };
    root=newroot;

}




