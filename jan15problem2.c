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
    
    if(number % 2 == 0){
        printf("Your number is even\n");
    }
    else{
        printf("Your number is odd\n");
    }
    
    
}