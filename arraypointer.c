#include<stdio.h>
#include<string.h>
int main()
{
    int a[10];
    int i;
    int *ptr;
    ptr=a;

    for(i=1;i<=4;i++)
    {
        scanf("%d",ptr+i);
        printf("\n");
    }
    //printf("%d",*(a+2));
    // values are
    for(i=1;i<=4;i++)
    {
        printf("%d",i[a]);
        printf("\n");
        printf("%p\n",a+i);
       
    }
    int emta;
    emta=*a+1;
   printf("\n%d",emta);
     printf("%p\n",&a+i);
    
      return 0;
}
