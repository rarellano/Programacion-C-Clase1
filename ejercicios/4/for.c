/* Realizar el ejercicio que hemos realizado con while pero usando
 * el bucle for
 */


/* Bibliotecas a incluir */
#include <stdio.h>

void main()
{
	/* Declaración de variables */
        int len = 0;
        char cadena[10] = "hola";

	/* Código usando condicional while */
        for(len=0; cadena[len] != '\0'; len++);
                printf("%d\n",len);
}
