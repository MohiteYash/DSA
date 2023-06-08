// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define max 2

struct student
{
    int rollno,i,j;
    char name [20];
    float marks;
}s[max];

  
    
    void create()
    {
        
        for(int i=0; i<max ; i++)
        {
        printf("enter roll number of student");
        scanf("%d",&s[i].rollno);
        printf("enter name of student");
        scanf("%s",&s[i].name);
        printf("enter marks of student");
        scanf("%f",&s[i].marks);
        }
        
    }
    void display()
    {
        for(int i=0; i<max ; i++){
        printf("Roll number of student is:%d\n",s[i].rollno);
        printf("name of student is:%s\n",s[i].name); 
        printf("marks of student is:%f\n",s[i].marks);
        }
    }
    
    void search()
    {
        int rollnumber;
        int flag=0;
        printf("enter the roll number to search");
        scanf("%d",&rollnumber);
        
        for(int i=0;i<max;i++)
        {
            if (rollnumber==s[i].rollno)
            {
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("roll no is found");
            
        }
        else{
            printf("roll no is not found");
        }
    }
    
    void swap(int*x,int*y)
    {
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
        
    }
    void sort()
    {
        printf("without sort\n");
        display();
        for(int i=0 ;i<max-1 ;i++)
        {
            for(int i=0;i<max-i-1;i++)
            {
                if(s[i].rollno>s[i+1].rollno)
                {
                    swap(&s[i].rollno , &s[i+1].rollno);
                    
                }
                printf("with sort\n");
                display();
            }
        }
    }
    
    int main(){
        
        int ch;
        do{
            printf("enter your choice 1.create\n 2.display\n 3.search\n 4.sort\n 5.exit\n");
            scanf("%d",&ch);
            
            switch(ch)
            {
            case 1:
             create();
             break;
            case 2:
             display();
             break;
            case 3 :
             search();
             break;
            case 4 :
              sort();
              break;
            case 5 :
              break;
            default:
            printf("invalid number");
            
            }
        }while(ch!=5);
    return 0;
    }