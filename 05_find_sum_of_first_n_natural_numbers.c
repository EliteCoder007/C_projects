#include<stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter the last natural number you want the sum of : ");
    scanf("%d", &n);

    // *** Run in Linear Time ***
    //        -->Less effiecient Algo.
    // for (int i = 0; i < n; i++)
    // {
    //     sum += (i+1);
    // }


    // *** Run in Constant Time ***
    //        -->More Efficient Algo.
    sum = (n*(n+1))/2;
    printf("\nSum of the first %d natural number is : %d", n, sum);


    return 0;
}
