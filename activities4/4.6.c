#include <stdio.h>
#include <stdlib.h>

void main(){
    int numStudents;
    printf("How many students do you have? ");
    scanf("%d", &numStudents); 

    // Allocate memory to store scores for each student
    int *scores = (int *)calloc(numStudents, sizeof(int));  

    for (int i = 0; i < numStudents; i++) {
        printf("Enter score for student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    FILE *file = fopen("scores.txt", "w");

    if (file != NULL) {
        // Write scores in reversed order to the file
        for (int i = numStudents - 1; i >= 0; i--) {
            fprintf(file, "%d\n", scores[i]);
        }

        fclose(file);
        free(scores);
        printf("Scores have been written to the file in reversed order.\n");
    }
    
    else{
        printf("Failed to open the file.\n");
        free(scores); 
    }
}