#include<stdio.h>
void main()
{
    int A[5],B[5],C[5],i;
    printf("enter the first array\n");
    for(i=0;i<5;i++)
    {
        printf("enter the value");
        scanf("%d",&A[i]);
    }
    printf("enter the second array");
    for(i=0;i<5;i++)
    {
        printf("enter the value");
        scanf("%d",&B[i]);
    }
    for(i=0;i<5;i++)
    {
        C[i]=A[i]+B[i];
        printf("sum is %d",C[i]);
    }
}
