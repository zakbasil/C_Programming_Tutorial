#include<stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {1,2,3,4,4,6,7 };
    int k = 3;
    int unfairness;
    int size;
    unfairness = arr[1] - arr[0];
    
    size = sizeof(arr)/sizeof(int);
    
    for(int i=0;i<size-k;i++){
        if(unfairness > abs(arr[i+k-1]-arr[i]) ){
            unfairness = abs(arr[i+k-1]-arr[i]);
        }
    }    
    printf("%d",unfairness);
    return 0;
}