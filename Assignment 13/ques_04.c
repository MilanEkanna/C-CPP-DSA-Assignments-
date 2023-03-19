// 4. Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>

void print(int);

int main(){
    int n;
    printf("Enter the number of first odd natural numbers in reverse yu want:\t");
    scanf("%d", &n);
    print(n);
    return 0;
}
void print(int x){
    if(x>=0){
        printf("%d ", 2*x+1);
        print(x-1);
    }
}