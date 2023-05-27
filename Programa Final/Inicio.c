#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main(){
    int seleccion;
    char aux0, printnombre[100];
    int numsuarios=0;

    usuario datos[100];

    do{
    printf("\nBienvenido a la Base de Datos!\nElija una de las opciones siguientes:\n\n");
    printf("\t1. Iniciar Sesion.\n\t2. Registrarse.\n\t3. Salir.\n");
    scanf("%i", &seleccion);
    system("cls");
    }

    while (seleccion != 1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5);
        switch(seleccion){
             case 1:
                if(reconocerfichero(datos,&numsuarios)==0){
                     return 0; //Se acaba el Programa
                }


                else{
                    iniciarsesion(printnombre,&numsuarios,datos);

                    fflush(stdin);
                    printf("\n\t\t(Pulse cualquier tecla para ir a la pantalla de Inicio de la Base de Datos)");
                    scanf("%c", &aux0); //Esperamos a que el usuario confirme la lectura anterior. Confirma con cualquier tecla.
                    system("cls");

                    menuPrincipal();
                }

             break;


             case 2:
                if(reconocerfichero(datos,&numsuarios)==0){
                    return 0; //Se acaba el Programa
                }

                else{
                    registrar(printnombre,&numsuarios,datos);

                    printf("\n\t\t(Usted debe volver a ejecutar el programa para guardar sus cambios)\n\n");

                    return 0;

                }

             break;



             case 3:
                printf("\n\tVuelva Pronto!\n");
                return 0;
             break;

        } //Cierre Switch Seleccion

    return 0;
}

