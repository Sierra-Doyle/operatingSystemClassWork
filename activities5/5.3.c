#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int
main(int argc, char *argv[]) {
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
        int wc = wait(NULL);
        printf("Goodbye!\n");
        printf("Wait returns %d\n", wc);
        
    return 0;
}
}
