#include "types.h"
#include "user.h"
#include "date.h"
#include "syscall.h"

int
main(int argc, char *argv[])
{
  int pid = trace();

  printf(1," %d\n", pid);
  printf(1," %d\n", SYS_trace);
  
  exit();
}
