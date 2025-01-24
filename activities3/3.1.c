# include <stdio.h>
void main()
{   
    int myNumbers[4] = {25, 50, 75, 100};

    // Use pointer to print out second element
    printf("%d\n", *(myNumbers + 1));
}