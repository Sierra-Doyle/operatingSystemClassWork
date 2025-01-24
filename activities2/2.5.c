# include <stdio.h>
void main()
{   
    float averageAge = 0.0;
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);

    for(int i = 0; i < length; i++){
        averageAge += ages[i];
    }

    averageAge = (float)averageAge / length;

    printf("The average age of this list is %.2f\n", averageAge);

}