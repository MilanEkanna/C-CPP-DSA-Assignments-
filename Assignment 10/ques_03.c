// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include<stdio.h>
int evenorodd(int num);
int main(){
    int n;
    printf("\n1 denotes even and 0 denotes odd\n\n");
    printf("Enter a number:\t");
    scanf("%d", &n);
    evenorodd(n);
    printf("Your return is %d : ",evenorodd(n));
    return 0;
}
int evenorodd(int num){
    if (num % 2 == 0)
    {
        return 1;
    }
    else return 0;
}