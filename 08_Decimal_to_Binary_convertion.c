#include<stdio.h>

int main(){
    int decimalNum;
    printf("Enter a Decimal number : ");
    scanf("%d", &decimalNum);

    int store[100];
    int reminder;
    int i;
    for (i = 0; decimalNum != 0; i++)
    {
        reminder = decimalNum % 2;
        decimalNum /= 2;
        store[i] = reminder;
    }

    printf("\nThe Binary form of this number is : ");
    for (int j = i-1; j >= 0; j--)
    {
        printf("%d ", store[j]);
    }    

    return 0;
}