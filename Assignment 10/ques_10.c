// Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include<stdio.h>
void print_prime_factors(int number);
int main(){
    int num;
    printf("Enter the number you want the prime factors:\t");
    scanf("%d", &num);
    print_prime_factors(num);
    return 0;
}

void print_prime_factors(int number){
    int i = 2;
    for (int i = 2; i <= number; i++)
    {
        while (number%i ==0)
        {
            printf("%d ",i);
            number = number/i;
        }
        
    }
    
}