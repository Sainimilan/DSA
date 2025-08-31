#include<stdio.h>
int main(){
    int n, i, val, a[100];
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the the elments of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be inserted: ");
    scanf("%d",&val);
    for(i=n;i>0;i--){
        a[i] = a[i-1];

    }
    a[0]= val;
    n++;
    printf("the new array is; ");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}