# include <stdio.h>

void area(float radius){
    // Calculate the area using 3.14 as pi
    double area = (3.14) * (radius * radius);

    // Print the results
    printf("%.2f\n", area);
}

void main()
{   
    float radius;

    // Scan in the width and height from user
    printf("Enter in the radius: ");
    scanf("%f", &radius);

    // Call the area function to calculate the area
    area(radius);

}


