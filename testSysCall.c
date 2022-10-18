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

    exit();
}
