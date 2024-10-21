#include<stdio.h>
#include<malloc.h>
#include"poly.h"

void main()
{
    struct node *p1=NULL,*p2=NULL,*p3=NULL;

    struct node *create();
    void display();
    struct node *add();

    printf("Enter First Polynomial\n");
    p1=(struct node *)malloc(sizeof(struct node));
    p1->next=NULL;
    p1=create(p1);
    printf("The First Polynomial Is\n");
    display(p1);

    printf("Enter Second Polynomial\n");
    p2=(struct node *)malloc(sizeof(struct node));
    p2->next=NULL;
    p2=create(p2);
    printf("The First Polynomial Is\n");
    display(p2);

    p3=(struct node *)malloc(sizeof(struct node));
    p3->next=NULL;
    p3=add(p1,p2,p3);
    printf("\nThe Polynomial Addition is\n");
    display(p3);
}