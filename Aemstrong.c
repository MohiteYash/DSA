// Armstrong no.
#include <stdio.h>

int main() {
    
    int a;
    printf("enter the number");
    scanf("%d",&a);
    
    int temp=a;
    int arm=0;
    
    while(temp!=0)
    {
        int rem=temp%10;
        arm+=rem*rem*rem;
        temp=temp/10;
    }
    printf("%d",arm);
    
    if(a==arm)
    {
        printf("no is arm");
        
    }
    
    else
    {
        printf("no is not arm");
    }
    return 0;
}