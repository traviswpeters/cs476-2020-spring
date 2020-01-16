#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *indent = "===============";

int
main(void) {

  int pid, rc, status;


  pid = getpid();

  printf("%s I'm process %d, and I'm about to fork\n", indent, pid);
  
  rc  = fork();

  if (0 == rc) {

    pid = getppid();
    printf("Hi, I'm the child, and my parent is %d\n", pid);
    
    // see man execlp.  program name, then list of arguments as char strings.
    // arg list must be terminated by a NULL
    // and the zeroth arg is (by convention) the name of the program

     rc = execlp("bogus", "bogus", "hello world", NULL);
     //rc = execlp("./hello", "hello",  NULL);

    printf("do you think this line will ever be printed?\n");
    exit(-1); // 
  }

  pid = rc;
  printf("%s my child has pid %d\n", indent, pid);
  printf("%s i'll wait for it to be done\n\n", indent);
  
  rc = waitpid(pid, &status, 0);
  printf("%s back from waitpid. rc = %d and status = %d\n", indent, rc, status);

  return 0;

}
