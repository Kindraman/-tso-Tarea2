/* localtime example */
#include <stdio.h>      /* puts, printf */
#include <time.h>       /* time_t, struct tm, time, localtime */
#include <stdlib.h>
#include <unistd.h>
int main ()
{

  pid_t pid = fork();

  if(pid){ 
  	//Padre
  	wait(NULL);
  	time_t rawtime;
  	struct tm * timeinfo;
  	time (&rawtime);
  	timeinfo = localtime (&rawtime);
  	printf ("Señal SIGUSR1 recibida: %s", asctime(timeinfo));
  	

  } else {
  	printf("Programa ahora ejecutandose. PID=%d\n",getpid());
  	printf("Listo para recibir la señal SIGUSR1.");

  	for(;;);
  }
return 0;
}