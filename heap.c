#include<stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int heapify(int a[],int n,int i)
{
    int max,left,right;
    max=i;
    left=2*i+1;
    right=2*i+2;

    if (left<n &&a[left]>a[max])
        max=left;
    if (right<n &&a[right]>a[max])
        max=right;
    if (max !=i) 
    {
        swap(&a[max],&a[i]);
        heapify(a,n,max);
    }
}
void heapsort(int a[],int n)
{
    int i;
    for ( i =(n/2)-1; i>=0; i--)
    {
        heapify(a,n,i);
    }
    for ( i = n-1; i >= 0; i--)
    {
        swap(&a[0],&a[i]);
        heapify(a,i,0);
    }
}

void main()
{
    int i,n,a[10];

    printf("enter how many values\n");
    scanf("%d",&n);

    printf("Enter actual values");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the sorted elements are");
    heapsort(a,n);
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
}

