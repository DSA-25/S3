#include<stdio.h>
#include<malloc.h>
#include"gr.h"
void main()
{
  int a[10][10];
  
  void create();
  void display();
  void countdegree();
  void createlist();
  void displaylist();
  
  printf("\n How many no of vertices");
  scanf("%d",&n);
  printf("Create matrix\n");
  create(a,n);
  printf("\n The adjacency matrix is \n");
  display(a,n);
  printf("\n The adjacency list is \n");
  createlist(a,n);
  displaylist(n);
  printf("\nDegree of graph \n");
  countdegree(a,n);
}                                                                                   
