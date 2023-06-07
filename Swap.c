// Swap no.
#include <stdio.h>

int main() {
    int a;
    int b;
    
    printf("enter the number:");
    scanf("%d",&a);
    printf("entre the number 2:");
    scanf("%d",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("%d%d",a,b);
    
    

    return 0;
}