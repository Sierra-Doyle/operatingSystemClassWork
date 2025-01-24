# include <stdio.h>
void main(){
    FILE *fptr;
    fptr = fopen("hello.txt", "w");
    if(fptr != NULL){
        fprintf(fptr, "Hello,\nHow are you?\nMy name is Sierra.\nWhat's your name?");
    }
    else{
        printf("Not able to create the file");
    }
    fclose(fptr);
}