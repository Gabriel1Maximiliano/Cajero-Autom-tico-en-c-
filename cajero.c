#include <stdio.h>
#include <stdlib.h>

/* Simular cajero automático con n saldo de 100 usd. Debemos utilizar funciones con paramettros 
1_ Consultar saldo 
2_ Depositar dinero 
3_ Retirar dinero 
4_ salir */

// variable global 
int saldo_actual = 100;

// prototipos de funcion

void menu();
void seleccion();
void retirar( );
void cargar(int cantidad);
void consultar();


int main(int argc, char *argv[]) {
	
	int cantidad, opcion;
	
	menu();
	seleccion();
	//retirar(cantidad);
	
	
	
	
	return 0;
}

void menu ()
{   printf("\n");
	printf("------------------------------------------------\n");
	printf("Bienvenidos al cajero automatico de Bisa Moreno\n");
	printf("------------------------------------------------\n");
	printf("\n");
	printf("1_ Consultar saldo\n");
	printf("2_ Retirar saldo\n");
	printf("3_ Salir");
	printf("\n");
	printf("\n");
	printf("------------------------------------------------\n");
	
}
void seleccion()
{
	int opcion;
	scanf("%d", &opcion);
	
	switch(opcion)
	{
		case 1: consultar();
		break;
		case 2: retirar();
		break;
		case 3: 
		printf("------------------------------------------------\n");
        printf("\n");
		printf("Mucahs gracias por usar nuestros servicios\n");
		printf("\n");
	    printf("------------------------------------------------\n");
		break;
	}
}
void consultar()
{
	printf(" Su saldo actual es %d\n", saldo_actual);
}
void retirar()
{
	int retira;
    printf("------------------------------------------------\n");
    printf("\n");
	printf("Cuanto dinero desea retiarar\n");
	printf("\n");
	printf("------------------------------------------------\n");
	scanf("%d", &retira);
	
	if(saldo_actual > 0 && retira < saldo_actual){
	
	saldo_actual -= retira;
	printf("Su saldo actual es de %d", saldo_actual);
}
else {
	printf("\n");
	printf("------------------------------------------------\n");
	printf("\n");
    printf("Saldo insuficiente\n");
    printf("\n");
    printf("------------------------------------------------\n");}

}
