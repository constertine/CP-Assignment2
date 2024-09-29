#include<stdio.h>
#define sum(a,b)(a+b)
#define difference(a,b)(a-b)
#define product(a,b)(a*b)
#define division(a,b)((float)a/b)

void main(){
    int a,b;
    char ch;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("Enter the operation you want to perform :");
    scanf(" %c",&ch);
    if(ch=='+'){
      printf("The sum of the numbers is : %d",sum(a,b));
      return;
}
    if(ch=='-'){
      printf("The difference of the numbers is : %d",difference(a,b));
      return;
}
    if(ch=='*'){
      printf("The product of the numbers is : %d",product(a,b));
      return;
}
    if(ch=='/'){
      printf("The division of the numbers is : %.3f",division(a,b));
      return;
    }



}