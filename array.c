#include<stdio.h>

int main()
{
    int arr1[] = { 5, 1, 4, 2, 8 };
    int arr2[10] = { 5, 1, 4, 2, 8 };
    char arr3[] = "zakbasil";

    int n = sizeof(arr1)/sizeof(int);
    printf("Size of arr1 %d Bytes\n",sizeof(arr1));
    printf("Size of arr1 %d Bytes\n",sizeof(arr1));
    printf("Size of int %d Bytes\n",sizeof(int));
    printf("Size of float %d Bytes\n",sizeof(float));
    printf("Size of long %d Bytes\n",sizeof(long));
    printf("Size of char %d Bytes\n",sizeof(char));
    printf("Size of bool %d Bytes\n",sizeof(bool));



    printf("%d",arr1[0]); //5
    printf("%d",arr1[1]); //1
    printf("%d",arr1[2]); //4

    printf("%d",arr2[9]); //Garbage Value

    printf("%s",arr3); //zakbasil
    printf("%c",arr3[0]); //z
    printf("%c",arr3[1]); //a


    int n = sizeof(arr1)/sizeof(int);
    printf("Length of arr1: %d Elements\n",n);//5
    printf("Elements of arr1: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr1[i]);
    }
    
        
    n = sizeof(arr2)/sizeof(int);
    printf("\nLength of arr2: %d Elements\n",n);//10
    printf("Elements of arr2: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr2[i]);
    }
    
    n = sizeof(arr3)/sizeof(char); // '\0'
    printf("\nLength of arr3: %d Elements\n",n);//8
    printf("Elements of arr3: ");
    for(int i=0; i<n-1; i++){
        printf("%c ",arr3[i]);
    }
    
    printf("\nElements of arr3: ");
    for(int i=0; arr3[i]!='\0'; i++){
        printf("%c ",arr3[i]);
    }



    return 0;
}