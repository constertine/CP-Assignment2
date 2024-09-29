#include<stdio.h>
void main(){
    int a;
    int b;

    printf("Enter the 1st number :");
    scanf("%d",&a);
    printf("Enter the 2nd number :");
    scanf("%d",&b);
    float y = (float)a/b;
    printf("The value of a/b is %f",y);
}