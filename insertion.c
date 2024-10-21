#include<stdio.h>
void insertion (int x[],int n);
void main()
{
    int i,n;
    printf("Enter The Size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Values of Array");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
 insertion(arr,n);
    for ( i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
}
void insertion(int x[],int n){

 int i,k,key;
    for ( k = 1; k <n; k++)
    {
        key=x[k];
        for ( i =k-1; x[i]>key && i>=0; i--)
        {
            x[i+1]=x[i];
        }
       x[i+1]=key; 
    }
} 