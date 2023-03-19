// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

// Number of arrangements are the permutations i.e. = factorial(n)/factorial(r);

#include <stdio.h> 

int fact(int);
int arrangements(int, int);

int main()
{
    int n, r;
    printf("\nEnter the value for n and r:\t");
    scanf("%d%d", &n, &r);
    arrangements(n, r);
    printf("\nThe total number of arrangements possible are:\t %d", arrangements(n,r));
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
int arrangements(int n, int r){

    return fact (n)/fact(n-r);

}