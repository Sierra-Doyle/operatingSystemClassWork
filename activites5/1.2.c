#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int
main(int argc, char *argv[]){
    // Try to get child to print before parent without wait
    int rc = fork();
    if (rc < 0) {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        // child (new process)
        printf("Hello\n");
    } else {
        // parent goes down this path (original process)
        sleep(1);
        printf("Goodbye!\n");
    }
    return 0;
}
