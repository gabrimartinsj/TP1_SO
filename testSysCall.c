#include "types.h"
#include "stat.h"
#include "user.h"

// Programa a nível de usário para testar o comportamento
// da nova chamada trace sobre outras chamadas do sistema

int main(void){
    trace(1);
    getpid();
    wait();

    trace(0);
    getpid();

    trace(1);
    wait();

    int cs1, cs2;
    cs1 = cs();
    cs2 = cs();
    sleep(4);
    printf(1, "context switch counts = %d, %d\n", cs1, cs2);


    exit();
}
