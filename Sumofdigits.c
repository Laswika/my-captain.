#include <stdio.h>

/* Function declaration */
int sumOfDigits(int num);


int main()
{
    int num, sum;
    
    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);
    
    sum = sumOfDigits(num);
    
    printf("Sum of digits of %d = %d", num, sum);
    
    return 0;
}
