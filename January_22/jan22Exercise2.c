# include <stdio.h>

void convert(float f){
    // Calculate the conversion
    float C = (float) (f - 32.0) * 5/9;

    // Print the results
    printf("%.2f\n", C);
}

void main()
{   
    float F;

    // Scan in the temp in F
    printf("Enter in your temperature in F: ");
    scanf("%f", &F);

    // Call the convert function to convert to C
    convert(F);

}


