#include<stdio.h>
int main ()  {
 int a , b ,c ; 
 printf("First the value of a is \n");
 scanf("%d",&a);
 printf("First the value of b is  \n");
 scanf("%d",&b);\
 c = a ;
 a = b ; 
 b = c ;
 printf("The value of a is = %d\n ",a );
 printf("The value of b is  = %d" , b);
