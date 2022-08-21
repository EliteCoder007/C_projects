#include<stdio.h>

int main(){
    int decimalNum;
    printf("Enter a Decimal Number : ");
    scanf("%d", &decimalNum);

    int reminder;
    int store[100];
    int i;
    for (i = 0; decimalNum != 0; i++)
    {
        reminder = decimalNum % 8;
        decimalNum /= 8;
        store[i] = reminder;
    }

    printf("The Octal form of this number is : ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", store[j]);
    }
    
    
    return 0;
}