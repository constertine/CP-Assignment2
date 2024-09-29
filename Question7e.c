#include<stdio.h>
#define maximum(a,b,c)((a>b && a>c) ? a : (b>a && b>c) ? b:c)
void main(){
    int a,b,c;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    printf("Enter 3rd number :");
    scanf("%d",&c);
    printf("The Greatest of them is : %d",maximum(a,b,c));

}