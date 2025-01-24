# include <stdio.h>

void circleArea(float radius){
    // Calculate the area using 3.14 as pi
    double area = (3.14) * (radius * radius);

    // Print the results
    printf("%.2f\n", area);
}

void area(float width, float height){
    // Calculate the conversion
    float area =  (float) width * height;

    // Print the results
    printf("%.2f\n", area);
}

void convert(float f){
    // Calculate the conversion
    float C = (float) (f - 32.0) * 5/9;

    // Print the results
    printf("%.2f\n", C);
}

void main(){   
    float F;

    // Scan in the temp in F
    printf("Enter in your temperature in F: ");
    scanf("%f", &F);

    // Call the convert function to convert to C
    convert(F);

    float width, height;

    // Scan in the width and height from user
    printf("Enter in the width: ");
    scanf("%f", &width);
    printf("Enter in the height: ");
    scanf("%f", &height);


    // Call the area function to calculate the area
    area(width, height);

    
    float radius;

    // Scan in the width and height from user
    printf("Enter in the radius: ");
    scanf("%f", &radius);

    // Call the area function to calculate the area
    circleArea(radius);

}