#include<stdio.h>
#include<malloc.h>

struct node
{
    int exp;
    int coef;
    struct node *next;
};
struct node * create(struct node * head)
{
    struct node *temp=NULL,*p=NULL;
    int i,n;

    printf("Enter the no of terms\n");
    scanf("%d",&n);

    temp=head;
    printf("Enter term in decreasing order of exponent\n");
    for (i = 0; i < n; i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->next=NULL;

        printf("\nEnter coefficient");
        scanf("%d",&p->coef);

        printf("\nEnter Exponent");
        scanf("%d",&p->exp);
        temp->next=p;
        temp=p;
    }
    return head;   
}
void display(struct node *head)
{
    struct node *temp=NULL;
    temp=head->next;

    do
    {
        printf("%d",temp->coef);
        printf("x%d\n",temp->exp);
        temp=temp->next;
    } while (temp!=NULL);
}
struct node *add(struct node *p1,struct node *p2,struct node *p3)
{
    struct node *p=NULL,*t1=NULL,*t2=NULL,*t3=NULL;

    t1=p1->next;
    t2=p2->next;
    t3=p3;

    while (t1!=NULL && t2!=NULL)
    {
        p=(struct node *)malloc(sizeof(struct node));
        p->next=NULL;

        if(t1->exp>t2->exp)
        {
            p->exp=t1->exp;
            p->coef=t1->coef;
            t1=t1->next;
        }
        else if (t1->exp<t2->exp)
        {
            p->exp=t2->exp;
            p->coef=t2->coef;
            t2=t2->next;
        }
        else
        {
            p->coef=t1->coef+t2->coef;
            p->exp=t1->exp;
            t1=t1->next;
            t2=t2->next;
        }

        t3->next=p;
        t3=p;
        
    }
    if (t1!=NULL)
    {
        t3->next=t1;
    }
    if (t2!=NULL)
    {
        t3->next=t2;
    } 
    return p3;  
}