Readme2.txt

-----------hora.c--------

En el presente codigo se tiene un proceso padre y un
unico proceso hijo el cual muestra por pantalla que el
programa se esta ejecutando y muestra su pid, 
posteriomente muestra que esta listo para recibir 
señal y se queda iterando infinitamente mediante un for
 hasta hasta que su proceso es cerrado a traves de una señal.
En tanto el proceso padre, una vez que terminan sus 
procesos hijos, es el encargado de mostrar la fecha y la hora actual y este tiene funciones y declaraciones como:

-wait(NULL): La cual se refiere a que tiene que esperar a que se terminen los procesos hijos para que el termine.

-time_t tipo de dato capaz de representar tiempo retornado
por la funcion time().

-struct tm *timeinfo: en esta estructura se guardan datos 
de hora, dia, mes año, etc. 

-time(&rawtime): La funcion envia por referencia la 
direccion de memoria ingresada.

-timeinfo=localtime(&rawtime): localtime() solicita una 
parte en especifico de la informacion que sera mostrada
por pantalla.

-asctime(): Retorna un strig que representa el año, el dia y la hora de lo guardado en timeinfo.








