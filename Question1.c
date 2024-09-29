#include<stdio.h>
#include<math.h>
#define PI 3.141

void main(){
   float angle;
   int n;
   int a;
   int b;
   printf("Enter any angle : ");
   scanf("%d",&angle);

   printf("Enter any number n : ");
   scanf("%d",&n);

   printf("Enter any 2 numbers : ");
   scanf("%d %d",&a,&b);

   float sine = sin((angle*PI)/180);
   printf("The sin of that angle is : %.3f\n",sine);

   float cose = cos((angle*PI)/180);
   printf("The cos of that angle is : %.3f\n",cose);

   float loge = log(n);
   printf("The log of the number n is : %.3f\n",loge);

   float squareroot = sqrt(n);
   printf("The square root of the number n is : %3f\n",squareroot);

   int power = pow(a,b);
   printf("The value of %d raised to the power %d is %d",a,b,power);

}