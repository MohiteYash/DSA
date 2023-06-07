// sum of digits
#include <stdio.h>

int main() {
  int a;
   
   printf("enter the number");
   scanf("%d",&a);
   
   int sum=0;
   
   while(a!=0)
   {
       int rem=a%10;
       sum+=rem;
       a=a/10;
       
   }

printf("sum of digits:%d",sum);
   
    return 0;
}
