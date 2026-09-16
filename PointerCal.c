#include<stdio.h>
#define OPS 4
float sum(float a,float b){
    return a+b;
}
float sub(float a,float b){
    return a-b;
}
float mul(float a,float b){
    return a*b;
}
float div(float a,float b){
    return a/b;
}
int main(){
    float(*cal[OPS]) (float,float) = {sum,sub,mul,div};
    int choice;
    float a,b;
    printf("Enter your Operation :\n0.Add\n1.sub\n2.mul\n3.div\n");
    scanf("%d",&choice);
    printf("enter two numbers :\n");
    scanf("%f %f",&a,&b);
    printf("%f\n",cal[choice](a,b));
    return 0;
}
