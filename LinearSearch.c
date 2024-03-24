#include<stdio.h>

char* linearSearch(int arr[], int n, int searchElement){
    for(int i =0; i<n;i++){
        if(arr[i]==searchElement){
            return("Element found");
        }
    }
    return("Element not found");
}
int main()
{
    int arr[] = { 5, 1, 4, 2, 8 };
    int searchElement = 5;
    int N = sizeof(arr) / sizeof(arr[0]);
    printf("%s\n",linearSearch(arr, N,searchElement));
    return 0;
}