//Print the following star patterns. The number of lines in the pattern should be equal to the value entered by the user.The pattern looks like this for n = 4

// *
// **
// ***
// ****

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}