struct node
        {
            int data;
            struct node *next;
        }*v[10];

 int i,j,n;
 struct node *p=NULL,*temp=NULL;

 
 void create(int a[][n],int n)
 {
    int i,j,x;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      printf("enter the values between %d and %d vertices\n",i,j);
      scanf("%d",&a[i][j]);
      if(i!=j)
      {
         if(a[i][j]!=0 && a[i][j]!=1)
            {
             a[i][j]=1;
            }
     }
     else
     {
        a[i][j]=0;
    }
    }
 }
 }

void display(int a[][n],int n)
{
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
     printf("%d\t",a[i][j]);
   }
   printf("\n");
   }
}

void countdegree(int a[][n],int n)
{
   int i,j,k,sumi,sumo;
   for(k=1;k<=n;k++)
   {
    sumi=0;
    for(i=1;i<=n;i++)
    sumi=sumi+a[i][k];
    sumo=0;
    for(j=1;j<=n;j++)
    sumo=sumo+a[k][j];
    printf("vertex=%d\t indegree=%d\t outdegree=%d\t totaldegree=%d\n",k,sumi,sumo,sumi+sumo);
   }
}

void createlist(int a[][n],int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
   v[i]=NULL;
   for(j=1;j<=n;j++)
   {
     if(a[i][j]!=0)
     {
      p=(struct node *)malloc(sizeof(struct node));
      p->data=j;
      p->next=NULL;
      if(v[i]==NULL)
      v[i]=temp=p;
      else
      temp->next=p;
      temp=p;
     }
   }
 }
}

void displaylist(int n)
{
  int i;
  for(i=1;i<=n;i++)
  {
    temp=v[i];
    printf("\n%d\t",i);
    while(temp!=NULL)
    {
      printf("%d\t",temp->data);
      temp=temp->next;
     }
   }
}
