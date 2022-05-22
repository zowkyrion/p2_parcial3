/* Autor: Pasantes Bucio Jaime 28/04/2022
	Hacer un programa que pida el nombre de un archivo e imprima su contenido 
	en pantalla , Imprimiendo bloques de caracteres (buffer)
*/
#include<stdio.h>
#include "milibreria.h"
#define MAX_BUFFER 200

int main(){
	char nombre[50], buffer[MAX_BUFFER];
	FILE *f;
	int n=0;
	leers("Nombre del archivo:",nombre,50);
	//Abrir el archivo en modo lectura
	f=fopen(nombre,"r");
	//Verificar si se abrio correctamente el archivo
	if (f==NULL) {
		printf("Error al tratar de abrir el archivo\n");
	}
	else{
		//Proceso 
		while(fgets(buffer,MAX_BUFFER,f)!=NULL) {
			printf("%s",buffer);
			n++;
		}
		//Cerrar
		fclose(f);
		printf("\n---------> Para mostrar el archivo se hicieron %d accesos\n",n);
	}
		
	return 0;
}
