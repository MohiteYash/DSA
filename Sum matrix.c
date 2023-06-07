// sum of matrix
#include <stdio.h>

int main() {
    int r , c ,a[10][10],b[10][10],sum[10][10] , i ,j;
    
    printf("enter the number");
    scanf("%d",&r);
    printf("enter the number");
    scanf("%d",&c);
    
    
    printf("entre number of 1 matrix:\n");
    for(i=0 ; i< r; ++i)
    for(j=0 ; j<c ; ++j){
        printf(" entre the element a%d%d", i+1 , j+1);
        scanf("%d",&a[i][j]);
    }
    
     printf("entre number of 2 matrix:\n");
    for(i=0 ; i< r; ++i)
    for(j=0 ; j<c ; ++j){
        printf(" entre the element b%d%d", i+1 , j+1);
        scanf("%d",&b[i][j]);
        
    }
    
    for(i=0 ; i< r; ++i)
    for(j=0 ; j<c ; ++j){
        
        sum[i][j] = a[i][j] + b[i][j];
    }
            
      printf("\n sum of two matrix: \n");
      for(i=0 ; i< r; ++i)
      for(j=0 ; j<c ; ++j)
      {
          printf("%d",sum[i][j]);
      }
     
      }
    
    
    return 0;
}