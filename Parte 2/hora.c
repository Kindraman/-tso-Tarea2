#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <time.h> 


void sig_handler(int signo)
{
    if (signo == SIGUSR1){
        printf("received SIGUSR1\n");
        time_t rawtime;
        struct tm * timeinfo;
        time (&rawtime);
        timeinfo = localtime (&rawtime);
        printf ("Señal SIGUSR1 recibida: %s", asctime(timeinfo));

    }
}

int main(void)
{
    if (signal(SIGUSR1, sig_handler) == SIG_ERR)
        printf("\ncan't catch SIGUSR1\n");

    printf("Listo para recibir la señal SIGUSR1.\n");
    printf("Programa ahora ejecutandose. PID=%d\n",getpid());

    
    // A long long wait so that we can easily issue a signal to this process
    while(1){
        sleep(1);
    }
    return 0;
}