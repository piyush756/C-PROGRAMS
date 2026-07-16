#include<stdio.h>
int main() 
{
    int a,b,choice;
    printf("1.ADD\n2.SUBTRACT\n3.MULTIPLICATION\n4.DIVISION\n5.EXIT\n");
    scanf("%d",&choice);
    printf("enter the first number : \n");
    scanf("%d",&a);
    printf("enter the second number : \n");
    scanf("%d",&b);
    printf("now enter the choice : ");
     if(choice==1){
        printf("%d+%d = %d\n",a,b,a+b);
    }
    else if(choice ==2) {
        printf("%d - %d = %d\n",a,b,a-b);
    }
    else if(choice ==3){
        printf("%d X %d = %d\n",a,b,a*b);
    }
    else if(choice == 4){
        printf("%d / %d = %d\n",a,b,a/b);
    }else {
        printf(" invalid input !!");
    }
    return 0;
}