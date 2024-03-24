#include<stdio.h>
int main()
{
    int arr[] = { 5, 1, 4, 2, 8 };
    int min = arr[0], max = arr[0];
    
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        
        if(min > arr[i]){
            min = arr[i];
        }
    }
    
    printf("%d %d",min, max);
    
    
    return 0;
}