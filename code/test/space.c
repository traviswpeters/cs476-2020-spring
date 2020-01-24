// s.w. smith
// address space demo
#include <stdio.h>
#include <stdlib.h>



int global;

int
main(void) {

  int   pid;
  char *cp;

  if (4!=sizeof(cp)) {
    printf("oops, you need to compile this with -m32\n");
    return -1;
  }

  
  pid = getpid();
  cp  = (char *)malloc(24);

  printf("Hi, I'm process %d\n", pid);

  printf("A local variable has address  0x%08x\n", (unsigned int) &pid);
  printf("A global variable has address 0x%08x\n", (unsigned int) &global);
  printf("Malloc just gave me address   0x%08x\n", (unsigned int)  cp);
  printf("main() lives at               0x%08x\n", (unsigned int) &main);


  printf("Now I'm going to loop...");
  fflush(stdout);
  while (1) {
    sleep(10);
    printf(".");
    fflush(stdout);
  }
  
  return 0; // not reached

}
