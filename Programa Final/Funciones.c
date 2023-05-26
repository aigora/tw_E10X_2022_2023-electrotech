#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

typedef struct
{
    float m, a;
}fecha;

typedef struct
{
    char tipo[20];
    float datos[23]; 
}Energia;  

void menuPrincipal(){
    int seleccion;

    do{
    printf("\nBienvenido a la Base de Datos!\nElija una de las opciones siguientes:\n\n");
    printf("\t1. Tipos Energias Anuales 2021-2022.\n\t2. Tipos Energias Anuales 2019-2020.\n\t3. Tipos Energias Anuales 2017-2018.\n\t4. Seleccion Aleatoria Anual y de Energia.\n\t5. Comparacion de Datos.\n\t6. Salir de la Base de Datos.\n");
    scanf("%i", &seleccion);
    system("cls");
    }

    while (seleccion != 1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5);
        switch(seleccion){
            case 1:
                printEnergias();
             break;


             case 2:
                printEnergias2019_2020();
             break;


             case 3:
                printEnergias2017_2018();
             break;


             case 4:
                printAleatorioAnualidad();
             break;

             case 5:
                printComparacionDatos();
             break;

             case 6:
                printf("\n\tVuelva Pronto!\n");
                exit(0);
             break;

        }  

}  



void printEnergias(){
    int modalidad;

    do{
    printf("\nDesea continuar con el acceso a distintas Energias:\n\n");
    printf("\t1. Continuar\n\t2. Atras\n");
    scanf("%i", &modalidad);
    fflush(stdin);
    system("cls");
    }

    while (modalidad !=  1 && modalidad != 2);
        switch (modalidad){
            case 1:
                printTiposEnergias();
            break;

            case 2:
            system("cls");
            menuPrincipal();

            break;
        }

}



void printTiposEnergias(){
    int seleccion;

    do{
    printf("\nSeleccione el tipo de Energia de la que desee obtener mayor informacion:\n\n");
    printf("\t1. No Renovable\n\t2. Renovable\n\t3. Residuos\n\t4. Generacion Total\n\t5. Atras\n");
    scanf("%i", &seleccion);
    fflush(stdin);
    system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5);
        switch (seleccion){
            case 1:
                printTiposEnergiasNoRenovables();
            break;

            case 2:
                printTiposEnergiasRenovables();
            break;

            case 3:
                printResiduos();
            break;

            case 4:
                printGeneracionTotal();
            break;

            case 5:
                system("cls");
                menuPrincipal();
            break;

        }  

}  



void printTiposEnergiasNoRenovables(){
    int modalidad;

    do{
        printf("\nSeleccione el tipo de Energia No Renovable de la que desee obtener mayor informacion:\n\n");
        printf("\t1. Combustibles Fosiles\n\t2. Nuclear\n\t3. Motores Diesel\n\t4. Atras\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4);
        switch (modalidad){
            case 1:
                printCombustiblesFosiles();
            break;

            case 2:
                printNuclear();
            break;

            case 3:
                printMotoresDiesel();
            break;

            case 4:
                system("cls");
                printTiposEnergias();
            break;

        }   

}  



void printNuclear(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado Energia Nuclear!\n\n");
        printf("Como curiosidad usted debe saber... que la energia nuclear se divide en dos procesos distintos, uno, la fusion nuclear y,\
 el otro, la fision nuclear. El mas empleado es la fision nuclear que consiste en la desintegracion de ciertos atomos\
 con neutrones. Esta reaccion libera una gran cantidad de energia utilitaria. El proceso de fision nuclear es un proceso\
limpio. La unica parte donde se produce contaminacion, es en el proceso de desulfuracion del uranio.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Nuclear:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesNuclear2021();
            break;

            case 2:
                printMayorValorMesNuclear2022();
            break;

            case 3:
                printMayorValorMesNuclear2021_2022();
            break;

            case 4:
                printMenorValorMesNuclear2021();
            break;

            case 5:
                printMenorValorMesNuclear2022();
            break;

            case 6:
                 printMenorValorMesNuclear2021_2022();
            break;

            case 7:
                 printMediaAnualNuclear2021();
            break;

            case 8:
                 printMediaAnualNuclear2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasNoRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printMotoresDiesel(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado Motores Diesel!\n\n");
        printf("Como curiosidad usted debe saber... FALTA INFOOOOOOOOOO!!!\n\n");

        printf("\nSeleccione que mas desea conocer sobre los Motores Diesel:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

     while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesMotoresDiesel2021();
            break;

            case 2:
                printMayorValorMesMotoresDiesel2022();
            break;

            case 3:
                printMayorValorMesMotoresDiesel2021_2022();
            break;

            case 4:
                printMenorValorMesMotoresDiesel2021();
            break;

            case 5:
                printMenorValorMesMotoresDiesel2022();
            break;

            case 6:
                 printPeorValorMesMotoresDiesel2021_2022();
            break;

            case 7:
                 printMediaAnualMotoresDiesel2021();
            break;

            case 8:
                 printMediaAnualMotoresDiesel2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasNoRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printTiposEnergiasRenovables(){
    int modalidad;

    do{
        printf("\nSeleccione el tipo de Energia Renovable de la que desee obtener mayor informacion:\n\n");
        printf("\t1. Hidraulica\n\t2. Hidroeolica\n\t3. Eolica\n\t4. Solar Fotovoltaica\n\t5. Solar Termica\n\t6. Otras Renovables\n\t7. Atras\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7);
        switch (modalidad){
            case 1:
                printHidraulica();
            break;

            case 2:
                printHidroeolica();
            break;

            case 3:
                printEolica();
            break;

            case 4:
                printSolarFotovoltaica();
            break;

            case 5:
                printSolarTermica();
            break;

            case 6:
                printOtrasEnergiasRenovables();
            break;

            case 7:
                system("cls");
                printTiposEnergias();
            break;

        }   

}  



void printHidraulica(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Hidraulica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Hidraulica es aquella que aprovecha la velocidad (energia cinetica) y la\
 altura (energia potencial) de las corrientes de agua en un punto de caude del rio para convertirlo en energia mecanica\
 (debido a una turbina hidraulica) y, posteriormente, en electricidad con un generador.\n\n");

 

/* 04/05/2023

 printf("Los datos de la energía hidráulica son los siguientes:\n");

 Fichero1(1); Te lee el fichero y almacena los datos...

 printf("Los datos de %s son los siguientes", Energia.Energias[0]);

 */



        printf("\nSeleccione que mas desea conocer sobre la Energia Hidraulica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesHidraulica2021();
            break;

            case 2:
                printMayorValorMesHidraulica2022();
            break;

            case 3:
                printMayorValorMesHidraulica2021_2022();
            break;

            case 4:
                printMenorValorMesHidraulica2021();
            break;

            case 5:
                printMenorValorMesHidraulica2022();
            break;

            case 6:
                 printMenorValorMesHidraulica2021_2022();
            break;

            case 7:
                 printMediaAnualHidraulica2021();
            break;

            case 8:
                 printMediaAnualHidraulica2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printHidroeolica(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Hidroeolica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Hidroeolica combina el uso de aerogeneradores y turbinas hidraulicas\
 para aprovechar tanto la energia del viento como la del agua en movimiento. Esta forma de generacion de energia se utiliza principalmente\
 en zonas costeras o en el mar, donde hay vientos fuertes y corrientes de agua constantes.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Hidroeolica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

   while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesHidroeolica2021();
            break;

            case 2:
                printMayorValorMesHidroeolica2022();
            break;

            case 3:
                printMayorValorMesHidroeolica2021_2022();
            break;

            case 4:
                printMenorValorMesHidroeolica2021();
            break;

            case 5:
                printMenorValorMesHidroeolica2022();
            break;

            case 6:
                 printMenorValorMesHidroeolica2021_2022();
            break;

            case 7:
                 printMediaAnualHidroeolica2021();
            break;

            case 8:
                 printMediaAnualHidroeolica2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;


        }  

} 



void printEolica(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Eolica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Eolica transforma la energia cinetica del viento en energia mecanica mediante\
 las turbinas eolicas. Dicha energia mecanica aplicada a un alternador convierte la energia en energia electrica. Existe la energia eolica\
     terrestre y marina. A esta ultima se le conoce como 'offshore'.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Eolica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

   while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesEolica2021();
            break;

            case 2:
                printMayorValorMesEolica2022();
            break;

            case 3:
                printMayorValorMesEolica2021_2022();
            break;

            case 4:
                printMenorValorMesEolica2021();
            break;

            case 5:
                printMenorValorMesEolica2022();
            break;

            case 6:
                 printMenorValorMesEolica2021_2022();
            break;

            case 7:
                 printMediaAnualEolica2021();
            break;

            case 8:
                 printMediaAnualEolica2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printSolarFotovoltaica(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Solar Fotovoltaica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Fotovoltaica sufre una transformacion directa de la radiacion solar en energia\
 electrica mediante el efecto fotoelectrico, que consiste en la emision de electrones de un material cuando se ilumina\
 con la radiacion solar.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Solar Fotovoltaica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesSolarFotovoltaica2021();
            break;

            case 2:
                printMayorValorMesSolarFotovoltaica2022();
            break;

            case 3:
                printMayorValorMesSolarFotovoltaica2021_2022();
            break;

            case 4:
                printMenorValorMesSolarFotovoltaica2021();
            break;

            case 5:
                printMenorValorMesSolarFotovoltaica2022();
            break;

            case 6:
                 printMenorValorMesSolarFotovoltaica2021_2022();
            break;

            case 7:
                 printMediaAnualSolarFotovoltaica2021();
            break;

            case 8:
                 printMediaAnualSolarFotovoltaica2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printSolarTermica(){
     int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Solar Termica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Solar Termica genera electricidad a partir de la energia recogida en un fluido\
 que se calienta mediante la energia solar. Si el fluido caliente es vapor o aire, debemos de tener en cuenta que el agua se evapora\
 gracias a la energia solar y dicho vapor es enviado a una turbina conectada a un generador, produciendo energia electrica.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Solar Termica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesSolarTermica2021();
            break;

            case 2:
                printMayorValorMesSolarTermica2022();
            break;

            case 3:
                printMayorValorMesSolarTermica2021_2022();
            break;

            case 4:
                printMenorValorMesSolarTermica2021();
            break;

            case 5:
                printMenorValorMesSolarTermica2022();
            break;

            case 6:
                 printMenorValorMesSolarTermica2021_2022();
            break;

            case 7:
                 printMediaAnualSolarTermica2021();
            break;

            case 8:
                 printMediaAnualSolarTermica2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printOtrasEnergiasRenovables(){
     int seleccion;

    do{
        printf("\nUsted ha seleccionado otras Energias Renovables!\n\n");
        printf("Como curiosidad usted debe saber... Cuando nos referimos a otras Energias Renovables podemos englobar energias como\
 la geotermica, mareomotriz, energias procedentes de biomasa o biocombustibles.\n\n");

        printf("\nSeleccione que mas desea conocer sobre otras Energias Renovables:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesOtrasRenovables2021();
            break;

            case 2:
                printMayorValorMesOtrasRenovables2022();
            break;

            case 3:
                printMayorValorMesOtrasRenovables2021_2022();
            break;

            case 4:
                printMenorValorMesOtrasRenovables2021();
            break;

            case 5:
                printMenorValorMesOtrasRenovables2022();
            break;

            case 6:
                 printMenorValorMesOtrasRenovables2021_2022();
            break;

            case 7:
                 printMediaAnualOtrasRenovables2021();
            break;

            case 8:
                 printMediaAnualOtrasRenovables2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printResiduos(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Residuos!\n");
        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Residuos:\n");
        printf("\n\t1. Residuos Renovables\n\t2. Residuos No Renovables\n\t3. Atras\n");

        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3);
        switch (modalidad){
            case 1:
                printResiduosRenovables();
            break;

            case 2:
                printResiduosNoRenovables();
            break;

            case 3:
                system("cls");
                printTiposEnergias();
            break;

        }   

} 


void printResiduosRenovables(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Residuos Renovables!\n\n");
        printf("Como curiosidad usted debe saber... FALTA INFOOOOOOOO!!!!!\n\n");

        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Residuos Renovables:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesResiduosRenovables2021();
            break;

            case 2:
                printMayorValorMesResiduosRenovables2022();
            break;

            case 3:
                printMayorValorMesResiduosRenovables2021_2022();
            break;

            case 4:
                printMenorValorMesResiduosRenovables2021();
            break;

            case 5:
                printMenorValorMesResiduosRenovables2022();
            break;

            case 6:
                 printMenorValorMesResiduosRenovables2021_2022();
            break;

            case 7:
                 printMediaAnualResiduosRenovables2021();
            break;

            case 8:
                 printMediaAnualResiduosRenovables2022();
            break;

            case 9:
                system("cls");
                printResiduos();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   
}

void printResiduosNoRenovables(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Residuos No Renovables!\n\n");
        printf("Como curiosidad usted debe saber... FALTA INFOOOOOOOO!!!!!\n\n");

        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Residuos No Renovables:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

     while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesResiduosNoRenovables2021();
            break;

            case 2:
                printMayorValorMesResiduosNoRenovables2022();
            break;

            case 3:
                printMayorValorMesResiduosNoRenovables2021_2022();
            break;

            case 4:
                printMenorValorMesResiduosNoRenovables2021();
            break;

            case 5:
                printMenorValorMesResiduosNoRenovables2022();
            break;

            case 6:
                 printMenorValorMesResiduosNoRenovables2021_2022();
            break;

            case 7:
                 printMediaAnualResiduosNoRenovables2021();
            break;

            case 8:
                 printMediaAnualResiduosNoRenovables2022();
            break;

            case 9:
                system("cls");
                printResiduos();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   
}

void printGeneracionTotal(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la Generacion Total!\n\n");
        printf("Como curiosidad usted debe saber... En este punto se recoge la suma de todas y cada una de las fuentes de generacion distintas\
 que se registran por Red Electrica Espanola (No Renovables, Renovables, Otra Renovables y Residuos).\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Generacion Total:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesGeneracionTotal2021();
            break;

            case 2:
                printMayorValorMesGeneracionTotal2022();
            break;

            case 3:
                printMayorValorMesGeneracionTotal2021_2022();
            break;

            case 4:
                printMenorValorMesGeneracionTotal2021();
            break;

            case 5:
                printMenorValorMesGeneracionTotal2022();
            break;

            case 6:
                 printMenorValorMesGeneracionTotal2021_2022();
            break;

            case 7:
                 printMediaAnualGeneracionTotal2021();
            break;

            case 8:
                 printMediaAnualGeneracionTotal2022();
            break;

            case 9:
                system("cls");
                printTiposEnergias();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   

} 



void printCombustiblesFosiles(){
    int seleccion;

    do{
        printf("\nSeleccione el tipo de Combustible Fosil del que desee obtener mayor informacion:\n\n");
        printf("\t1. Carbon\n\t2. Fuel + Gas Natural\n\t3. Turbina Gas\n\t4. Turbina Vapor\n\t5. Ciclo Combinado\n\t6. Cogeneracion\n\t7. Atras\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7);
        switch (seleccion){
            case 1:
                printCarbon();
            break;

            case 2:
                printFuelGas();
            break;

            case 3:
                printTurbinaGas();
            break;

            case 4:
                printTurbinaVapor();
            break;

            case 5:
                printCicloCombinado();
            break;

            case 6:
                printCogeneracion();
            break;

            case 7:
                system("cls");
                printTiposEnergiasNoRenovables();
            break;


        } 

}  



void printCarbon(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Carbon!\n\n");
        printf("Como curiosidad usted debe saber... que el carbon es el combustible fosil mas sucio y ;a gran parte de su consumo mundial\
 se utiliza para la fundicion del hierro y como componente esencial del acero. Tambien se usa con gran frecuencia en la\
 industria quimica y petroquimica. EEUU es uno de los paises con mayores reservas de carbon junto con Asia. El carbon mas\
 habitual es la antracita.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Carbon:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesCarbon2021();
            break;

            case 2:
                printMayorValorMesCarbon2022();
            break;

            case 3:
                printMayorValorMesCarbon2021_2022();
            break;

            case 4:
                printMenorValorMesCarbon2021();
            break;

            case 5:
                printMenorValorMesCarbon2022();
            break;

            case 6:
                 printMenorValorMesCarbon2021_2022();
            break;

            case 7:
                 printMediaAnualCarbon2021();
            break;

            case 8:
                 printMediaAnualCarbon2022();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   

} 



void printFuelGas(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Petroleo y Gas Natural!\n\n");
        printf("Como curiosidad usted debe saber... que el petroleo una mezcla de hidrocarburos saturados en estado solido, liquido\
 o gaseoso que se encuentran en yacimientos naturales. El petroleo se lleva a un proceso de destilacion fraccionada\
 para obetener distintos tipos de carburantes. Las mayores reservas de petroleo las podemos encontrar Oriente medio.\
 En el caso del gas natural, debemos de destacar que el componente mayoritario es el metano. Tambien, las mayores\
 reservas de gas antural las encontramos en oriente medio.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Fuel-Gas:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesFuelGas2021();
            break;

            case 2:
                printMayorValorMesFuelGas2022();
            break;

            case 3:
                printMayorValorMesFuelGas2021_2022();
            break;

            case 4:
                printMenorValorMesFuelGas2021();
            break;

            case 5:
                printMenorValorMesFuelGas2022();
            break;

            case 6:
                 printMenorValorMesFuelGas2021_2022();
            break;

            case 7:
                 printMediaAnualFuelGas2021();
            break;

            case 8:
                 printMediaAnualFuelGas2022();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   


} 



void printTurbinaGas(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la obtencion de energia a partir de la Turbina de Gas!\n\n");
        printf("Como curiosidad usted debe saber... primero se usa un combustible fosil para realizar una conversion de energia quimica\
 , por ejemplo, del carbon en energia termica. Para ello, se introduce el carbon en el interio de un horno y dicho vapor\
 o gas generado se hace pasar por una turbina que se encargara de la conversion de energia termica en energia mecanica.\
 Dicha energia mecanica de la turbina se convierte posteriormente en energia electrica al pasar por un generador electrico.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de la Turbina de Gas:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesTurbinaGas2021();
            break;

            case 2:
                printMayorValorMesTurbinaGas2022();
            break;

            case 3:
                printMayorValorMesTurbinaGas2021_2022();
            break;

            case 4:
                printMenorValorMesTurbinaGas2021();
            break;

            case 5:
                printMenorValorMesTurbinaGas2022();
            break;

            case 6:
                 printMenorValorMesTurbinaGas2021_2022();
            break;

            case 7:
                 printMediaAnualTurbinaGas2021();
            break;

            case 8:
                 printMediaAnualTurbinaGas2022();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;


        }   


} 



void printTurbinaVapor(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la obtencion de energia a partir de la Turbina de Vapor!\n\n");
        printf("Como curiosidad usted debe saber... la turbina de vapor compone el ciclo de Rankine. Dicho ciclo podemos separarlo en 4 etapas.\
 La etapa 1-2 donde se produce una compresion isoentropica de agua liquida en la bomba. La presion del agua aumenta\
 para ser introducida en la caldera. En la etapa 2-3, manteniendp la presion, el agua se calienta hasta la temperatura\
 de ebullicion, se evapora y despues se aumenta la temperatura del vapor de agua. En la etapa 3-4, se produce la expansion\
 isoentropica en la turbina por lo que el agua se descomprime provocando el movimiento de la turbina y se enfria hasta llegar a\
 la temperatura del condesador. Por ultimo, tenemos la etapa 4-1 donde el agua se enfria y vuelve a la bomba para iniciar,\
 de nuevo, el ciclo. El rendimiento maximo en un ciclo de Rankine es del 30%\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de la Turbina de Vapor:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesTurbinaVapor2021();
            break;

            case 2:
                printMayorValorMesTurbinaVapor2022();
            break;

            case 3:
                printMayorValorMesTurbinaVapor2021_2022();
            break;

            case 4:
                printMenorValorMesTurbinaVapor2021();
            break;

            case 5:
                printMenorValorMesTurbinaVapor2022();
            break;

            case 6:
                 printMenorValorMesTurbinaVapor2021_2022();
            break;

            case 7:
                 printMediaAnualTurbinaVapor2021();
            break;

            case 8:
                 printMediaAnualTurbinaVapor2022();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   


} 



void printCicloCombinado(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la obtencion de energia a partir de un Ciclo Combinado!\n\n");
        printf("Como curiosidad usted debe saber... En este ciclo se decide sumar a la central termica una turbina de gas para producir\
 energia adicional a aprtir de los gases obtenidos en la combustion de los combustibles fosiles. Es decir, juntamos\
 una turbina de gas y una turbina de vapor. En este ciclo el rendimiento que obtenemos es del 45%.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de un Ciclo Combinado:\n");
         printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesCicloCombinado2021();
            break;

            case 2:
                printMayorValorMesCicloCombinado2022();
            break;

            case 3:
                printMayorValorMesCicloCombinado2021_2022();
            break;

            case 4:
                printMenorValorMesCicloCombinado2021();
            break;

            case 5:
                printMenorValorMesCicloCombinado2022();
            break;

            case 6:
                 printMenorValorMesCicloCombinado2021_2022();
            break;

            case 7:
                 printMediaAnualCicloCombinado2021();
            break;

            case 8:
                 printMediaAnualCicloCombinado2022();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   


} 



void printCogeneracion(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la obtencion de energia a partir de la Cogeneracion!\n\n");
        printf("Como curiosidad usted debe saber... que la Cogeneracion mejora aún más la eficiencia energética aprovechando el calor de\
la corriente de salida de la turbina de vapor. Este calor puede ser utilizado, por ejemplo,\
para  calentar agua de uso industrial,\ o para la generación de agua caliente sanitaria.\
En este tipo de fuente de energia conseguimos rendimientos cercanos al 80%.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de la Cogeneraciono:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2021 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2022 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2021 y 2022 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2021\n\t8. Media Anual 2022\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesCogeneracion2021();
            break;

            case 2:
                printMayorValorMesCogeneracion2022();
            break;

            case 3:
                printMayorValorMesCogeneracion2021_2022();
            break;

            case 4:
                printMenorValorMesCogeneracion2021();
            break;

            case 5:
                printMenorValorMesCogeneracion2022();
            break;

            case 6:
                 printMenorValorMesCogeneracion2021_2022();
            break;

            case 7:
                 printMediaAnualCogeneracion2021();
            break;

            case 8:
                 printMediaAnualCogeneracion2022();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   


} 




void printEnergias2019_2020(){
    int modalidad;

    do{
    printf("\nDesea continuar con el acceso a distintas Energias:\n\n");
    printf("\t1. Continuar\n\t2. Atras\n");
    scanf("%i", &modalidad);
    fflush(stdin);
    system("cls");
    }

    while (modalidad !=  1 && modalidad != 2);
        switch (modalidad){
            case 1:
                printTiposEnergias2019_2020();
            break;

            case 2:
            system("cls");
            menuPrincipal();

            break;
        }

}



void printTiposEnergias2019_2020(){
    int seleccion;

    do{
    printf("\nSeleccione el tipo de Energia de la que desee obtener mayor informacion:\n\n");
    printf("\t1. No Renovable\n\t2. Renovable\n\t3. Residuos\n\t4. Generacion Total\n\t5. Atras\n");
    scanf("%i", &seleccion);
    fflush(stdin);
    system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5);
        switch (seleccion){
            case 1:
                printTiposEnergiasNoRenovables2019_2020();
            break;

            case 2:
                printTiposEnergiasRenovables2019_2020();
            break;

            case 3:
                printResiduos2019_2020();
            break;

            case 4:
                printGeneracionTotal2019_2020();
            break;

            case 5:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printTiposEnergiasNoRenovables2019_2020(){
    int modalidad;

    do{
        printf("\nSeleccione el tipo de Energia No Renovable de la que desee obtener mayor informacion:\n\n");
        printf("\t1. Combustibles Fosiles\n\t2. Nuclear\n\t3. Motores Diesel\n\t4. Atras\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4);
        switch (modalidad){
            case 1:
                printCombustiblesFosiles2019_2020();
            break;

            case 2:
                printNuclear2019_2020();
            break;

            case 3:
                printMotoresDiesel2019_2020();
            break;

            case 4:
                system("cls");
                printTiposEnergias2019_2020();
            break;

        }   

}  



void printNuclear2019_2020(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado Energia Nuclear!\n\n");
        printf("Como curiosidad usted debe saber... que la energia nuclear se divide en dos procesos distintos, uno, la fusion nuclear y,\
 el otro, la fision nuclear. El mas empleado es la fision nuclear que consiste en la desintegracion de ciertos atomos\
 con neutrones. Esta reaccion libera una gran cantidad de energia utilitaria. El proceso de fision nuclear es un proceso\
limpio. La unica parte donde se produce contaminacion, es en el proceso de desulfuracion del uranio.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Nuclear:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesNuclear2019();
            break;

            case 2:
                printMayorValorMesNuclear2020();
            break;

            case 3:
                printMayorValorMesNuclear2019_2020();
            break;

            case 4:
                printMenorValorMesNuclear2019();
            break;

            case 5:
                printMenorValorMesNuclear2020();
            break;

            case 6:
                 printMenorValorMesNuclear2019_2020();
            break;

            case 7:
                 printMediaAnualNuclear2021();
            break;

            case 8:
                 printMediaAnualNuclear2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasNoRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printMotoresDiesel2019_2020(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado Motores Diesel!\n\n");
        printf("Como curiosidad usted debe saber... FALTA INFOOOOOOOOOO!!!\n\n");

        printf("\nSeleccione que mas desea conocer sobre los Motores Diesel:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

     while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesMotoresDiesel2019();
            break;

            case 2:
                printMayorValorMesMotoresDiesel2020();
            break;

            case 3:
                printMayorValorMesMotoresDiesel2019_2020();
            break;

            case 4:
                printMenorValorMesMotoresDiesel2019();
            break;

            case 5:
                printMenorValorMesMotoresDiesel2020();
            break;

            case 6:
                 printPeorValorMesMotoresDiesel2019_2020();
            break;

            case 7:
                 printMediaAnualMotoresDiesel2019();
            break;

            case 8:
                 printMediaAnualMotoresDiesel2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasNoRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printTiposEnergiasRenovables2019_2020(){
    int modalidad;

    do{
        printf("\nSeleccione el tipo de Energia Renovable de la que desee obtener mayor informacion:\n\n");
        printf("\t1. Hidraulica\n\t2. Hidroeolica\n\t3. Eolica\n\t4. Solar Fotovoltaica\n\t5. Solar Termica\n\t6. Otras Renovables\n\t7. Atras\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7);
        switch (modalidad){
            case 1:
                printHidraulica2019_2020();
            break;

            case 2:
                printHidroeolica2019_2020();
            break;

            case 3:
                printEolica2019_2020();
            break;

            case 4:
                printSolarFotovoltaica2019_2020();
            break;

            case 5:
                printSolarTermica2019_2020();
            break;

            case 6:
                printOtrasEnergiasRenovables2019_2020();
            break;

            case 7:
                system("cls");
                printTiposEnergias2019_2020();
            break;

        }   

}  



void printHidraulica2019_2020(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Hidraulica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Hidraulica es aquella que aprovecha la velocidad (energia cinetica) y la\
 altura (energia potencial) de las corrientes de agua en un punto de caude del rio para convertirlo en energia mecanica\
 (debido a una turbina hidraulica) y, posteriormente, en electricidad con un generador.\n\n");


        printf("\nSeleccione que mas desea conocer sobre la Energia Hidraulica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesHidraulica2019();
            break;

            case 2:
                printMayorValorMesHidraulica2020();
            break;

            case 3:
                printMayorValorMesHidraulica2019_2020();
            break;

            case 4:
                printMenorValorMesHidraulica2019();
            break;

            case 5:
                printMenorValorMesHidraulica2020();
            break;

            case 6:
                 printMenorValorMesHidraulica2019_2020();
            break;

            case 7:
                 printMediaAnualHidraulica2019();
            break;

            case 8:
                 printMediaAnualHidraulica2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printHidroeolica2019_2020(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Hidroeolica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Hidroeolica combina el uso de aerogeneradores y turbinas hidraulicas\
 para aprovechar tanto la energia del viento como la del agua en movimiento. Esta forma de generacion de energia se utiliza principalmente\
 en zonas costeras o en el mar, donde hay vientos fuertes y corrientes de agua constantes.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Hidroeolica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

   while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesHidroeolica2019();
            break;

            case 2:
                printMayorValorMesHidroeolica2020();
            break;

            case 3:
                printMayorValorMesHidroeolica2019_2020();
            break;

            case 4:
                printMenorValorMesHidroeolica2019();
            break;

            case 5:
                printMenorValorMesHidroeolica2020();
            break;

            case 6:
                 printMenorValorMesHidroeolica2019_2020();
            break;

            case 7:
                 printMediaAnualHidroeolica2019();
            break;

            case 8:
                 printMediaAnualHidroeolica2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;


        }  

} 



void printEolica2019_2020(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Eolica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Eolica transforma la energia cinetica del viento en energia mecanica mediante\
 las turbinas eolicas. Dicha energia mecanica aplicada a un alternador convierte la energia en energia electrica. Existe la energia eolica\
     terrestre y marina. A esta ultima se le conoce como 'offshore'.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Eolica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

   while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesEolica2019();
            break;

            case 2:
                printMayorValorMesEolica2020();
            break;

            case 3:
                printMayorValorMesEolica2019_2020();
            break;

            case 4:
                printMenorValorMesEolica2019();
            break;

            case 5:
                printMenorValorMesEolica2020();
            break;

            case 6:
                 printMenorValorMesEolica2019_2020();
            break;

            case 7:
                 printMediaAnualEolica2019();
            break;

            case 8:
                 printMediaAnualEolica2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printSolarFotovoltaica2019_2020(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Solar Fotovoltaica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Fotovoltaica sufre una transformacion directa de la radiacion solar en energia\
 electrica mediante el efecto fotoelectrico, que consiste en la emision de electrones de un material cuando se ilumina\
 con la radiacion solar.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Solar Fotovoltaica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesSolarFotovoltaica2019();
            break;

            case 2:
                printMayorValorMesSolarFotovoltaica2020();
            break;

            case 3:
                printMayorValorMesSolarFotovoltaica2019_2020();
            break;

            case 4:
                printMenorValorMesSolarFotovoltaica2019();
            break;

            case 5:
                printMenorValorMesSolarFotovoltaica2020();
            break;

            case 6:
                 printMenorValorMesSolarFotovoltaica2019_2020();
            break;

            case 7:
                 printMediaAnualSolarFotovoltaica2019();
            break;

            case 8:
                 printMediaAnualSolarFotovoltaica2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printSolarTermica2019_2020(){
     int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Solar Termica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Solar Termica genera electricidad a partir de la energia recogida en un fluido\
 que se calienta mediante la energia solar. Si el fluido caliente es vapor o aire, debemos de tener en cuenta que el agua se evapora\
 gracias a la energia solar y dicho vapor es enviado a una turbina conectada a un generador, produciendo energia electrica.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Solar Termica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesSolarTermica2019();
            break;

            case 2:
                printMayorValorMesSolarTermica2020();
            break;

            case 3:
                printMayorValorMesSolarTermica2019_2020();
            break;

            case 4:
                printMenorValorMesSolarTermica2019();
            break;

            case 5:
                printMenorValorMesSolarTermica2020();
            break;

            case 6:
                 printMenorValorMesSolarTermica2019_2020();
            break;

            case 7:
                 printMediaAnualSolarTermica2019();
            break;

            case 8:
                 printMediaAnualSolarTermica2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printOtrasEnergiasRenovables2019_2020(){
     int seleccion;

    do{
        printf("\nUsted ha seleccionado otras Energias Renovables!\n\n");
        printf("Como curiosidad usted debe saber... Cuando nos referimos a otras Energias Renovables podemos englobar energias como\
 la geotermica, mareomotriz, energias procedentes de biomasa o biocombustibles.\n\n");

        printf("\nSeleccione que mas desea conocer sobre otras Energias Renovables:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesOtrasRenovables2019();
            break;

            case 2:
                printMayorValorMesOtrasRenovables2020();
            break;

            case 3:
                printMayorValorMesOtrasRenovables2019_2020();
            break;

            case 4:
                printMenorValorMesOtrasRenovables2019();
            break;

            case 5:
                printMenorValorMesOtrasRenovables2020();
            break;

            case 6:
                 printMenorValorMesOtrasRenovables2019_2020();
            break;

            case 7:
                 printMediaAnualOtrasRenovables2019();
            break;

            case 8:
                 printMediaAnualOtrasRenovables2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printResiduos2019_2020(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Residuos!\n");
        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Residuos:\n");
        printf("\n\t1. Residuos Renovables\n\t2. Residuos No Renovables\n\t3. Atras\n");

        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3);
        switch (modalidad){
            case 1:
                printResiduosRenovables2019_2020();
            break;

            case 2:
                printResiduosNoRenovables2019_2020();
            break;

            case 3:
                system("cls");
                printTiposEnergias2019_2020();
            break;

        }   

} 


void printResiduosRenovables2019_2020(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Residuos Renovables!\n\n");
        printf("Como curiosidad usted debe saber... FALTA INFOOOOOOOO!!!!!\n\n");

        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Residuos Renovables:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesResiduosRenovables2019();
            break;

            case 2:
                printMayorValorMesResiduosRenovables2020();
            break;

            case 3:
                printMayorValorMesResiduosRenovables2019_2020();
            break;

            case 4:
                printMenorValorMesResiduosRenovables2019();
            break;

            case 5:
                printMenorValorMesResiduosRenovables2020();
            break;

            case 6:
                 printMenorValorMesResiduosRenovables2019_2020();
            break;

            case 7:
                 printMediaAnualResiduosRenovables2019();
            break;

            case 8:
                 printMediaAnualResiduosRenovables2020();
            break;

            case 9:
                system("cls");
                printResiduos2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  
}

void printResiduosNoRenovables2019_2020(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Residuos No Renovables!\n\n");
        printf("Como curiosidad usted debe saber... FALTA INFOOOOOOOO!!!!!\n\n");

        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Residuos No Renovables:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

     while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesResiduosNoRenovables2019();
            break;

            case 2:
                printMayorValorMesResiduosNoRenovables2020();
            break;

            case 3:
                printMayorValorMesResiduosNoRenovables2019_2020();
            break;

            case 4:
                printMenorValorMesResiduosNoRenovables2019();
            break;

            case 5:
                printMenorValorMesResiduosNoRenovables2020();
            break;

            case 6:
                 printMenorValorMesResiduosNoRenovables2019_2020();
            break;

            case 7:
                 printMediaAnualResiduosNoRenovables2019();
            break;

            case 8:
                 printMediaAnualResiduosNoRenovables2020();
            break;

            case 9:
                system("cls");
                printResiduos2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   
}



void printGeneracionTotal2019_2020(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la Generacion Total!\n\n");
        printf("Como curiosidad usted debe saber... En este punto se recoge la suma de todas y cada una de las fuentes de generacion distintas\
 que se registran por Red Electrica Espanola (No Renovables, Renovables, Otra Renovables y Residuos).\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Generacion Total:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesGeneracionTotal2019();
            break;

            case 2:
                printMayorValorMesGeneracionTotal2020();
            break;

            case 3:
                printMayorValorMesGeneracionTotal2019_2020();
            break;

            case 4:
                printMenorValorMesGeneracionTotal2019();
            break;

            case 5:
                printMenorValorMesGeneracionTotal2020();
            break;

            case 6:
                 printMenorValorMesGeneracionTotal2019_2020();
            break;

            case 7:
                 printMediaAnualGeneracionTotal2019();
            break;

            case 8:
                 printMediaAnualGeneracionTotal2020();
            break;

            case 9:
                system("cls");
                printTiposEnergias2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   

} 



void printCombustiblesFosiles2019_2020(){
    int seleccion;

    do{
        printf("\nSeleccione el tipo de Combustible Fosil del que desee obtener mayor informacion:\n\n");
        printf("\t1. Carbon\n\t2. Fuel + Gas Natural\n\t3. Turbina Gas\n\t4. Turbina Vapor\n\t5. Ciclo Combinado\n\t6. Cogeneracion\n\t7. Atras\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7);
        switch (seleccion){
            case 1:
                printCarbon2019_2020();
            break;

            case 2:
                printFuelGas2019_2020();
            break;

            case 3:
                printTurbinaGas2019_2020();
            break;

            case 4:
                printTurbinaVapor2019_2020();
            break;

            case 5:
                printCicloCombinado2019_2020();
            break;

            case 6:
                printCogeneracion2019_2020();
            break;

            case 7:
                system("cls");
                printTiposEnergiasNoRenovables2019_2020();
            break;


        } 

}  



void printCarbon2019_2020(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Carbon!\n\n");
        printf("Como curiosidad usted debe saber... que el carbon es el combustible fosil mas sucio y ;a gran parte de su consumo mundial\
 se utiliza para la fundicion del hierro y como componente esencial del acero. Tambien se usa con gran frecuencia en la\
 industria quimica y petroquimica. EEUU es uno de los paises con mayores reservas de carbon junto con Asia. El carbon mas\
 habitual es la antracita.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Carbon:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesCarbon2019();
            break;

            case 2:
                printMayorValorMesCarbon2020();
            break;

            case 3:
                printMayorValorMesCarbon2019_2020();
            break;

            case 4:
                printMenorValorMesCarbon2019();
            break;

            case 5:
                printMenorValorMesCarbon2020();
            break;

            case 6:
                 printMenorValorMesCarbon2019_2020();
            break;

            case 7:
                 printMediaAnualCarbon2019();
            break;

            case 8:
                 printMediaAnualCarbon2020();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   

}



void printFuelGas2019_2020(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Petroleo y Gas Natural!\n\n");
        printf("Como curiosidad usted debe saber... que el petroleo una mezcla de hidrocarburos saturados en estado solido, liquido\
 o gaseoso que se encuentran en yacimientos naturales. El petroleo se lleva a un proceso de destilacion fraccionada\
 para obetener distintos tipos de carburantes. Las mayores reservas de petroleo las podemos encontrar Oriente medio.\
 En el caso del gas natural, debemos de destacar que el componente mayoritario es el metano. Tambien, las mayores\
 reservas de gas antural las encontramos en oriente medio.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Fuel-Gas:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesFuelGas2019();
            break;

            case 2:
                printMayorValorMesFuelGas2020();
            break;

            case 3:
                printMayorValorMesFuelGas2019_2020();
            break;

            case 4:
                printMenorValorMesFuelGas2019();
            break;

            case 5:
                printMenorValorMesFuelGas2020();
            break;

            case 6:
                 printMenorValorMesFuelGas2019_2020();
            break;

            case 7:
                 printMediaAnualFuelGas2019();
            break;

            case 8:
                 printMediaAnualFuelGas2020();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   


} 



void printTurbinaGas2019_2020(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la obtencion de energia a partir de la Turbina de Gas!\n\n");
        printf("Como curiosidad usted debe saber... primero se usa un combustible fosil para realizar una conversion de energia quimica\
 , por ejemplo, del carbon en energia termica. Para ello, se introduce el carbon en el interio de un horno y dicho vapor\
 o gas generado se hace pasar por una turbina que se encargara de la conversion de energia termica en energia mecanica.\
 Dicha energia mecanica de la turbina se convierte posteriormente en energia electrica al pasar por un generador electrico.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de la Turbina de Gas:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesTurbinaGas2019();
            break;

            case 2:
                printMayorValorMesTurbinaGas2020();
            break;

            case 3:
                printMayorValorMesTurbinaGas2019_2020();
            break;

            case 4:
                printMenorValorMesTurbinaGas2019();
            break;

            case 5:
                printMenorValorMesTurbinaGas2020();
            break;

            case 6:
                 printMenorValorMesTurbinaGas2019_2020();
            break;

            case 7:
                printMediaAnualTurbinaGas2019();
            break;

            case 8:
                 printMediaAnualTurbinaGas2020();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;


        }   


} 



void printTurbinaVapor2019_2020(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la obtencion de energia a partir de la Turbina de Vapor!\n\n");
        printf("Como curiosidad usted debe saber... la turbina de vapor compone el ciclo de Rankine. Dicho ciclo podemos separarlo en 4 etapas.\
 La etapa 1-2 donde se produce una compresion isoentropica de agua liquida en la bomba. La presion del agua aumenta\
 para ser introducida en la caldera. En la etapa 2-3, manteniendp la presion, el agua se calienta hasta la temperatura\
 de ebullicion, se evapora y despues se aumenta la temperatura del vapor de agua. En la etapa 3-4, se produce la expansion\
 isoentropica en la turbina por lo que el agua se descomprime provocando el movimiento de la turbina y se enfria hasta llegar a\
 la temperatura del condesador. Por ultimo, tenemos la etapa 4-1 donde el agua se enfria y vuelve a la bomba para iniciar,\
 de nuevo, el ciclo. El rendimiento maximo en un ciclo de Rankine es del 30%\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de la Turbina de Vapor:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesTurbinaVapor2019();
            break;

            case 2:
                printMayorValorMesTurbinaVapor2020();
            break;

            case 3:
                printMayorValorMesTurbinaVapor2019_2020();
            break;

            case 4:
                printMenorValorMesTurbinaVapor2019();
            break;

            case 5:
                printMenorValorMesTurbinaVapor2020();
            break;

            case 6:
                printMenorValorMesTurbinaVapor2019_2020();
            break;

            case 7:
                 printMediaAnualTurbinaVapor2019();
            break;

            case 8:
                printMediaAnualTurbinaVapor2020();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   


} 



void printCicloCombinado2019_2020(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la obtencion de energia a partir de un Ciclo Combinado!\n\n");
        printf("Como curiosidad usted debe saber... En este ciclo se decide sumar a la central termica una turbina de gas para producir\
 energia adicional a aprtir de los gases obtenidos en la combustion de los combustibles fosiles. Es decir, juntamos\
 una turbina de gas y una turbina de vapor. En este ciclo el rendimiento que obtenemos es del 45%.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de un Ciclo Combinado:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesCicloCombinado2019();
            break;

            case 2:
                printMayorValorMesCicloCombinado2020();
            break;

            case 3:
                printMayorValorMesCicloCombinado2019_2020();
            break;

            case 4:
                printMenorValorMesCicloCombinado2019();
            break;

            case 5:
                printMenorValorMesCicloCombinado2020();
            break;

            case 6:
                 printMenorValorMesCicloCombinado2019_2020();
            break;

            case 7:
                 printMediaAnualCicloCombinado2019();
            break;

            case 8:
                 printMediaAnualCicloCombinado2020();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   


} 



void printCogeneracion2019_2020(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la obtencion de energia a partir de la Cogeneracion!\n\n");
        printf("Como curiosidad usted debe saber... que la Cogeneracion mejora aún más la eficiencia energética aprovechando el calor de\
la corriente de salida de la turbina de vapor. Este calor puede ser utilizado, por ejemplo,\
para  calentar agua de uso industrial,\ o para la generación de agua caliente sanitaria.\
En este tipo de fuente de energia conseguimos rendimientos cercanos al 80%.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de la Cogeneraciono:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2019 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2020 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2019 y 2020 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2019\n\t8. Media Anual 2020\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesCogeneracion2019();
            break;

            case 2:
               printMayorValorMesCogeneracion2020();
            break;

            case 3:
                printMayorValorMesCogeneracion2019_2020();
            break;

            case 4:
                printMenorValorMesCogeneracion2019();
            break;

            case 5:
                printMenorValorMesCogeneracion2020();
            break;

            case 6:
                 printMenorValorMesCogeneracion2019_2020();
            break;

            case 7:
                 printMediaAnualCogeneracion2019();
            break;

            case 8:
                 printMediaAnualCogeneracion2020();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   


} 


void printEnergias2017_2018(){
 int modalidad;

    do{
    printf("\nDesea continuar con el acceso a distintas Energias:\n\n");
    printf("\t1. Continuar\n\t2. Atras\n");
    scanf("%i", &modalidad);
    fflush(stdin);
    system("cls");
    }

    while (modalidad !=  1 && modalidad != 2);
        switch (modalidad){
            case 1:
                printTiposEnergias2017_2018();
            break;

            case 2:
            system("cls");
            menuPrincipal();

            break;
        }

}



void printTiposEnergias2017_2018(){
    int seleccion;

    do{
    printf("\nSeleccione el tipo de Energia de la que desee obtener mayor informacion:\n\n");
    printf("\t1. No Renovable\n\t2. Renovable\n\t3. Residuos\n\t4. Generacion Total\n\t5. Atras\n");
    scanf("%i", &seleccion);
    fflush(stdin);
    system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5);
        switch (seleccion){
            case 1:
                printTiposEnergiasNoRenovables2017_2018();
            break;

            case 2:
                printTiposEnergiasRenovables2017_2018();
            break;

            case 3:
                printResiduos2017_2018();
            break;

            case 4:
                printGeneracionTotal2017_2018();
            break;

            case 5:
                system("cls");
                menuPrincipal();
            break;

        }  

}  



void printTiposEnergiasNoRenovables2017_2018(){
    int modalidad;

    do{
        printf("\nSeleccione el tipo de Energia No Renovable de la que desee obtener mayor informacion:\n\n");
        printf("\t1. Combustibles Fosiles\n\t2. Nuclear\n\t3. Motores Diesel\n\t4. Atras\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4);
        switch (modalidad){
            case 1:
                printCombustiblesFosiles2017_2018();
            break;

            case 2:
                printNuclear2017_2018();
            break;

            case 3:
                printMotoresDiesel2017_2018();
            break;

            case 4:
                system("cls");
                printTiposEnergias2017_2018();
            break;

        }   

}  



void printNuclear2017_2018(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado Energia Nuclear!\n\n");
        printf("Como curiosidad usted debe saber... que la energia nuclear se divide en dos procesos distintos, uno, la fusion nuclear y,\
 el otro, la fision nuclear. El mas empleado es la fision nuclear que consiste en la desintegracion de ciertos atomos\
 con neutrones. Esta reaccion libera una gran cantidad de energia utilitaria. El proceso de fision nuclear es un proceso\
 limpio. La unica parte donde se produce contaminacion, es en el proceso de desulfuracion del uranio.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Nuclear:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                 printMayorValorMesNuclear2017();
            break;

            case 2:
                printMayorValorMesNuclear2018();
            break;

            case 3:
                printMayorValorMesNuclear2017_2018();
            break;

            case 4:
                printMenorValorMesNuclear2017();
            break;

            case 5:
                printMenorValorMesNuclear2018();
            break;

            case 6:
                 printMenorValorMesNuclear2017_2018();
            break;

            case 7:
                 printMediaAnualNuclear2021();
            break;

            case 8:
                 printMediaAnualNuclear2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasNoRenovables2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printMotoresDiesel2017_2018(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado Motores Diesel!\n\n");
        printf("Como curiosidad usted debe saberprintf los motores diesel para estos casos son utilizados en Grupos Electrogenos como medida auxiliar\
 de fuente de energia en caso de ausencia de la red principal en determinado momento. Es decir, Pueden entrar en funcionamiento\
 cuando se produce una interrupción en la red eléctrica principal o cuando se requiere energía adicional durante momentos de alta demanda.\n\n");

        printf("\nSeleccione que mas desea conocer sobre los Motores Diesel:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

     while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesMotoresDiesel2017();
            break;

            case 2:
                printMayorValorMesMotoresDiesel2018();
            break;

            case 3:
                printMayorValorMesMotoresDiesel2017_2018();
            break;

            case 4:
                printMenorValorMesMotoresDiesel2017();
            break;

            case 5:
                printMenorValorMesMotoresDiesel2018();
            break;

            case 6:
                 printPeorValorMesMotoresDiesel2017_2018();
            break;

            case 7:
                 printMediaAnualMotoresDiesel2017();
            break;

            case 8:
                 printMediaAnualMotoresDiesel2018();
            break;

            case 9:
                system("cls");
                printTiposEnergiasNoRenovables2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printTiposEnergiasRenovables2017_2018(){
    int modalidad;

    do{
        printf("\nSeleccione el tipo de Energia Renovable de la que desee obtener mayor informacion:\n\n");
        printf("\t1. Hidraulica\n\t2. Hidroeolica\n\t3. Eolica\n\t4. Solar Fotovoltaica\n\t5. Solar Termica\n\t6. Otras Renovables\n\t7. Atras\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7);
        switch (modalidad){
            case 1:
                printHidraulica2017_2018();
            break;

            case 2:
                printHidroeolica2017_2018();
            break;

            case 3:
                printEolica2017_2018();
            break;

            case 4:
                printSolarFotovoltaica2017_2018();
            break;

            case 5:
                printSolarTermica2017_2018();
            break;

            case 6:
                printOtrasEnergiasRenovables2017_2018();
            break;

            case 7:
                system("cls");
                printTiposEnergias2017_2018();
            break;

        }   

}  



void printHidraulica2017_2018(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Hidraulica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Hidraulica es aquella que aprovecha la velocidad (energia cinetica) y la\
 altura (energia potencial) de las corrientes de agua en un punto de caude del rio para convertirlo en energia mecanica\
 (debido a una turbina hidraulica) y, posteriormente, en electricidad con un generador.\n\n");


        printf("\nSeleccione que mas desea conocer sobre la Energia Hidraulica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesHidraulica2017();
            break;

            case 2:
                printMayorValorMesHidraulica2018();
            break;

            case 3:
                printMayorValorMesHidraulica2017_2018();
            break;

            case 4:
                printMenorValorMesHidraulica2017();
            break;

            case 5:
                printMenorValorMesHidraulica2018();
            break;

            case 6:
                 printMenorValorMesHidraulica2017_2018();
            break;

            case 7:
                 printMediaAnualHidraulica2017();
            break;

            case 8:
                 printMediaAnualHidraulica2018();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printHidroeolica2017_2018(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Hidroeolica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Hidroeolica combina el uso de aerogeneradores y turbinas hidraulicas\
 para aprovechar tanto la energia del viento como la del agua en movimiento. Esta forma de generacion de energia se utiliza principalmente\
 en zonas costeras o en el mar, donde hay vientos fuertes y corrientes de agua constantes.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Hidroeolica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

   while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesHidroeolica2017();
            break;

            case 2:
                printMayorValorMesHidroeolica2018();
            break;

            case 3:
                printMayorValorMesHidroeolica2017_2018();
            break;

            case 4:
                printMenorValorMesHidroeolica2017();
            break;

            case 5:
                printMenorValorMesHidroeolica2018();
            break;

            case 6:
                 printMenorValorMesHidroeolica2017_2018();
            break;

            case 7:
                 printMediaAnualHidroeolica2017();
            break;

            case 8:
                 printMediaAnualHidroeolica2018();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;


        }  

} 



void printEolica2017_2018(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Eolica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Eolica transforma la energia cinetica del viento en energia mecanica mediante\
 las turbinas eolicas. Dicha energia mecanica aplicada a un alternador convierte la energia en energia electrica. Existe la energia eolica\
 terrestre y marina. A esta ultima se le conoce como 'offshore'.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Eolica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

   while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesEolica2017();
            break;

            case 2:
                printMayorValorMesEolica2018();
            break;

            case 3:
                printMayorValorMesEolica2017_2018();
            break;

            case 4:
                printMenorValorMesEolica2017();
            break;

            case 5:
                printMenorValorMesEolica2018();
            break;

            case 6:
                 printMenorValorMesEolica2017_2018();
            break;

            case 7:
                 printMediaAnualEolica2017();
            break;

            case 8:
                 printMediaAnualEolica2018();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printSolarFotovoltaica2017_2018(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Solar Fotovoltaica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Fotovoltaica sufre una transformacion directa de la radiacion solar en energia\
 electrica mediante el efecto fotoelectrico, que consiste en la emision de electrones de un material cuando se ilumina\
 con la radiacion solar.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Solar Fotovoltaica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesSolarFotovoltaica2017();
            break;

            case 2:
                printMayorValorMesSolarFotovoltaica2018();
            break;

            case 3:
                printMayorValorMesSolarFotovoltaica2017_2018();
            break;

            case 4:
                printMenorValorMesSolarFotovoltaica2017();
            break;

            case 5:
                printMenorValorMesSolarFotovoltaica2018();
            break;

            case 6:
                 printMenorValorMesSolarFotovoltaica2017_2018();
            break;

            case 7:
                 printMediaAnualSolarFotovoltaica2017();
            break;

            case 8:
                 printMediaAnualSolarFotovoltaica2018();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printSolarTermica2017_2018(){
     int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Solar Termica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Solar Termica genera electricidad a partir de la energia recogida en un fluido\
 que se calienta mediante la energia solar. Si el fluido caliente es vapor o aire, debemos de tener en cuenta que el agua se evapora\
 gracias a la energia solar y dicho vapor es enviado a una turbina conectada a un generador, produciendo energia electrica.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Solar Termica:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesSolarTermica2017();
            break;

            case 2:
                printMayorValorMesSolarTermica2018();
            break;

            case 3:
                printMayorValorMesSolarTermica2017_2018();
            break;

            case 4:
                printMenorValorMesSolarTermica2017();
            break;

            case 5:
                printMenorValorMesSolarTermica2018();
            break;

            case 6:
                 printMenorValorMesSolarTermica2017_2018();
            break;

            case 7:
                 printMediaAnualSolarTermica2017();
            break;

            case 8:
                 printMediaAnualSolarTermica2018();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printOtrasEnergiasRenovables2017_2018(){
     int seleccion;

    do{
        printf("\nUsted ha seleccionado otras Energias Renovables!\n\n");
        printf("Como curiosidad usted debe saber... Cuando nos referimos a otras Energias Renovables podemos englobar energias como\
 la geotermica, mareomotriz, energias procedentes de biomasa o biocombustibles.\n\n");

        printf("\nSeleccione que mas desea conocer sobre otras Energias Renovables:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7 && seleccion != 8 && seleccion != 9 && seleccion != 10);
        switch (seleccion){
            case 1:
                printMayorValorMesOtrasRenovables2017();
            break;

            case 2:
                printMayorValorMesOtrasRenovables2018();
            break;

            case 3:
                printMayorValorMesOtrasRenovables2017_2018();
            break;

            case 4:
                printMenorValorMesOtrasRenovables2017();
            break;

            case 5:
                printMenorValorMesOtrasRenovables2018();
            break;

            case 6:
                 printMenorValorMesOtrasRenovables2017_2018();
            break;

            case 7:
                 printMediaAnualOtrasRenovables2017();
            break;

            case 8:
                 printMediaAnualOtrasRenovables2018();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

} 



void printResiduos2017_2018(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Residuos!\n");
        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Residuos:\n");
        printf("\n\t1. Residuos Renovables\n\t2. Residuos No Renovables\n\t3. Atras\n");

        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3);
        switch (modalidad){
            case 1:
                printResiduosRenovables2017_2018();
            break;

            case 2:
                printResiduosNoRenovables2017_2018();
            break;

            case 3:
                system("cls");
                printTiposEnergias2017_2018();
            break;

        }   

} 


void printResiduosRenovables2017_2018(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Residuos Renovables!\n\n");
        printf("Como curiosidad usted debe saber...  Estos residuos consisten en materiales organicos que se generan como subproductos de\
actividades agricolas, forestales, agroindustriales y de procesamiento de alimentos, asi como de residuos solidos\
urbanos y lodos de depuradoras. La biomasa se considera renovable porque proviene de fuentes biologicas y puede \
regenerarse a traves de ciclos naturales. La biomasa se utiliza principalmente para la generacion de electricidad\
a traves de procesos de combustion o gasificacion\n\n");

        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Residuos Renovables:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesResiduosRenovables2017();
            break;

            case 2:
                printMayorValorMesResiduosRenovables2018();
            break;

            case 3:
                printMayorValorMesResiduosRenovables2017_2018();
            break;

            case 4:
                printMenorValorMesResiduosRenovables2017();
            break;

            case 5:
                printMenorValorMesResiduosRenovables2018();
            break;

            case 6:
                 printMenorValorMesResiduosRenovables2017_2018();
            break;

            case 7:
                 printMediaAnualResiduosRenovables2017();
            break;

            case 8:
                 printMediaAnualResiduosRenovables2018();
            break;

            case 9:
                system("cls");
                printResiduos2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   
}

void printResiduosNoRenovables2017_2018()
{
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Residuos No Renovables!\n\n");
        printf("Como curiosidad usted debe saber... Los residuos no renovables se refieren a los materiales que no son de origen\
 biologico y no se regeneran a traves de ciclos naturales en un periodo de tiempo relevante. Estos residuos\
 provienen principalmente de la actividad industrial y se caracterizan por ser recursos finitos. Aunque no se\
 consideran fuentes de energia sostenibles a largo plazo, se utilizan en ciertos casos como una alternativa\
 para la generacion de energia.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Residuos No Renovables:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

     while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad)
        {
            case 1:
                printMayorValorMesResiduosNoRenovables2017();
            break;

            case 2:
                printMayorValorMesResiduosNoRenovables2018();
            break;

            case 3:
                printMayorValorMesResiduosNoRenovables2017_2018();
            break;

            case 4:
                printMenorValorMesResiduosNoRenovables2017();
            break;

            case 5:
                printMenorValorMesResiduosNoRenovables2018();
            break;

            case 6:
                 printMenorValorMesResiduosNoRenovables2017_2018();
            break;

            case 7:
                 printMediaAnualResiduosNoRenovables2017();
            break;

            case 8:
                 printMediaAnualResiduosNoRenovables2018();
            break;

            case 9:
                system("cls");
                printResiduos2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   
}




void printGeneracionTotal2017_2018(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la Generacion Total!\n\n");
        printf("Como curiosidad usted debe saber... En este punto se recoge la suma de todas y cada una de las fuentes de generacion distintas\
 que se registran por Red Electrica Espanola (No Renovables, Renovables, Otra Renovables y Residuos).\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Generacion Total:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesGeneracionTotal2017();
            break;

            case 2:
                printMayorValorMesGeneracionTotal2018();
            break;

            case 3:
                printMayorValorMesGeneracionTotal2017_2018();
            break;

            case 4:
                printMenorValorMesGeneracionTotal2017();
            break;

            case 5:
                printMenorValorMesGeneracionTotal2018();
            break;

            case 6:
                 printMenorValorMesGeneracionTotal2017_2018();
            break;

            case 7:
                 printMediaAnualGeneracionTotal2017();
            break;

            case 8:
                 printMediaAnualGeneracionTotal2018();
            break;

            case 9:
                system("cls");
                printTiposEnergias2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   

} 



void printCombustiblesFosiles2017_2018(){
    int seleccion;

    do{
        printf("\nSeleccione el tipo de Combustible Fosil del que desee obtener mayor informacion:\n\n");
        printf("\t1. Carbon\n\t2. Fuel + Gas Natural\n\t3. Turbina Gas\n\t4. Turbina Vapor\n\t5. Ciclo Combinado\n\t6. Cogeneracion\n\t7. Atras\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7);
        switch (seleccion){
            case 1:
                printCarbon2017_2018();
            break;

            case 2:
                printFuelGas2017_2018();
            break;

            case 3:
                printTurbinaGas2017_2018();
            break;

            case 4:
                printTurbinaVapor2017_2018();
            break;

            case 5:
                printCicloCombinado2017_2018();
            break;

            case 6:
                printCogeneracion2017_2018();
            break;

            case 7:
                system("cls");
                printTiposEnergiasNoRenovables2017_2018();
            break;


        } 

} 



void printCarbon2017_2018(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Carbon!\n\n");
        printf("Como curiosidad usted debe saber... que el carbon es el combustible fosil mas sucio y ;a gran parte de su consumo mundial\
 se utiliza para la fundicion del hierro y como componente esencial del acero. Tambien se usa con gran frecuencia en la\
 industria quimica y petroquimica. EEUU es uno de los paises con mayores reservas de carbon junto con Asia. El carbon mas\
 habitual es la antracita.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Carbon:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesCarbon2017();
            break;

            case 2:
                printMayorValorMesCarbon2018();
            break;

            case 3:
                printMayorValorMesCarbon2017_2018();
            break;

            case 4:
                printMenorValorMesCarbon2017();
            break;

            case 5:
                printMenorValorMesCarbon2018();
            break;

            case 6:
                 printMenorValorMesCarbon2017_2018();
            break;

            case 7:
                 printMediaAnualCarbon2017();
            break;

            case 8:
                 printMediaAnualCarbon2018();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   

} 



void printFuelGas2017_2018(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Petroleo y Gas Natural!\n\n");
        printf("Como curiosidad usted debe saber... que el petroleo una mezcla de hidrocarburos saturados en estado solido, liquido\
 o gaseoso que se encuentran en yacimientos naturales. El petroleo se lleva a un proceso de destilacion fraccionada\
 para obetener distintos tipos de carburantes. Las mayores reservas de petroleo las podemos encontrar Oriente medio.\
 En el caso del gas natural, debemos de destacar que el componente mayoritario es el metano. Tambien, las mayores\
 reservas de gas antural las encontramos en oriente medio.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Fuel-Gas:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesFuelGas2017();
            break;

            case 2:
                printMayorValorMesFuelGas2018();
            break;

            case 3:
                printMayorValorMesFuelGas2017_2018();
            break;

            case 4:
                printMenorValorMesFuelGas2017();
            break;

            case 5:
                printMenorValorMesFuelGas2018();
            break;

            case 6:
                 printMenorValorMesFuelGas2017_2018();
            break;

            case 7:
                 printMediaAnualFuelGas2017();
            break;

            case 8:
                 printMediaAnualFuelGas2018();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   


} 



void printTurbinaGas2017_2018(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la obtencion de energia a partir de la Turbina de Gas!\n\n");
        printf("Como curiosidad usted debe saber... primero se usa un combustible fosil para realizar una conversion de energia quimica\
 , por ejemplo, del carbon en energia termica. Para ello, se introduce el carbon en el interio de un horno y dicho vapor\
 o gas generado se hace pasar por una turbina que se encargara de la conversion de energia termica en energia mecanica.\
 Dicha energia mecanica de la turbina se convierte posteriormente en energia electrica al pasar por un generador electrico.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de la Turbina de Gas:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesTurbinaGas2017();
            break;

            case 2:
                printMayorValorMesTurbinaGas2018();
            break;

            case 3:
                printMayorValorMesTurbinaGas2017_2018();
            break;

            case 4:
                printMenorValorMesTurbinaGas2017();
            break;

            case 5:
                printMenorValorMesTurbinaGas2018();
            break;

            case 6:
                 printMenorValorMesTurbinaGas2017_2018();
            break;

            case 7:
                 printMediaAnualTurbinaGas2017();
            break;

            case 8:
                 printMediaAnualTurbinaGas2018();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;


        }   


} 



void printTurbinaVapor2017_2018(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la obtencion de energia a partir de la Turbina de Vapor!\n\n");
        printf("Como curiosidad usted debe saber... la turbina de vapor compone el ciclo de Rankine. Dicho ciclo podemos separarlo en 4 etapas.\
 La etapa 1-2 donde se produce una compresion isoentropica de agua liquida en la bomba. La presion del agua aumenta\
 para ser introducida en la caldera. En la etapa 2-3, manteniendp la presion, el agua se calienta hasta la temperatura\
 de ebullicion, se evapora y despues se aumenta la temperatura del vapor de agua. En la etapa 3-4, se produce la expansion\
 isoentropica en la turbina por lo que el agua se descomprime provocando el movimiento de la turbina y se enfria hasta llegar a\
 la temperatura del condesador. Por ultimo, tenemos la etapa 4-1 donde el agua se enfria y vuelve a la bomba para iniciar,\
 de nuevo, el ciclo. El rendimiento maximo en un ciclo de Rankine es del 30%\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de la Turbina de Vapor:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesTurbinaVapor2017();
            break;

            case 2:
                printMayorValorMesTurbinaVapor2018();
            break;

            case 3:
                printMayorValorMesTurbinaVapor2017_2018();
            break;

            case 4:
                printMenorValorMesTurbinaVapor2017();
            break;

            case 5:
                printMenorValorMesTurbinaVapor2018();
            break;

            case 6:
                 printMenorValorMesTurbinaVapor2017_2018();
            break;

            case 7:
                 printMediaAnualTurbinaVapor2017();
            break;

            case 8:
                 printMediaAnualTurbinaVapor2018();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   


} 



void printCicloCombinado2017_2018(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la obtencion de energia a partir de un Ciclo Combinado!\n\n");
        printf("Como curiosidad usted debe saber... En este ciclo se decide sumar a la central termica una turbina de gas para producir\
 energia adicional a aprtir de los gases obtenidos en la combustion de los combustibles fosiles. Es decir, juntamos\
 una turbina de gas y una turbina de vapor. En este ciclo el rendimiento que obtenemos es del 45%.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de un Ciclo Combinado:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad){
            case 1:
                printMayorValorMesCicloCombinado2017();
            break;

            case 2:
                printMayorValorMesCicloCombinado2018();
            break;

            case 3:
                printMayorValorMesCicloCombinado2017_2018();
            break;

            case 4:
                printMenorValorMesCicloCombinado2017();
            break;

            case 5:
                printMenorValorMesCicloCombinado2018();
            break;

            case 6:
                 printMenorValorMesCicloCombinado2017_2018();
            break;

            case 7:
                 printMediaAnualCicloCombinado2017();
            break;

            case 8:
                 printMediaAnualCicloCombinado2018();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }   


} 



void printCogeneracion2017_2018()
{
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la obtencion de energia a partir de la Cogeneracion!\n\n");
        printf("Como curiosidad usted debe saber... que la Cogeneracion mejora aún más la eficiencia energética aprovechando el calor de\
 la corriente de salida de la turbina de vapor. Este calor puede ser utilizado, por ejemplo,\
 para  calentar agua de uso industrial,\ o para la generación de agua caliente sanitaria.\
 En este tipo de fuente de energia conseguimos rendimientos cercanos al 80%.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de la Cogeneraciono:\n");
        printf("\n\t1. Mayor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t3. Mayor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual 2017 (Mes de Produccion y Dato)\n\t5. Peor Valor de Generacion Mensual 2018 (Mes de Produccion y Dato)\n\t6. Peor Valor de Generacion Mensual entre 2017 y 2018 (Mes de Produccion y Dato)\n");
        printf("\t7. Media Anual 2017\n\t8. Media Anual 2018\n\t9. Atras\n\t10. Volver al Menu Principal\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7 && modalidad != 8 && modalidad != 9 && modalidad != 10);
        switch (modalidad)
        {
            case 1:
                printMayorValorMesCogeneracion2017();
            break;

            case 2:
                printMayorValorMesCogeneracion2018();
            break;

            case 3:
                printMayorValorMesCogeneracion2017_2018();
            break;

            case 4:
                printMenorValorMesCogeneracion2017();
            break;

            case 5:
                printMenorValorMesCogeneracion2018();
            break;

            case 6:
                 printMenorValorMesCogeneracion2017_2018();
            break;

            case 7:
                 printMediaAnualCogeneracion2017();
            break;

            case 8:
                 printMediaAnualCogeneracion2018();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2017_2018();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        }  

    } 





void printAleatorioAnualidad()
{
    int numero_aleatorioAnual;

    srand(time(NULL));
    numero_aleatorioAnual = 1 + rand() % 3;


    if(numero_aleatorioAnual == 1)
    {
        int modalidad;

        do{
        printf("\nLa Anualidad seleccionada ha sido 2021-2022. Desea continuar con el acceso aleatorio de Energias?\n\n");
        printf("\t1. Continuar\n\t2. Atras\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");

        }

        while (modalidad !=  1 && modalidad != 2);
            switch (modalidad){
                case 1:
                    printAleatorioEnergia();
                break;

                case 2:
                    system("cls");
                    menuPrincipal();
                break;
            }

    }



    if (numero_aleatorioAnual == 2)
    {
        int seleccion;

        do{
        printf("\nLa Anualidad seleccionada ha sido 2019-2020. Desea continuar con el acceso aleatorio de Energias?\n\n");
        printf("\t1. Continuar\n\t2. Atras\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");

        }

        while (seleccion !=  1 && seleccion != 2);
            switch (seleccion)
            {
                case 1:
                    printAleatorioEnergia2019_2020();
                break;

                case 2:
                    system("cls");
                    menuPrincipal();
                break;
            }

    }

    else{
        int seleccion;

        do{
        printf("\nLa Anualidad seleccionada ha sido 2017-2018. Desea continuar con el acceso aleatorio de Energias?\n\n");
        printf("\t1. Continuar\n\t2. Atras\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");

        }

        while (seleccion !=  1 && seleccion != 2);
            switch (seleccion){
                case 1:
                    printAleatorioEnergia2017_2018();
                break;

                case 2:
                    system("cls");
                    menuPrincipal();
                break;
            }
    }

}



void printAleatorioEnergia()
{
    int numero_aleatorioEnergia;

    do{
      srand(time(NULL));
        numero_aleatorioEnergia = 1 + rand() % 17;
    }

    while(numero_aleatorioEnergia == 2);



        switch(numero_aleatorioEnergia){
            case 1:
                printCarbon();
            break;


            case 2:
                printFuelGas();
            break;


            case 3:
                printTurbinaGas();
            break;


            case 4:
                printTurbinaVapor();
            break;


            case 5:
                printCicloCombinado();
            break;


            case 6:
                printCogeneracion();
            break;


            case 7:
                printGeneracionTotal();
            break;


            case 8:
                printNuclear();
            break;


            case 9:
                printMotoresDiesel();
            break;


            case 10:
                printHidraulica();
            break;


            case 11:
                printHidroeolica();
            break;


            case 12:
                printEolica();
            break;


            case 13:
                printSolarFotovoltaica();
            break;


            case 14:
                printSolarTermica();
            break;


            case 15:
                printOtrasEnergiasRenovables();
            break;


            case 16:
                printResiduosRenovables();
            break;


            case 17:
                printResiduosNoRenovables();
            break;

        }   


} 


void printAleatorioEnergia2019_2020(){
    int numero_aleatorioEnergia;

    do{
      srand(time(NULL));
        numero_aleatorioEnergia = 1 + rand() % 17;
    }

    while(numero_aleatorioEnergia == 2);



        switch(numero_aleatorioEnergia){
            case 1:
                printCarbon2019_2020();
            break;


            case 2:
                printFuelGas2019_2020();
            break;


            case 3:
                printTurbinaGas2019_2020();
            break;


            case 4:
                printTurbinaVapor2019_2020();
            break;


            case 5:
                printCicloCombinado2019_2020();
            break;


            case 6:
                printCogeneracion2019_2020();
            break;


            case 7:
                printGeneracionTotal2019_2020();
            break;


            case 8:
                printNuclear2019_2020();
            break;


            case 9:
                printMotoresDiesel2019_2020();
            break;


            case 10:
                printHidraulica2019_2020();
            break;


            case 11:
                printHidroeolica2019_2020();
            break;


            case 12:
                printEolica2019_2020();
            break;


            case 13:
                printSolarFotovoltaica2019_2020();
            break;


            case 14:
                printSolarTermica2019_2020();
            break;


            case 15:
                printOtrasEnergiasRenovables2019_2020();
            break;


            case 16:
                printResiduosRenovables2019_2020();
            break;


            case 17:
                printResiduosNoRenovables2019_2020();
            break;

        }   


} 


void printAleatorioEnergia2017_2018(){
    int numero_aleatorioEnergia;

    do{
      srand(time(NULL));
        numero_aleatorioEnergia = 1 + rand() % 17;
    }

    while(numero_aleatorioEnergia == 2);



        switch(numero_aleatorioEnergia){
            case 1:
                printCarbon2017_2018();
            break;


            case 2:
                printFuelGas2017_2018();
            break;


            case 3:
                printTurbinaGas2017_2018();
            break;


            case 4:
                printTurbinaVapor2017_2018();
            break;


            case 5:
                printCicloCombinado2017_2018();
            break;


            case 6:
                printCogeneracion2017_2018();
            break;


            case 7:
                printGeneracionTotal2017_2018();
            break;


            case 8:
                printNuclear2017_2018();
            break;


            case 9:
                printMotoresDiesel2017_2018();
            break;


            case 10:
                printHidraulica2017_2018();
            break;


            case 11:
                printHidroeolica2017_2018();
            break;


            case 12:
                printEolica2017_2018();
            break;


            case 13:
                printSolarFotovoltaica2017_2018();
            break;


            case 14:
                printSolarTermica2017_2018();
            break;


            case 15:
                printOtrasEnergiasRenovables2017_2018();
            break;


            case 16:
                printResiduosRenovables2017_2018();
            break;


            case 17:
                printResiduosNoRenovables2017_2018();
            break;

        }   


}

