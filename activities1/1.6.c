# include <stdio.h>
void main()
{   
    int number;
    printf("Type in a number: ");
    scanf("%d", &number);
    
    if(number > 0){
        printf("Your number is positive\n");
    }
    else if (number < 0){
        printf("Your number is negative\n");
    }
    else{
        printf("Your number is 0\n");
    }
}