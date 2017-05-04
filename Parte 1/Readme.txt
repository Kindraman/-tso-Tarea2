--- --- --- --- Fracaso.c --- --- --- --- 

El presente codigo crea 10 procesos hijo mediante fork. Se Almacenan los pids en un arreglo de tipo pid_t, que es un tipo de dato standard para manejar PIDS.

En el for, la condición (pids[i] = fork()) < 0 pregunta si la asignación a sido realizada exitosamente, en caso de no lanza un mensaje de error.

Luego, cada proceso hijo es almacenado con valor '0' en el arreglo. Al continuar, se prepara una semilla unica para que cada hijo tenga un distinto valor random, tomando valores de rango 1-10.

La aleatoriedad de duración de los procesos hijos varia segun la cantidad de caracteres '+' mostrados en pantalla.

Al finalizar el hijo termina el proceso con un exit(0); que hace alusión al status del proceso hijo.

Al terminar el for, ya todos los hijos han sido inicializados y a la vez terminados en su ejecución, mientras el proceso padre continua por debajo, entrando al ciclo iterativo while, esperando la finalización de cada proceso hijo.

--- --- --- --- --- --- --- --- --- --- ---
