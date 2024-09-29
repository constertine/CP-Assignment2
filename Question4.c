#include<stdio.h>
void main(){
    int a,b;
    printf("Enter any two numbers :");
    scanf("%d %d",&a,&b);
    int c = a>>b;
    printf("%d >> %d is equal to %d\n",a,b,c);
    int d = a<<b;
    printf("%d << %d is equal to %d",a,b,d);
    
}