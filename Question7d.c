#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three distinct numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
     goto amax;
    if(b>a && b>c)
     goto bmax;
    if(c>a && c>b)
     goto cmax;
    
    else{
    printf("The numbers are not distinct");
    return;
    
    }

    amax : printf("%d is the Greatest among them",a);
    return;
    bmax : printf("%d is the Greatest among them",b);
    return;
    cmax : printf("%d is the Greatest among them",c);
    return;
    
    



}