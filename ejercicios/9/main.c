#include "utils.h"
#include <assert.h>

static int test1(void){
	char cadena[40] = "Esto es una prueba para contar";
	int res = cuenta_numero_letras(cadena,'a');
	assert(res == 2);		
}

static int test2(void){

}

static int test3(void){

}

void main (void){
	test1();
}
