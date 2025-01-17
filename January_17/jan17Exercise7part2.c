# include <stdio.h>
void main()
{   
    int num1, num2;

    printf("Enter your first number: \n");
    scanf("%d", &num1);
    printf("Enter your second number: \n");
    scanf("%d", &num2);

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    printf("You numbers, %d and %d, added together equal: %d\n", *ptr1, *ptr2, *ptr1 + *ptr2);
    
}