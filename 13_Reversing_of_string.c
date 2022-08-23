#include<stdio.h>

int main(){
    char string[100];
    printf("Enter a string : ");
    scanf("%s", string);

    //Length of Function:
    int len = 0;
    while (string[len] != '\0')
    {
        len++;
    }
    printf("\nThe length of the string is %d", len);

    //Reversing String: 
    char swap;
    for (int i = 0; i < (len - 1) / 2 ; i++)
    {
        swap = string[i];
        string[i] = string[len - 1 - i];
        string[len - 1 - i] = swap;
    }
    printf("\nThe Reverse of the string is %s.", string);
    return 0;
}