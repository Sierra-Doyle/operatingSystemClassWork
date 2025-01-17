# include <stdio.h>
void main()
{   
    int youngest = 200;
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);

    for(int i = 0; i < length; i++){
        if(youngest > ages[i]){
            youngest = ages[i];
        }
    }

    printf("The youngest age of this list is %d\n", youngest);

}