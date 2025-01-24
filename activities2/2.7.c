# include <stdio.h>
void main()
{   
    double doubleNum = 21.8888;
    int num = 25;
    char letter = 's';

    double* doubleptr = &doubleNum;
    int* numptr = &num;
    char* letterptr = &letter;

    printf("The address of my double is %p, the value stored in it is %f, and the size is %lu\n", &doubleNum, doubleNum, sizeof(doubleNum));
    printf("The address of my integer is %p, the value stored in it is %d, and the size is %lu\n", &num, num, sizeof(num));
    printf("The address of my character is %p, the value stored in it is %c, and the size is %lu\n", &letter, letter, sizeof(letter));
    printf("The address of my double pointer is %p, the value stored in the pointer is %p, and the size is %lu\n", &doubleptr, doubleptr, sizeof(doubleptr));
    printf("The address of my integer pointer is %p, the value stored in the pointer is %p, and the size is %lu\n", &numptr, numptr, sizeof(numptr));
    printf("The address of my character pointer is %p, the value stored in the pointer is %p, and the size is %lu\n", &letterptr, letterptr, sizeof(letterptr));

}