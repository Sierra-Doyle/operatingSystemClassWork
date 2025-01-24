# include <stdio.h>
void main()
{   
    int temperature;
    printf("Type in a temperature: ");
    scanf("%d", &temperature);
    printf("%d\n", (temperature > 70 && temperature < 85));
}