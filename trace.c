#include "types.h"
#include "user.h"
#include "date.h"
#include "syscall.h"

int stdout = 1;
int stderr = 2;

int
main(int argc, char *argv[])
{
  int pid = trace();
  // Imprima a data aqui
  printf(1," %d\n",pid);
  printf(1," %d\n",SYS_trace);
  exit();
}
