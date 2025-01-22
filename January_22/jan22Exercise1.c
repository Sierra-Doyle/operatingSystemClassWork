# include <stdio.h>
void main()
{   
    int myNumbers[4] = {25, 50, 75, 100};
    printf("%p\n", myNumbers);
    printf("%p\n", &myNumbers[0]);
    printf("%d\n", myNumbers[1]);

    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    // Using ptr print out the different index values
    for(int i =0; i < length; i++){
        printf("%d ", *(myNumbers + i));
    }
    printf("\n");
}