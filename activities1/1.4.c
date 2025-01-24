#include  <stdio.h>
int main() { 
    // Create the variables
    int maxScore = 500;
    int userScore = 423;

    // Calculate the percentage
    float scorePercent = ((float) 423 / 500) * 100;

    // Print the info
    printf("%.2f percent\n", scorePercent);
}