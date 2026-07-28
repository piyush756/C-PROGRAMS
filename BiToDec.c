// ques : to convert the given binary number into the decimal.
#include<stdio.h>
int main()
{
    int binary,rem,decimal =0,weight=1;
    printf("enter the binary number :\n");
    scanf("%d",&binary);
    while(binary !=0){
        rem =binary%10;
        decimal=decimal + rem*weight;
        binary/=10;
        weight*=2;
    }
    printf("decimal form of binary %d is : %d\n",binary,decimal);
}