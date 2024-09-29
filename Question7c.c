#include<stdio.h>
void greatest(int a , int b , int c){
    if(a>b && a>c){
        printf("%d is Greatest of them",a);
    }
    if(b>a && b>c){
        printf("%d is Greatest of them",b);
    }
    if(c>a && c>b){
        printf("%d is Greatest of them",c);
    }
    else {
        printf("The numbers are not distinct");
    }
}
void main()
{
    int a,b,c;
    printf("Enter three distinct numbers :");
    scanf("%d %d %d", &a, &b, &c);
    greatest(a,b,c);

}