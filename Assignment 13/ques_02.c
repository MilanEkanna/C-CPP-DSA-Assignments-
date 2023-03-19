// 2. Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>

void print(int);

int main(){
    int n;
    printf("To How many first natural numbers you want to print:\t");
    scanf("%d", &n);
    print(n);
    return 0;
}
void print(int x){
    if(x>0){
        printf("%d ", x);
        print(x-1);
    }
}