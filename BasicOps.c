#include<stdio.h>
int main()
{
    int a = 5, b = 10;
    printf("Sum: %d\n", a+b); //15
    printf("Product: %d\n", a*b); //50
    printf("Division: %d\n", a/b); //0
    printf("Division: %d\n", b/a); //2
    printf("Difference: %d\n", a-b); //-5
    
    printf("Modulo: %d\n", a%b); //5
    printf("Modulo: %d\n", b%a); //0

    printf("Bitwise AND: %d\n", a&b); //0101 & 1010 = 0000
    printf("Bitwise OR: %d\n", a|b); //1111
    printf("Bitwise XOR: %d\n", a^b); //1111
    printf("Negate: %d\n", ~b);


    printf("Post rement: %d\n", b++);
    printf("Pre Increment: %d\n", ++b);
    printf("Currnt Value: %d\n", b);
    printf("Post Decrement: %d\n", b--);
    printf("Pre Decrement: %d\n", --b);
    printf("Currnt Value: %d\n", b);

    b += 2
    printf("Currnt Value: %d\n", b);

    b *= 2
    printf("Currnt Value: %d\n", b);


    b /= 2
    printf("Currnt Value: %d\n", b);

    b &= 2
    printf("Currnt Value: %d\n", b);


    return 0;
}