#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>  // because man waitpid() said we'd need this

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

    pid = 21/0;
    
    exit(21); // 
  }

  pid = rc;
  printf("%s my child has pid %d\n", indent, pid);
  printf("%s i'll wait for it to be done\n\n", indent);
  
  rc = waitpid(pid, &status, 0);
  printf("%s back from waitpid. rc = %d and status = %d\n", indent, rc, status);

  if (WIFEXITED(status)) {
    printf("WIFEXITED(%d) is true\n", status);
    printf("WEXITSTATUS(%d) == %d\n", status, WEXITSTATUS(status));
  } else {
    printf("WIFEXITED(%d) is FALSE.  Ha!\n", status);
  }

  return 0;

}

