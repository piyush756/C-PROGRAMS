#include<stdio.h>
#include<math.h>
int main()
{
    int num,sqroot,count;
    printf("enter the positive inteeger :\n");
    scanf("%d",&num);
    sqroot = ceil(sqrt(num));
    for(int i=2;i<=sqroot;i++){
        if(num%i==0){
            count=1;
            break;
        }
    }if((count!=1 && num>1) || num==2 || num==3){
        printf("%d is a prime number\n",num);
    }else {
        printf("%d is not a prime number\n",num);
    }
    return 0;
}