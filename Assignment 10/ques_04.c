// 4. Write a function to print first N natural numbers (TSRN)

#include<stdio.h>

void natural_number(int n);

int main(){
    int n;
    printf("Enter to how many natural numbers you want:\t");
    scanf("%d", &n);
    printf("first %d natural numbers will be:\n", n);
    natural_number(n);
    return 0;
}
void natural_number(int n){
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    
}