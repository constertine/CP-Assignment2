#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    printf("Enter the value of coefficient of x^2 :");
    scanf("%d",&a);
    printf("Enter the value of coefficient of x :");
    scanf("%d",&b);
    printf("Enter the value of constant :");
    scanf("%d",&c);
    int discriminant = (b*b - 4*a*c);
    if(discriminant>=0){
        float root1 = (-b+discriminant)/2*a;
        float root2 = (-b-discriminant)/2*a;
        printf("The roots of the quadratic equation are : %.2f and %.2f",root1,root2);

    }
    else{
        printf("Since Discriminant is negative , hence no roots");

    }
}