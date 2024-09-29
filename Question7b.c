#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three distinct numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    int max = (a>b && a>c) ? a : (b>c && b>a) ? b : c;
    printf("The Greatest number among them is : %d",max);
   

}