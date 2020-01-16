// A simple example which is used to look at the generated assembly code and 
// how the dynamic linker loads the necessary addresses for the system calls 
// that me make in this simple program.
// 
// Example:
// $ gcc -E exec.c > exec-preprocessed.txt
// $ gcc -S exec.c
// $ grep -v cfi exec.s > exec-cfi-stripped.s
// $ cat exec-cfi-stripped.s
// $ gcc -g -o exec exec.c
// $ objdump -d exec > exec.disasm
//
// or
//
// $ gcc -g -save-temps exec.c -o exec
//
// or
// 
// $ find . -type f -not -name '*.c' | xargs rm
// $ gcc -save-temps exec.c -o exec32; mv exec.i exec32.i; mv exec.o exec32.o; mv exec.s exec32.s; grep -v cfi exec32.s > exec32-cfi-stripped.s; objdump -d exec32 > exec32.disasm
// $ gcc -save-temps exec.c -o exec64; mv exec.i exec64.i; mv exec.o exec64.o; mv exec.s exec64.s; grep -v cfi exec64.s > exec64-cfi-stripped.s; objdump -d exec64 > exec64.disasm

#include <unistd.h>
#include <stdio.h>

int main()
{
    // A pointer to an array of char * (i.e., strings). 
    char * args[] = {"/bin/ls", "-al", NULL};

    printf("pid: %d\n", getpid());

    //sleep(60);
    execv("/bin/ls", args);
}
