// 7. Write a recursive function to print squares of first N natural numbers


#include<stdio.h>

void print(int);

int main(){
    int n;
    printf("Enter the number of first even natural numbers in reverse yu want:\t");
    scanf("%d", &n);
    print(n);
    return 0;
}
void print(int x){
    if(x>0){
        print(x-1);
        printf("%d ", x*x);
    }
}