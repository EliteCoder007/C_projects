#include<stdio.h>

int main(){
    int number;
    int isPrime = 1;
    printf("Enter a number which you want to check that it is prime or not: ");
    scanf("%d", &number);

    // *** Run in the linear time ***
    //      --> Less Efficient Algo.
    // for (int i = 2; i < number; i++)
    // {
    //     if (number % i  == 0)
    //     {
    //         isPrime = 0;
    //         break;
    //     }

    // }

    // if (isPrime == 1)
    // {
    //     printf("\n %d is a Prime number", number);
    // }

    // else
    // {
    //     printf("\n %d is not a Prime number", number);
    // }

    

    // *** Run in the constant time ***
    //      --> More Efficient Algo.
    //i <= (number)^(1/2);
    for (int i = 2; i*i <= number; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0;
        }

    }

    if (isPrime)
    {
        printf("\n %d is a Prime number", number);
    }

    else
    {
        printf("\n %d is not a Prime number", number);
    }

    return 0;
}
