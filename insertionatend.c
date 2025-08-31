#include<stdio.h>
int main()
{
    int n,arr[100],num;
    printf("enter the number of elements in array ");
    scanf("%d",&n);
    printf("enter the elements of array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be inserted ");
    scanf("%d",&num);
    arr[n]=num;
    n++;


    printf("the elements of array are ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}