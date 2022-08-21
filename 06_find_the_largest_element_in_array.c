#include<stdio.h>

int arrMax(int array[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        
    }
    return max;
}

int arrMin(int array1[], int n)
{
    int min = array1[0];
    for (int i = 0; i < n; i++)
    {
        if (array1[i] <= min)
        {
            min = array1[i];
            //printf("array :%d \n", array1[i]);
        }
        
    }
    return min;
}

int main(){
    int arr[] = {150, 20, 300, 4, 510};

    //Finding Maximum element -->
    int max = arrMax(arr , 5);
    printf("The maximum element in this array is : %d\n", max);

    //Finding Minimum element -->
    int min = arrMin(arr, 5);
    printf("\nThe minimum element in this array is : %d\n", min);
    return 0;
}