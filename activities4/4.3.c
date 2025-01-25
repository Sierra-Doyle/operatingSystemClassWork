# include <stdio.h>
# include <string.h>

void main(){
    // Create the variable that will be written
    char dataToBeWritten[] = "Hello, this should be written in the file.";

    FILE *fptr;
    fptr = fopen("dataToBeWritten.txt", "w");

    if(fptr != NULL){
        fprintf(fptr, "Using fprintf: %s\n", dataToBeWritten);

        // Write using fputs()
        fputs("Using fputs: ", fptr);
        fputs(dataToBeWritten, fptr);
        fputs("\n", fptr); 

        // Write using fwrite()
        fwrite("Using fwrite: ", sizeof(char), 14, fptr); 
        fwrite(dataToBeWritten, sizeof(char), strlen(dataToBeWritten), fptr);
        fwrite("\n", sizeof(char), 1, fptr);

        printf("Data successfully written to the file.\n"); 
    }
    else{
        printf("Not able to create the file");
    }
    fclose(fptr);
}