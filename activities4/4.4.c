# include <stdio.h>
# include <stdlib.h>

void main(){
    FILE *fptr;
    fptr = fopen("dataToBeWritten.txt", "r");
    if(fptr != NULL){
        // Read and print with fgets()
        char myString[100];
        printf("Information read with fgets(): \n");
        while(fgets(myString, 100, fptr)){
            printf("%s", myString);
        }
        printf("\n");

        // Read and print with fread() and fseek()
        printf("Information read with fread(): \n");
        fseek(fptr, 0, SEEK_SET);  
        fseek(fptr, 0, SEEK_END);  
        long fileSize = ftell(fptr); 
        rewind(fptr);

        char *buffer = (char *)malloc(fileSize + 1); 
        size_t bytesRead = fread(buffer, sizeof(char), fileSize, fptr);  
        buffer[bytesRead] = '\0'; 
        printf("%s\n", buffer);
        free(buffer); 

    }
    else{
        printf("Not able to open the file");
    }
    fclose(fptr);
}
