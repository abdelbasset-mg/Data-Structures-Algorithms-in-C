#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{
    int v,c;
    node *root = malloc(sizeof(node));
    printf("welcome to the linked list menu /n");
    printf("Let's start creating our linked list and start playing with it /n");
    printf("/n");
    printf("Enter the value of the first node /n");
    scanf("%d",&v);
    LLC_AddToBegining (root ,v);
    do {
        printf("Enter : /n");
    printf("1- Display the linked list  /n");
    printf("2- Add to the begining  /n");
    printf("3- Add to the end");
    printf("4- Delete from the begining  /n");
    printf("5- Delete from the end  /n");
    printf("6- Reverse the linked list /n");
    printf("0- Quit");

    scanf("%d",&c);
    switch (c){
        case 1 : LLC_Display(root);
        break;
        case 2 : {
            printf("enter a value");
            scanf("%d",&v);
            LLC_AddToBegining(root,v);
        };
        break;
        case 3: {
            printf("enter a value");
            scanf("%d",&v);
            LLC_AddToEnd(root,v);
        }
        break;
        case 4 : LLC_DeleteFromBegining(root);
        break;
        case 5 : LLC_DeleteFromEnding(root);
        break;
        case 6 : LLC_Reverse(root);
        break;
        default : return 0;
    }

    }while(c!=0);
    return 0;






}
