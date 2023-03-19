// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)

#include<stdio.h>
int check(int digit,int number);
int main(){
    int digit,number;
    printf("Enter the digit you want to check and the respective number:\t");
    scanf("%d %d", &digit, &number);
    if(check(digit,number)){
        printf("yes");
    }
    else printf("no");
    
    return 0;
}
int check(int dig, int num){
    while (num!=0) //We can write here only num also as because if the number become zero then the condition will become false automatically.
    {
        if(num % 10 == dig){
            return 1;
        }
        num = num/10;
    }
    
}