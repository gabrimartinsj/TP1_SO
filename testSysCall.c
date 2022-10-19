#include "types.h"
#include "stat.h"
#include "user.h"

//programa de usuário para testar o trace

int main(void){
    trace(1);

    getpid();
    getpid();

    trace(0);

    getpid();

    trace(1);
    //wait();

    exit();
}
