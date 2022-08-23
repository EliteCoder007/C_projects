#include<stdio.h>

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
    
}

int main(){
    int n1, n2;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);
    
    printf("The Prime Numbers between %d and %d is : ", n1, n2);
    int count = 0;
    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i))
        {
            printf("%d " , i);
            count++;
        }
        
    }
    printf("\nAnd there are %d Prime Numbers between %d and %d", count, n1, n2);
    

    return 0;
}