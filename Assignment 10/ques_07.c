// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

//Combinations() = n! / r!*(n-r)

#include<stdio.h>
int fact(int);
int combination(int, int);
int main(){

    int n,r;
    printf("Enter the values for n and r\n");
    scanf("%d %d",&n,&r);
    printf("Total number of combinations are: \n");
    combination(n,r);
    printf("%d ",combination(n,r));
    return 0;
}
int fact(int n){
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f*i;
    }
    return f;
}
int combination(int n, int r){
    return fact(n) / (fact(r) * fact(n-r));
}
