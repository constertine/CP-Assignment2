#include<stdio.h>
void main(){
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    char ch;
    printf("Enter the operation : ");
    scanf(" %c", &ch);
    switch(ch){
        case '+':
        printf("The Sum of the numbers is %d",a+b);
        break;
        case '-':
        printf("The Difference of the numbers is %d",a-b);
        break;
        case '*':
        printf("The Product of the numbers is %d",a*b);
        break;
        case '/':
        printf("The Division of the numbers is %f",(float)a/b);
        default:
        printf("Invalid Operation");
    }

}