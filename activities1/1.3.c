#include  <stdio.h>

int main(){
    // Create the variables
    int items = 50;
    float cost = 9.99;

    // Print the information
    printf("You bought %d items for $%.2f and spent $%.2f\n", items, cost, items*cost);
}