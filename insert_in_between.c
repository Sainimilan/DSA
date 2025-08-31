#include<stdio.h>
int main()
{
    int a[100],n,i,pos,val;
    printf(" Enter the number of elements in array: ");
    scanf("%d",&n);
    printf(" Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" Enter the position where you want to insert the element: ");
    scanf("%d",&pos);
    printf(" Enter the value to be inserted: ");
    scanf("%d",&val);
    for(i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=val;
    n++;
    printf(" The new array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    
}