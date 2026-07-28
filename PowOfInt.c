//ques : calculating the power of an innteger.
#include<stdio.h>
int main()
{
    int base,exponent,power=1,expo;
    double powneg =1.0;
    printf("enter the base :\n");
    scanf("%d",&base);
    printf("enter the exponent :\n");
    scanf("%d",&exponent);
    expo=exponent;
    if(exponent>0){
        while(exponent !=0){
            power*=base;
            exponent--;
        }
        printf("%d to the power of %d is : %d\n",base,expo,power);
    }
    if(exponent<0) {
        while(exponent !=0){
            powneg*=(1.0/base);
            exponent++;
        }
        printf("%d to the power %d is : %lf\n",base,expo,powneg);
    }
    return 0;
}