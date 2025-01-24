#include  <stdio.h>

int main(){
    float width, length;

    // Get the width and length from the user
    printf("Enter the width of your rectangle: ");
    scanf("%f", &width);
    printf("Enter the length of your rectangle: ");
    scanf("%f", &length);

    // Print the area
    printf("The area of the rectance is: %0.2f\n", width*length);
}