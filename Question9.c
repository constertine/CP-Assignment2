#include<stdio.h>

void main(){
    int a,b,c,d,e;
    printf("Enter the 1st number :");
    scanf("%d",&a);
    printf("Enter the 2nd number :");
    scanf("%d",&b);
    printf("Enter the 3rd number :");
    scanf("%d",&c);
    printf("Enter the 4th number :");
    scanf("%d",&d);
    printf("Enter the 5th number :");
    scanf("%d",&e);
    float average = (float)(a+b+c+d+e)/5;
    printf("The average of the numbers is : %f\n",average);
    if(a>b && a>c && a>d && a>e){
        printf("%d is Greatest of them\n",a);
    }
    if(b>a && b>c && b>d && b>e){
        printf("%d is Greatest of them\n",b);
    }
    if(c>b && c>a && c>d && c>e){
        printf("%d is Greatest of them\n",c);
    }
    if(d>b && d>c && d>a && d>e){
        printf("%d is Greatest of them\n",d);
    }
    if(e>b && e>c && e>d && e>a){
        printf("%d is Greatest of them\n",e);
    }
    
    
    if(a<b && a<c && a<d && a<e){
        printf("%d is Minimum of them\n",a);
    }
    if(b<a && b<c && b<d && b<e){
        printf("%d is Minimum  of them\n",b);
    }
    if(c<b && c<a && c<d && c<e){
        printf("%d is Minimum  of them\n",c);
    }
    if(d<b && d<c && d<a && d<e){
        printf("%d is Minimum  of them\n",d);
    }
    if(e<b && e<c && e<d && e<a){
        printf("%d is Minimum  of them\n",e);
    }
    







}