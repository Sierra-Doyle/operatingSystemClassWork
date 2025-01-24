# include <stdio.h>
void main()
{   
    int myNumbers[4] = {25, 50, 75, 100};

    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    // Using ptr print out the different index values
    for(int i =0; i < length; i++){
        printf("%d\n", *(myNumbers + i));
    }
}