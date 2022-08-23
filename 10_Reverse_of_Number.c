#include<stdio.h>

int reverse(int num){
    int rev = 0;
    while (num != 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10; 
    }
    return rev;    
}

int main(){
    int num;
    printf("Enter A Number : ");
    scanf("%d", &num);

    int rev = reverse(num);
    printf("The Reverse of  %d is %d ", num,rev);
    return 0;
}