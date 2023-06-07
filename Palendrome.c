// Palendrome
#include <stdio.h>

int main() {
   int a;
   printf("Entre the number");
   scanf("%d",&a);
   int rev=0;
    while(a>0)
    {int rem = a%10;
        rev= rev*10+rem;
        a=a/10;
    }
    printf("%d",rev);
    return 0;
}