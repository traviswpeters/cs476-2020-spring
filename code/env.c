#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

extern char **environ;

char cstring[100];

int main(int argc, char *argv[], char* envp[]) {

    int i;

    // iterate over ARG passed to main() for environment
    i = 0;
    while (envp[i] != NULL) {
        printf("%s\n", envp[i++]);
    }

    // iterate over GLOBAL VARIABLE for environment
    i = 0;
    while (environ[i] != NULL) {
        printf("%s\n", environ[i++]);
    }

    return 42;
}
