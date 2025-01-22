# include <stdio.h>

void area(float width, float height){
    // Calculate the conversion
    float area =  (float) width * height;

    // Print the results
    printf("%.2f\n", area);
}

void main()
{   
    float width, height;

    // Scan in the width and height from user
    printf("Enter in the width: ");
    scanf("%f", &width);
    printf("Enter in the height: ");
    scanf("%f", &height);


    // Call the area function to calculate the area
    area(width, height);

}


