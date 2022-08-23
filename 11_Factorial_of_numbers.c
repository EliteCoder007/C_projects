#include<stdio.h>

// int factorialIterative(int num)
// {
//     int factorial = 1;
//     for (int i = num; i > 1; i--)
//     {
//         factorial *= i;
//     }
//     return factorial;
    
// }

int factorialRecursive(int num)
{
int factorial = 1;
if (num == 0 || num == 1)
{
    return 1;
}
else
{
    return num * factorialIterative(num - 1);
}

}

int main(){
    int num;
    printf("Enter a Number for Factorial calculation : ");
    scanf("%d", &num);

    // int factorial = factorialIterative(num);
    int factorial = factorialRecursive(num);
    printf("\nThe Factorial of %d is %d", num, factorial);
    return 0;
}