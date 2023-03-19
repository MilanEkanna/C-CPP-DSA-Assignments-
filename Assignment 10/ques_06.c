// 6. Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>

int fact(int);

int main(){
    int n, fact1 = 1;
    printf("\nEnnter the number you want the factorial:\t");
    scanf("%d", &n);
    printf("\nFactorial of %d is",n);
    fact(n);
    printf(" %d\n ", fact(n));
    return 0;
}
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    else return n * fact(n-1);
}