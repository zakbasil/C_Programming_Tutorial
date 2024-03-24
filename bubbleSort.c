#include<stdio.h>
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    printf("\tSwap\t");
    arr[i] = arr[j];
    arr[j] = temp;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            printf("\ni:%d\tj:%d\tarr[%d]:%d\tarr[%d]:%d",i,j,j,arr[j],j+1,arr[j+1]);
            if (arr[j] > arr[j + 1]){
                swap(arr, j, j + 1);
                printArray(arr,n);
            }
        }
    }
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = { 5, 1, 4, 2, 8 };
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    printf("Sorted array: ");
    printArray(arr, N);
    return 0;
}