#include<stdio.h>
void sum(int a, int b){
    printf("Sum of the numbers is : %d",a+b);
    return;
}
void difference(int a ,int b){
    printf("Difference of the numbers is : %d",a-b);
    return;
}
void product(int a , int b){
    printf("Product of the numbers is : %d",a*b);
    return;
}
void division(int a , int b){
    printf("Division of the numbers is : %.3f",(float)a/b);
    return;
}
void main(){
    int a;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    char ch;
    printf("Enter the operation you want to perform :");
    scanf(" %c",&ch);
    if(ch == '+')
      sum(a,b);
    if(ch == '-')
      difference(a,b);
    if(ch == '*')
      product(a,b);
    if(ch == '/')
      division(a,b);
    


    
}