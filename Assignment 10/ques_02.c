// 2. Write a function to calculate simple interest. (TSRS)
//simple intrest  = (principle * rate * time)/100

#include<stdio.h>
float SimpleIntrest(float, float, float);
int main(){
    float p,r,t;
    printf("Kindly enter the following to get simple intrest:\n");
    printf("Enter the principle :\t");
    scanf("%f",&p);
    printf("Enter the rate :\t");
    scanf("%f",&r);
    printf("Enter the time:\t");
    scanf("%f",&t);
    SimpleIntrest(p,r,t);
    printf("Simple Intrest will be: %f", SimpleIntrest(p,r,t));

    return 0;
}
float SimpleIntrest(float principle, float rate, float time){
    return (principle*rate*time)/100;
}