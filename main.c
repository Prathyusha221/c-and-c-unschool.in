#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d\nDifference of %d and %d is %d\nMultiplication of %d and %d is %d\nDivision of %d by %d is %d\nRemainder for division of %d by %d is %d", a, b, a+b, a, b, a-b, a, b, a*b, a, b, a/b, a, b, a%b);
    return 0;
}
