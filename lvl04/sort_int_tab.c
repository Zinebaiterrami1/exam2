#include <stdio.h>

void ft_swap(int *x, int *y)
{
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}

void sort_int_tab(int *tab, unsigned int size)
{
    int i;
    int j;
    int swapped;

    i = 0;
    while(i < size - 1)
    {
        swapped = 0;
        j = 0;
        while(j < size - i - 1)
        {
            if(tab[j] > tab[j + 1])
            {
                ft_swap(&tab[j], &tab[j + 1]);
                swapped = 1;
            }
            j++;
        }
        i++;
        if(swapped == 0)
            break;
    }
}

// Function to print an array
void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main(){
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    //int n = sizeof(arr) / sizeof(arr[0]);
    sort_int_tab(arr, 7);
    printf("Sorted array: \n");
    printArray(arr, 7);
    return 0;
}