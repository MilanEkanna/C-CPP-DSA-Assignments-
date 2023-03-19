// 1. Write a recursive function to print first N natural numbers

#include<stdio.h>

void print(int);

int main(){
    int n;
    printf("How many first natural numbers you want to print\t");
    scanf("%d", &n);
    print(n);
    return 0;
}
void print(int x){
    if (x>0)
    {
        print(x-1);
        printf("%d ", x);
    }
    
}