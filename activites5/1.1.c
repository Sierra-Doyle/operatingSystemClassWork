#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main(int argc, char *argv[]) {
    
    int x = 100;
    int rc = fork();
    if (rc < 0) {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        // child (new process)
        printf("hello, I am child and x is %d\n", x);
        x += 5;
        printf("hello, I am child the value of x is now: %d\n", x);

    } else {
        // parent goes down this path (original process)
        x += 10;
        printf("hello, I am parent and the value of x is now: %d\n", x);
    }
    return 0;
}
