# include <stdio.h>
void main(){
    FILE *fptr;
    fptr = fopen("hello.txt", "r");
    char myString[100];

    if(fptr != NULL){
        while(fgets(myString, 100, fptr)){
            printf("%s", myString);
        }
    printf("\n");
    }
    else{
        printf("Not able to open the file");
    }
    fclose(fptr);
}