#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[50],i,num,pos,n;
    printf("number of element you want");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element :");
    scanf("%d",&num);
      n++;
      printf("\nthe value of n :%d\n",n);
    //t0 insert element at beggining 
    for(i=n-1;i>=0;i--)
    {
        a[n-1]=a[i];
    }
    a[0]=num;
   for(i=0;i<=n-1;i++)//traversal of array
    {
        printf("%d",a[i]);
        printf("\n");
    }
    
}
