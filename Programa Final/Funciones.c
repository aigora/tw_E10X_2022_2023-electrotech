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
    float datos[23]; //porque hay dos años, es decir 24 meses
}Energia;  //vector de estructuras (LO TENGO QUE DECLARAR EN LA FUNCION VOID)

void menuPrincipal(){
    int seleccion;

    do{
    printf("\nBienvenido a la Base de Datos!\nElija una de las opciones siguientes:\n\n");
    printf("\t1. Tipos Energias Anuales 2021-2022.\n\t2. Tipos Energias Anuales 2019-2020.\n\t3. Tipos Energias Anuales 2017-2018.\n\t4. Seleccion Aleatoria Anual y de Energia.\n\t5. Salir de la Base de Datos.\n");
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
                printf("\n\tVuelva Pronto!\n");
                exit(0);
             break;

        } // Cierre switch seleccion.

} // Cierre menuPrincipal.

//Inicio Año 2021-2022

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

        } // Cierre switch Seleccion

} // Cierre printTiposEnergias



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

        } // Cierre switch modalidad

} // Cierre printTiposEnergiasNoRenovables



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
                //printMayorValorMesNuclear2021();
            break;

            case 2:
                //printMayorValorMesNuclear2022();
            break;

            case 3:
                //printMayorValorMesNuclear2021_2022();
            break;

            case 4:
                //printMenorValorMesNuclear2021();
            break;

            case 5:
                //printMenorValorMesNuclear2022();
            break;

            case 6:
                 //printMenorValorMesNuclear2021_2022();
            break;

            case 7:
                 //printMediaAnualNuclear2021();
            break;

            case 8:
                 //printMediaAnualNuclear2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasNoRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printNuclear



void printMotoresDiesel(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado Motores Diesel!\n\n");
        printf("Como curiosidad usted debe saber... los motores diesel para estos casos son utilizados en Grupos Electrogenos como medida auxiliar\
 de fuente de energia en caso de ausencia de la red principal en determinado momento. Es decir, Pueden entrar en funcionamiento\
 cuando se produce una interrupción en la red eléctrica principal o cuando se requiere energía adicional durante momentos de alta demanda.\n\n");

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
                //printMayorValorMesMotoresDiesel2021();
            break;

            case 2:
                //printMayorValorMesMotoresDiesel2022();
            break;

            case 3:
                //printMayorValorMesMotoresDiesel2021_2022();
            break;

            case 4:
                //printMenorValorMesMotoresDiesel2021();
            break;

            case 5:
                //printMenorValorMesMotoresDiesel2022();
            break;

            case 6:
                 //printPeorValorMesMotoresDiesel2021_2022();
            break;

            case 7:
                 //printMediaAnualMotoresDiesel2021();
            break;

            case 8:
                 //printMediaAnualMotoresDiesel2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasNoRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printMotoresDiesel



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

        } // Cierre switch modalidad

} // Cierre TiposEnergiasRenovables



void printHidraulica(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado la Energia Hidraulica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Hidraulica es aquella que aprovecha la velocidad (energia cinetica) y la\
 altura (energia potencial) de las corrientes de agua en un punto de caude del rio para convertirlo en energia mecanica\
 (debido a una turbina hidraulica) y, posteriormente, en electricidad con un generador.\n\n");

 //VOY A TOCAR DESDE AQUI

/* 04/05/2023

 printf("Los datos de la energía hidráulica son los siguientes:\n");

 Fichero1(1); //Te lee el fichero y almacena los datos...

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
                //printMayorValorMesHidraulica2021();
            break;

            case 2:
                //printMayorValorMesHidraulica2022();
            break;

            case 3:
                //printMayorValorMesHidraulica2021_2022();
            break;

            case 4:
                //printMenorValorMesHidraulica2021();
            break;

            case 5:
                //printMenorValorMesHidraulica2022();
            break;

            case 6:
                 //printMenorValorMesHidraulica2021_2022();
            break;

            case 7:
                 //printMediaAnualHidraulica2021();
            break;

            case 8:
                 //printMediaAnualHidraulica2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printHidraulica



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
                //printMayorValorMesHidroeolica2021();
            break;

            case 2:
                //printMayorValorMesHidroeolica2022();
            break;

            case 3:
                //printMayorValorMesHidroeolica2021_2022();
            break;

            case 4:
                //printMenorValorMesHidroeolica2021();
            break;

            case 5:
                //printMenorValorMesHidroeolica2022();
            break;

            case 6:
                 //printMenorValorMesHidroeolica2021_2022();
            break;

            case 7:
                 //printMediaAnualHidroeolica2021();
            break;

            case 8:
                 //printMediaAnualHidroeolica2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;


        } // Cierre switch seleccion

} //Cierre printHidroeolica



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
                //printMayorValorMesEolica2022();
            break;

            case 3:
                //printMayorValorMesEolica2021_2022();
            break;

            case 4:
                printMenorValorMesEolica2021();
            break;

            case 5:
                //printMenorValorMesEolica2022();
            break;

            case 6:
                 //printMenorValorMesEolica2021_2022();
            break;

            case 7:
                 //printMediaAnualEolica2021();
            break;

            case 8:
                 //printMediaAnualEolica2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printEolica



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
                //printMayorValorMesSolarFotovoltaica2021();
            break;

            case 2:
                //printMayorValorMesSolarFotovoltaica2022();
            break;

            case 3:
                //printMayorValorMesSolarFotovoltaica2021_2022();
            break;

            case 4:
                //printMenorValorMesSolarFotovoltaica2021();
            break;

            case 5:
                //printMenorValorMesSolarFotovoltaica2022();
            break;

            case 6:
                 //printMenorValorMesSolarFotovoltaica2021_2022();
            break;

            case 7:
                 //printMediaAnualSolarFotovoltaica2021();
            break;

            case 8:
                 //printMediaAnualSolarFotovoltaica2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printFotovoltaica



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
                //printMayorValorMesSolarTermica2021();
            break;

            case 2:
                //printMayorValorMesSolarTermica2022();
            break;

            case 3:
                //printMayorValorMesSolarTermica2021_2022();
            break;

            case 4:
                //printMenorValorMesSolarTermica2021();
            break;

            case 5:
                //printMenorValorMesSolarTermica2022();
            break;

            case 6:
                 //printMenorValorMesSolarTermica2021_2022();
            break;

            case 7:
                 //printMediaAnualSolarTermica2021();
            break;

            case 8:
                 //printMediaAnualSolarTermica2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printSolarTermica



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
                //printMayorValorMesOtrasRenovables2021();
            break;

            case 2:
                //printMayorValorMesOtrasRenovables2022();
            break;

            case 3:
                //printMayorValorMesOtrasRenovables2021_2022();
            break;

            case 4:
                //printMenorValorMesOtrasRenovables2021();
            break;

            case 5:
                //printMenorValorMesOtrasRenovables2022();
            break;

            case 6:
                 //printMenorValorMesOtrasRenovables2021_2022();
            break;

            case 7:
                 //printMediaAnualOtrasRenovables2021();
            break;

            case 8:
                 //printMediaAnualOtrasRenovables2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printOtrasEnergiasRenovables



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

        } // Cierre switch modalidad

} //Cierre printResiduos


void printResiduosRenovables(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Residuos Renovables!\n\n");
        printf("Como curiosidad usted debe saber... Estos residuos consisten en materiales organicos que se generan como subproductos de\
 actividades agricolas, forestales, agroindustriales y de procesamiento de alimentos, asi como de residuos solidos\
 urbanos y lodos de depuradoras. La biomasa se considera renovable porque proviene de fuentes biologicas y puede \
 regenerarse a traves de ciclos naturales. La biomasa se utiliza principalmente para la generacion de electricidad\
 a traves de procesos de combustion o gasificacion.\n\n");

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
                //printMayorValorMesResiduosRenovables2021();
            break;

            case 2:
                //printMayorValorMesResiduosRenovables2022();
            break;

            case 3:
                //printMayorValorMesResiduosRenovables2021_2022();
            break;

            case 4:
                //printMenorValorMesResiduosRenovables2021();
            break;

            case 5:
                //printMenorValorMesResiduosRenovables2022();
            break;

            case 6:
                 //printMenorValorMesResiduosRenovables2021_2022();
            break;

            case 7:
                 //printMediaAnualResiduosRenovables2021();
            break;

            case 8:
                 //printMediaAnualResiduosRenovables2022();
            break;

            case 9:
                system("cls");
                printResiduos();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad
}

void printResiduosNoRenovables(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Residuos No Renovables!\n\n");
        printf("Como curiosidad usted debe saber... Los residuos no renovables se refieren a los materiales que no son de origen\
 biologico y no se regeneran a traves de ciclos naturales en un periodo de tiempo relevante. Estos residuos\
 provienen principalmente de la actividad industrial y se caracterizan por ser recursos finitos. Aunque no se\
 consideran fuentes de energia sostenibles a largo plazo, se utilizan en ciertos casos como una alternativa\
 para la generacion de energia.\n\n");

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
                //printMayorValorMesResiduosNoRenovables2021();
            break;

            case 2:
                //printMayorValorMesResiduosNoRenovables2022();
            break;

            case 3:
                //printMayorValorMesResiduosNoRenovables2021_2022();
            break;

            case 4:
                //printMenorValorMesResiduosNoRenovables2021();
            break;

            case 5:
                //printMenorValorMesResiduosNoRenovables2022();
            break;

            case 6:
                 //printMenorValorMesResiduosNoRenovables2021_2022();
            break;

            case 7:
                 //printMediaAnualResiduosNoRenovables2021();
            break;

            case 8:
                 //printMediaAnualResiduosNoRenovables2022();
            break;

            case 9:
                system("cls");
                printResiduos();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad
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
                //printMayorValorMesGeneracionTotal2021();
            break;

            case 2:
                //printMayorValorMesGeneracionTotal2022();
            break;

            case 3:
                //printMayorValorMesGeneracionTotal2021_2022();
            break;

            case 4:
                //printMenorValorMesGeneracionTotal2021();
            break;

            case 5:
                //printMenorValorMesGeneracionTotal2022();
            break;

            case 6:
                 //printMenorValorMesGeneracionTotal2021_2022();
            break;

            case 7:
                 //printMediaAnualGeneracionTotal2021();
            break;

            case 8:
                 //printMediaAnualGeneracionTotal2022();
            break;

            case 9:
                system("cls");
                printTiposEnergias();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad

} //Cierre printGeneracionTotal



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


        }// Cierre switch seleccion

} // Cierre printCombustiblesFosiles



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
                //printMayorValorMesCarbon2021();
            break;

            case 2:
                //printMayorValorMesCarbon2022();
            break;

            case 3:
                //printMayorValorMesCarbon2021_2022();
            break;

            case 4:
                //printMenorValorMesCarbon2021();
            break;

            case 5:
                //printMenorValorMesCarbon2022();
            break;

            case 6:
                 //printMenorValorMesCarbon2021_2022();
            break;

            case 7:
                 //printMediaAnualCarbon2021();
            break;

            case 8:
                 //printMediaAnualCarbon2022();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad

} //Cierre printCarbon



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
                //printMayorValorMesFuelGas2021();
            break;

            case 2:
                //printMayorValorMesFuelGas2022();
            break;

            case 3:
                //printMayorValorMesFuelGas2021_2022();
            break;

            case 4:
                //printMenorValorMesFuelGas2021();
            break;

            case 5:
                //printMenorValorMesFuelGas2022();
            break;

            case 6:
                 //printMenorValorMesFuelGas2021_2022();
            break;

            case 7:
                 //printMediaAnualFuelGas2021();
            break;

            case 8:
                 //printMediaAnualFuelGas2022();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad


} //Cierre printFuelGas



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
                //printMayorValorMesTurbinaGas2021();
            break;

            case 2:
                //printMayorValorMesTurbinaGas2022();
            break;

            case 3:
                //printMayorValorMesTurbinaGas2021_2022();
            break;

            case 4:
                //printMenorValorMesTurbinaGas2021();
            break;

            case 5:
                //printMenorValorMesTurbinaGas2022();
            break;

            case 6:
                 //printMenorValorMesTurbinaGas2021_2022();
            break;

            case 7:
                 //printMediaAnualTurbinaGas2021();
            break;

            case 8:
                 //printMediaAnualTurbinaGas2022();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;


        } // Cierre switch modalidad


} //Cierre printTurbinaGas



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
                //printMayorValorMesTurbinaVapor2021();
            break;

            case 2:
                //printMayorValorMesTurbinaVapor2022();
            break;

            case 3:
                //printMayorValorMesTurbinaVapor2021_2022();
            break;

            case 4:
                //printMenorValorMesTurbinaVapor2021();
            break;

            case 5:
                //printMenorValorMesTurbinaVapor2022();
            break;

            case 6:
                 //printMenorValorMesTurbinaVapor2021_2022();
            break;

            case 7:
                 //printMediaAnualTurbinaVapor2021();
            break;

            case 8:
                 //printMediaAnualTurbinaVapor2022();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad


} //Cierre printTurbinaVapor



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
                //printMayorValorMesCicloCombinado2021();
            break;

            case 2:
                //printMayorValorMesCicloCombinado2022();
            break;

            case 3:
                //printMayorValorMesCicloCombinado2021_2022();
            break;

            case 4:
                //printMenorValorMesCicloCombinado2021();
            break;

            case 5:
                //printMenorValorMesCicloCombinado2022();
            break;

            case 6:
                 //printMenorValorMesCicloCombinado2021_2022();
            break;

            case 7:
                 //printMediaAnualCicloCombinado2021();
            break;

            case 8:
                 //printMediaAnualCicloCombinado2022();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad


} //Cierre printCicloCombinado



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
                //printMayorValorMesCogeneracion2021();
            break;

            case 2:
                //printMayorValorMesCogeneracion2022();
            break;

            case 3:
                //printMayorValorMesCogeneracion2021_2022();
            break;

            case 4:
                //printMenorValorMesCogeneracion2021();
            break;

            case 5:
                //printMenorValorMesCogeneracion2022();
            break;

            case 6:
                 //printMenorValorMesCogeneracion2021_2022();
            break;

            case 7:
                 //printMediaAnualCogeneracion2021();
            break;

            case 8:
                 //printMediaAnualCogeneracion2022();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad


} //Cierre printCogeneracion

//Terminacion Año 2021-2022

//Inicio Año 2019-2020


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

        } // Cierre switch Seleccion

} // Cierre printTiposEnergias2019_2020



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

        } // Cierre switch modalidad

} // Cierre printTiposEnergiasNoRenovables2019_2020



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
                //printMayorValorMesNuclear2019();
            break;

            case 2:
                //printMayorValorMesNuclear2020();
            break;

            case 3:
                //printMayorValorMesNuclear2019_2020();
            break;

            case 4:
                //printMenorValorMesNuclear2019();
            break;

            case 5:
                //printMenorValorMesNuclear2020();
            break;

            case 6:
                 //printMenorValorMesNuclear2019_2020();
            break;

            case 7:
                 //printMediaAnualNuclear2021();
            break;

            case 8:
                 //printMediaAnualNuclear2022();
            break;

            case 9:
                system("cls");
                printTiposEnergiasNoRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printNuclear2019_2020



void printMotoresDiesel2019_2020(){
    int seleccion;

    do{
        printf("\nUsted ha seleccionado Motores Diesel!\n\n");
        printf("Como curiosidad usted debe saber... los motores diesel para estos casos son utilizados en Grupos Electrogenos como medida auxiliar\
 de fuente de energia en caso de ausencia de la red principal en determinado momento. Es decir, Pueden entrar en funcionamiento\
 cuando se produce una interrupción en la red eléctrica principal o cuando se requiere energía adicional durante momentos de alta demanda.\n\n");

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
                //printMayorValorMesMotoresDiesel2019();
            break;

            case 2:
                //printMayorValorMesMotoresDiesel2020();
            break;

            case 3:
                //printMayorValorMesMotoresDiesel2019_2020();
            break;

            case 4:
                //printMenorValorMesMotoresDiesel2019();
            break;

            case 5:
                //printMenorValorMesMotoresDiesel2020();
            break;

            case 6:
                 //printPeorValorMesMotoresDiesel2019_2020();
            break;

            case 7:
                 //printMediaAnualMotoresDiesel2019();
            break;

            case 8:
                 //printMediaAnualMotoresDiesel2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasNoRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printMotoresDiesel2019_2020



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

        } // Cierre switch modalidad

} // Cierre TiposEnergiasRenovables2019_2020



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
                //printMayorValorMesHidraulica2019();
            break;

            case 2:
                //printMayorValorMesHidraulica2020();
            break;

            case 3:
                //printMayorValorMesHidraulica2019_2020();
            break;

            case 4:
                //printMenorValorMesHidraulica2019();
            break;

            case 5:
                //printMenorValorMesHidraulica2020();
            break;

            case 6:
                 //printMenorValorMesHidraulica2019_2020();
            break;

            case 7:
                 //printMediaAnualHidraulica2019();
            break;

            case 8:
                 //printMediaAnualHidraulica2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printHidraulica2019_2020



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
                //printMayorValorMesHidroeolica2019();
            break;

            case 2:
                //printMayorValorMesHidroeolica2020();
            break;

            case 3:
                //printMayorValorMesHidroeolica2019_2020();
            break;

            case 4:
                //printMenorValorMesHidroeolica2019();
            break;

            case 5:
                //printMenorValorMesHidroeolica2020();
            break;

            case 6:
                 //printMenorValorMesHidroeolica2019_2020();
            break;

            case 7:
                 //printMediaAnualHidroeolica2019();
            break;

            case 8:
                 //printMediaAnualHidroeolica2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;


        } // Cierre switch seleccion

} //Cierre printHidroeolica2019_2020



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
                //printMayorValorMesEolica2019();
            break;

            case 2:
                //printMayorValorMesEolica2020();
            break;

            case 3:
                //printMayorValorMesEolica2019_2020();
            break;

            case 4:
                //printMenorValorMesEolica2019();
            break;

            case 5:
                //printMenorValorMesEolica2020();
            break;

            case 6:
                 //printMenorValorMesEolica2019_2020();
            break;

            case 7:
                 //printMediaAnualEolica2019();
            break;

            case 8:
                 //printMediaAnualEolica2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printEolica2019_2020



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
                //printMayorValorMesSolarFotovoltaica2019();
            break;

            case 2:
                //printMayorValorMesSolarFotovoltaica2020();
            break;

            case 3:
                //printMayorValorMesSolarFotovoltaica2019_2020();
            break;

            case 4:
                //printMenorValorMesSolarFotovoltaica2019();
            break;

            case 5:
                //printMenorValorMesSolarFotovoltaica2020();
            break;

            case 6:
                 //printMenorValorMesSolarFotovoltaica2019_2020();
            break;

            case 7:
                 //printMediaAnualSolarFotovoltaica2019();
            break;

            case 8:
                 //printMediaAnualSolarFotovoltaica2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printFotovoltaica2019_2020



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
                //printMayorValorMesSolarTermica2019();
            break;

            case 2:
                //printMayorValorMesSolarTermica2020();
            break;

            case 3:
                //printMayorValorMesSolarTermica2019_2020();
            break;

            case 4:
                //printMenorValorMesSolarTermica2019();
            break;

            case 5:
                //printMenorValorMesSolarTermica2020();
            break;

            case 6:
                 //printMenorValorMesSolarTermica2019_2020();
            break;

            case 7:
                 //printMediaAnualSolarTermica2019();
            break;

            case 8:
                 //printMediaAnualSolarTermica2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printSolarTermica2019_2020



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
                //printMayorValorMesOtrasRenovables2019();
            break;

            case 2:
                //printMayorValorMesOtrasRenovables2020();
            break;

            case 3:
                //printMayorValorMesOtrasRenovables2019_2020();
            break;

            case 4:
                //printMenorValorMesOtrasRenovables2019();
            break;

            case 5:
                //printMenorValorMesOtrasRenovables2020();
            break;

            case 6:
                 //printMenorValorMesOtrasRenovables2019_2020();
            break;

            case 7:
                 //printMediaAnualOtrasRenovables2019();
            break;

            case 8:
                 //printMediaAnualOtrasRenovables2020();
            break;

            case 9:
                system("cls");
                printTiposEnergiasRenovables2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch seleccion

} //Cierre printOtrasEnergiasRenovables2019_2020



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

        } // Cierre switch modalidad

} //Cierre printResiduos2019_2020


void printResiduosRenovables2019_2020(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Residuos Renovables!\n\n");
        printf("Como curiosidad usted debe saber... Estos residuos consisten en materiales organicos que se generan como subproductos de\
 actividades agricolas, forestales, agroindustriales y de procesamiento de alimentos, asi como de residuos solidos\
 urbanos y lodos de depuradoras. La biomasa se considera renovable porque proviene de fuentes biologicas y puede\
 regenerarse a traves de ciclos naturales. La biomasa se utiliza principalmente para la generacion de electricidad\
 a traves de procesos de combustion o gasificacion.\n\n");


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
                //printMayorValorMesResiduosRenovables2019();
            break;

            case 2:
                //printMayorValorMesResiduosRenovables2020();
            break;

            case 3:
                //printMayorValorMesResiduosRenovables2019_2020();
            break;

            case 4:
                //printMenorValorMesResiduosRenovables2019();
            break;

            case 5:
                //printMenorValorMesResiduosRenovables2020();
            break;

            case 6:
                 //printMenorValorMesResiduosRenovables2019_2020();
            break;

            case 7:
                 //printMediaAnualResiduosRenovables2019();
            break;

            case 8:
                 //printMediaAnualResiduosRenovables2020();
            break;

            case 9:
                system("cls");
                printResiduos2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad
}

void printResiduosNoRenovables2019_2020(){
    int modalidad;

    do{
        printf("\nUsted ha seleccionado la fuente de energia primaria Residuos No Renovables!\n\n");
        printf("Como curiosidad usted debe saber... Los residuos no renovables se refieren a los materiales que no son de origen\
 biologico y no se regeneran a traves de ciclos naturales en un periodo de tiempo relevante. Estos residuos\
 provienen principalmente de la actividad industrial y se caracterizan por ser recursos finitos. Aunque no se\
 consideran fuentes de energia sostenibles a largo plazo, se utilizan en ciertos casos como una alternativa\
 para la generacion de energia.\n\n");

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
                //printMayorValorMesResiduosNoRenovables2019();
            break;

            case 2:
                //printMayorValorMesResiduosNoRenovables2020();
            break;

            case 3:
                //printMayorValorMesResiduosNoRenovables2019_2020();
            break;

            case 4:
                //printMenorValorMesResiduosNoRenovables2019();
            break;

            case 5:
                //printMenorValorMesResiduosNoRenovables2020();
            break;

            case 6:
                 //printMenorValorMesResiduosNoRenovables2019_2020();
            break;

            case 7:
                 //printMediaAnualResiduosNoRenovables2019();
            break;

            case 8:
                 //printMediaAnualResiduosNoRenovables2020();
            break;

            case 9:
                system("cls");
                printResiduos2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad
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
                //printMayorValorMesGeneracionTotal2019();
            break;

            case 2:
                //printMayorValorMesGeneracionTotal2020();
            break;

            case 3:
                //printMayorValorMesGeneracionTotal2019_2020();
            break;

            case 4:
                //printMenorValorMesGeneracionTotal2019();
            break;

            case 5:
                //printMenorValorMesGeneracionTotal2020();
            break;

            case 6:
                 //printMenorValorMesGeneracionTotal2019_2020();
            break;

            case 7:
                 //printMediaAnualGeneracionTotal2019();
            break;

            case 8:
                 //printMediaAnualGeneracionTotal2020();
            break;

            case 9:
                system("cls");
                printTiposEnergias2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad

} //Cierre printGeneracionTotal2019_2020



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


        }// Cierre switch seleccion

} // Cierre printCombustiblesFosiles2019_2020



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
                //printMayorValorMesCarbon2019();
            break;

            case 2:
                //printMayorValorMesCarbon2020();
            break;

            case 3:
                //printMayorValorMesCarbon2019_2020();
            break;

            case 4:
                //printMenorValorMesCarbon2019();
            break;

            case 5:
                //printMenorValorMesCarbon2020();
            break;

            case 6:
                 //printMenorValorMesCarbon2019_2020();
            break;

            case 7:
                 //printMediaAnualCarbon2019();
            break;

            case 8:
                 //printMediaAnualCarbon2020();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad

} //Cierre printCarbon2019_2020



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
                //printMayorValorMesFuelGas2019();
            break;

            case 2:
                //printMayorValorMesFuelGas2020();
            break;

            case 3:
                //printMayorValorMesFuelGas2019_2020();
            break;

            case 4:
                //printMenorValorMesFuelGas2019();
            break;

            case 5:
                //printMenorValorMesFuelGas2020();
            break;

            case 6:
                 //printMenorValorMesFuelGas2019_2020();
            break;

            case 7:
                 //printMediaAnualFuelGas2019();
            break;

            case 8:
                 //printMediaAnualFuelGas2020();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad


} //Cierre printFuelGas2019_2020



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
                //printMayorValorMesTurbinaGas2019();
            break;

            case 2:
                //printMayorValorMesTurbinaGas2020();
            break;

            case 3:
                //printMayorValorMesTurbinaGas2019_2020();
            break;

            case 4:
                //printMenorValorMesTurbinaGas2019();
            break;

            case 5:
                //printMenorValorMesTurbinaGas2020();
            break;

            case 6:
                 //printMenorValorMesTurbinaGas2019_2020();
            break;

            case 7:
                 //printMediaAnualTurbinaGas2019();
            break;

            case 8:
                 //printMediaAnualTurbinaGas2020();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;


        } // Cierre switch modalidad


} //Cierre printTurbinaGas2019_2020



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
                //printMayorValorMesTurbinaVapor2019();
            break;

            case 2:
                //printMayorValorMesTurbinaVapor2020();
            break;

            case 3:
                //printMayorValorMesTurbinaVapor2019_2020();
            break;

            case 4:
                //printMenorValorMesTurbinaVapor2019();
            break;

            case 5:
                //printMenorValorMesTurbinaVapor2020();
            break;

            case 6:
                 //printMenorValorMesTurbinaVapor2019_2020();
            break;

            case 7:
                 //printMediaAnualTurbinaVapor2019();
            break;

            case 8:
                 //printMediaAnualTurbinaVapor2020();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad


} //Cierre printTurbinaVapor2019_2020



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
                //printMayorValorMesCicloCombinado2019();
            break;

            case 2:
                //printMayorValorMesCicloCombinado2020();
            break;

            case 3:
                //printMayorValorMesCicloCombinado2019_2020();
            break;

            case 4:
                //printMenorValorMesCicloCombinado2019();
            break;

            case 5:
                //printMenorValorMesCicloCombinado2020();
            break;

            case 6:
                 //printMenorValorMesCicloCombinado2019_2020();
            break;

            case 7:
                 //printMediaAnualCicloCombinado2019();
            break;

            case 8:
                 //printMediaAnualCicloCombinado2020();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad


} //Cierre printCicloCombinado2019_2020



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
                //printMayorValorMesCogeneracion2019();
            break;

            case 2:
                //printMayorValorMesCogeneracion2020();
            break;

            case 3:
                //printMayorValorMesCogeneracion2019_2020();
            break;

            case 4:
                //printMenorValorMesCogeneracion2019();
            break;

            case 5:
                //printMenorValorMesCogeneracion2020();
            break;

            case 6:
                 //printMenorValorMesCogeneracion2019_2020();
            break;

            case 7:
                 //printMediaAnualCogeneracion2019();
            break;

            case 8:
                 //printMediaAnualCogeneracion2020();
            break;

            case 9:
                system("cls");
                printCombustiblesFosiles2019_2020();
            break;

            case 10:
                system("cls");
                menuPrincipal();
            break;

        } // Cierre switch modalidad


} //Cierre printCogeneracion2019_2020

// Terminacion Año 2019-2020

// Inicio Año 2017-2018

void printEnergias2017_2018(){


}

// Terminacion Año 2017-2018


void printAleatorioAnualidad(){
    int numero_aleatorioAnual;

    srand(time(NULL));
    numero_aleatorioAnual = 1 + rand() % 3;


    if(numero_aleatorioAnual == 1){
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

    if(numero_aleatorioAnual == 2){
        int seleccion;

        do{
        printf("\nLa Anualidad seleccionada ha sido 2019-2020. Desea continuar con el acceso aleatorio de Energias?\n\n");
        printf("\t1. Continuar\n\t2. Atras\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");

        }

        while (seleccion !=  1 && seleccion != 2);
            switch (seleccion){
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



void printAleatorioEnergia(){
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

        } // Cierre switch numero_aleatorioEnergia


} //Cierre printAleatorioEnergia


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

        } // Cierre switch numero_aleatorioEnergia


} //Cierre printAleatorioEnergia2019_2020


void printAleatorioEnergia2017_2018(){
    int numero_aleatorioEnergia;

    do{
      srand(time(NULL));
        numero_aleatorioEnergia = 1 + rand() % 17;
    }

    while(numero_aleatorioEnergia == 2);



        switch(numero_aleatorioEnergia){
            case 1:
                //printCarbon2017_2018();
            break;


            case 2:
                //printFuelGas2017_2018();
            break;


            case 3:
                //printTurbinaGas2017_2018();
            break;


            case 4:
                //printTurbinaVapor2017_2018();
            break;


            case 5:
                //printCicloCombinado2017_2018();
            break;


            case 6:
                //printCogeneracion2017_2018();
            break;


            case 7:
                //printGeneracionTotal2017_2018();
            break;


            case 8:
                //printNuclear2017_2018();
            break;


            case 9:
                //printMotoresDiesel2017_2018();
            break;


            case 10:
                //printHidraulica2017_2018();
            break;


            case 11:
                //printHidroeolica2017_2018();
            break;


            case 12:
                //printEolica2017_2018();
            break;


            case 13:
                //printSolarFotovoltaica2017_2018();
            break;


            case 14:
                //printSolarTermica2017_2018();
            break;


            case 15:
                //printOtrasEnergiasRenovables2017_2018();
            break;


            case 16:
                //printResiduosRenovables2017_2018();
            break;


            case 17:
                //printResiduosNoRenovables2017_2018();
            break;

        } // Cierre switch numero_aleatorioEnergia


} //Cierre printAleatorioEnergia2017_2018



//FINAL PARTE MENU


 //FUNCIONES PROMEDIO


void printMediaAnualNuclear2021()

{

//int main()
//{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=0; j<12; j++)
    {
        suma=Energias[2].datos[j]+suma;  //LA NUCLEAR ES LA 2
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}

void printMediaAnualNuclear2022()
{

{
    int main()
//{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=12; j<24; j++)
    {
        suma=Energias[2].datos[j]+suma;  //LA NUCLEAR ES LA 2
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;
}
}



void printMediaAnualHidraulica2021()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=0; j<12; j++)
    {
        suma=Energias[0].datos[j]+suma;  //LA NUCLEAR ES LA 2
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}

void printMediaAnualHidraulica2022()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=12; j<24; j++)
    {
        suma=Energias[0].datos[j]+suma;  //LA NUCLEAR ES LA 2
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}



void printMediaAnualHidroeolica2021()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=0; j<12; j++)
    {
        suma=Energias[9].datos[j]+suma;  //LA hidroelica es la , en el vector es 10
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}


void printMediaAnualHidroeolica2022()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=12; j<24; j++)
    {
        suma=Energias[9].datos[j]+suma;  //LA hidroelica es la , en el vector es 10
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}


void printMediaAnualEolica2021()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=0; j<12; j++)
    {
        suma=Energias[10].datos[j]+suma;  //LA eolica es la 11
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}

void printMediaAnualEolica2022()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=12; j<24; j++)
    {
        suma=Energias[10].datos[j]+suma;  //LA eolica es la 11
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;
}

void printMediaAnualFotovoltaica2021()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=0; j<12; j++)
    {
        suma=Energias[11].datos[j]+suma;  //LA FOTO ES 12
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}


void printMediaAnualFotovoltaica2022()
{
     char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=12; j<24; j++)
    {
        suma=Energias[11].datos[j]+suma;  //LA FOTO ES 12
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}

void printMediaAnualSolarTermica2021()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=0; j<12; j++)
    {
        suma=Energias[12].datos[j]+suma;  //LA solar termica es la 13
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;


}

void printMediaAnualSolarTermica2022()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=12; j<24; j++)
    {
        suma=Energias[12].datos[j]+suma;  //LA solar termica es la 13
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;


}

void printMediaAnualOtrasRenovables2021() //ESTA FALTA
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=0; j<12; j++)
    {
        suma=Energias[13].datos[j]+suma;  //LAs otras son la 14
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;


}
//void printMediaAnualOtrasRenovables2022();

void printMediaAnualCarbon2021()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=0; j<12; j++)
    {
        suma=Energias[3].datos[j]+suma;  //LA NUCLEAR ES LA 4
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;


}

void printMediaAnualCarbon2022()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=12; j<24; j++)
    {
        suma=Energias[3].datos[j]+suma;  //LA NUCLEAR ES LA 4
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}

void printMediaAnualFuelGas2021()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=0; j<12; j++)
    {
        suma=Energias[4].datos[j]+suma;  //LA del gas es 5, CORREGIR
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;


}

void printMediaAnualFuelGas2022()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=12; j<24; j++)
    {
        suma=Energias[4].datos[j]+suma;  //LA del gas es 5, CORREGIR
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;
}

void printMediaAnualTurbinaGas2021()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=0; j<12; j++)
    {
        suma=Energias[6].datos[j]+suma;  //LA TURBINA GAS ES LA 7

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}


}

void printMediaAnualTurbinaGas2022()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=12; j<24; j++)
    {
        suma=Energias[6].datos[j]+suma;  //LA TURBINA GAS ES LA 7

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;
}

void printMediaAnualTurbinaVapor2021()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=0; j<12; j++)
    {
        suma=Energias[7].datos[j]+suma;  //LA TURBINA VAPOR ES LA 8
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}
void printMediaAnualTurbinaVapor2022()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=12; j<24; j++)
    {
        suma=Energias[7].datos[j]+suma;  //LA TURBINA VAPOR ES LA 8
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}

void printMediaAnualCicloCombinado2021()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=0; j<12; j++)
    {
        suma=Energias[8].datos[j]+suma;  //CICLO COMBINADO ES LA 9
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}


void printMediaAnualCicloCombinado2022()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=12; j<24; j++)
    {
        suma=Energias[8].datos[j]+suma;  //CICLO COMBINADO ES LA 9
    }

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}


void printMediaAnualMotoresDiesel2021()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=0; j<12; j++)
    {
        suma=Energias[5].datos[j]+suma;  //MOTORES DIESEL ES LA 6

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}

void printMediaAnualMotoresDiesel2022()
{
    char aux0, aux1, aux2, x;
    int i=0, j, k;
    int numerodefilas=0;
    int numerodeenergias=0;

    //Energia Energias[numerodeenergias];


    FILE *pf;

    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

     while(fscanf(pf, "%c", &aux0) != EOF)
     {
         if(aux0 == '\n')
            numerodefilas++;

     }


     fclose(pf);
    }

    numerodefilas++;

    //AHORA LO ABRIMOS POR SEGUNDA VEZ


    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r"); //abrimos un fichero que se llama pf para almacenar los datos

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    for(i=0; i<=4; i++)
  {
  	fscanf(pf, "%c", &aux1);
    while(aux1 != '\n')
    {
        //printf("%c", aux1); //este printf es para comprobar que copia los caracteres
        fscanf(pf, "%c", &aux1);
    }

  }

  //AQUI TENGO QUE LEER LAS FECHAS

  //HASTA AQUI LEE LAS 5 PRIMERAS FILAS (INCLUIDO LAS FECHAS)

    numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas


    Energia Energias[numerodeenergias];



    for(i=0; i<=numerodeenergias; i++)
    {
        //fscanf(pf, "%c", &aux2); //TE COGE BIEN LA H
        //printf("%c", aux2);

        fscanf(pf, "%[^,]", &Energias[i].tipo);


        //ahora recorro toda la linea hasta el caracter \n



        //fscanf(pf, "%c", &aux2);

        k=0;

        char coma, comaalta1, comaalta2;


        for(x=0; x<24; x++) //aqui recojo 24 datos
        {
            fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
            k++;
        }


    }

    //printMediaAnualNuclear2021();

    float promedio, suma=0;

    for(j=12; j<24; j++)
    {
        suma=Energias[5].datos[j]+suma;  //MOTORES DIESEL ES LA 6

    promedio=suma/12.0;

    printf("La suma es %f y el promedio es %f", suma, promedio);

    fclose(pf); //Cerramos fichero


     }

return 0;

}
}

//void printMediaAnualResiduos2021()
//void printMediaAnualResiduos2022();


//void printMediaAnualGeneracionTotal2021();
//void printMediaAnualGeneracionTotal2022();


//HASTA AQUI, FALTAN CABECERAS EN LA FUNCIONES.H Y ESAS CUATRO

void printMayorValorMesHidraulica2021()
{
    char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N, u;
                    u=0;
                    N=0;
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<11;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                            u++;//contador para el mes
                        }
                    }
                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}
void printPeorValorMesHidraulica()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N;
                    N=0;
                    float minimo;

                    minimo = Energias[N].datos[0];
                    //PARA EL AÑO 2O21
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor minimo es de %f GWh.\n", minimo);
            }

}
void printMayorValorMesHidroeolica2021()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N, u;
                    u=0;
                    N=9;
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<11;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                            u++;//contador para el mes
                        }
                    }
                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}
void printPeorValorMesHidroeolica()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N;
                    N=9;
                    float minimo;

                    minimo = Energias[N].datos[0];
                    //PARA EL AÑO 2O21
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor minimo es de %f GWh.\n", minimo);
            }

}
void printMayorValorMesEolica2021()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N, u;
                    u=0;
                    N=10;
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA 2021
                    for (i=0;i<11;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                            u++;//contador para el mes
                        }
                    }
                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}
void printPeorValorMesEolica()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N;
                    N=10;
                    float minimo;

                    minimo = Energias[N].datos[0];
                    //PARA EL AÑO 2O21
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor minimo es de %f GWh.\n", minimo);
            }

}
void printMayorValorMesSolarFotovoltaica2021()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N, u;
                    u=0;
                    N=11;
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<11;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                            u++;//contador para el mes
                        }
                    }
                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}
void printPeorValorMesFotovoltaica()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N;
                    N=11;
                    float minimo;

                    minimo = Energias[N].datos[0];
                    //PARA EL AÑO 2O21
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor minimo es de %f GWh.\n", minimo);
            }

}
void printMayorValorMesSolarTermica2021()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N, u;
                    u=0;
                    N=12;
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<11;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                            u++;//contador para el mes
                        }
                    }
                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}
void printPeorValorMesSolarTermica()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N;
                    N=12;
                    float minimo;

                    minimo = Energias[N].datos[0];
                    //PARA EL AÑO 2O21
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor minimo es de %f GWh.\n", minimo);
            }

}
void printMayorValorMesOtrasEnergiasRenovables2021()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N, u;
                    u=0;
                    N=13;
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<11;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                            u++;//contador para el mes
                        }
                    }
                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}
void printPeorValorMesOtrasRenovables()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N;
                    N=13;
                    float minimo;

                    minimo = Energias[N].datos[0];
                    //PARA EL AÑO 2O21
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor minimo es de %f GWh.\n", minimo);
            }

}
void printMayorValorMesCarbon2021()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N, u;
                    u=0;
                    N=3;
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<11;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                            u++;//contador para el mes
                        }
                    }
                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}
void printPeorValorMesCarbon()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N;
                    N=3;
                    float minimo;

                    minimo = Energias[N].datos[0];
                    //PARA EL AÑO 2O21
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor minimo es de %f GWh.\n", minimo);
            }

}
void printMayorValorMesFuelGas2021()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N, u;
                    u=0;
                    N=4;
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<11;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                            u++;//contador para el mes
                        }
                    }
                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}
void printPeorValorMesFuelGas()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N;
                    N=4;
                    float minimo;

                    minimo = Energias[N].datos[0];
                    //PARA EL AÑO 2O21
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor minimo es de %f GWh.\n", minimo);
            }

}
void printMayorValorMesTurbinaGas2021()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N, u;
                    u=0;
                    N=6;
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<11;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                            u++;//contador para el mes
                        }
                    }
                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}
void printPeorValorMesTurbinaGas()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N;
                    N=6;
                    float minimo;

                    minimo = Energias[N].datos[0];
                    //PARA EL AÑO 2O21
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor minimo es de %f GWh.\n", minimo);
            }

}
void printMayorValorMesTurbinaVapor2021()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N, u;
                    u=0;
                    N=7;
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<11;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                            u++;//contador para el mes
                        }
                    }
                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}
void printPeorValorMesTurbinaVapor()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N;
                    N=7;
                    float minimo;

                    minimo = Energias[N].datos[0];
                    //PARA EL AÑO 2O21
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor minimo es de %f GWh.\n", minimo);
            }

}
void printMayorValorMesCicloCombinado2021()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N, u;
                    u=0;
                    N=8;
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<11;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                            u++;//contador para el mes
                        }
                    }
                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}
void printPeorValorMesCicloCombinado()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N;
                    N=8;
                    float minimo;

                    minimo = Energias[N].datos[0];
                    //PARA EL AÑO 2O21
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor minimo es de %f GWh.\n", minimo);
            }

}
void printMayorValorMesMotoresDiesel2021()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N, u;
                    u=0;
                    N=5;
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<11;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                            u++;//contador para el mes
                        }
                    }
                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}
void printPeorValorMesMotoresDiesel()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N;
                    N=5;
                    float minimo;

                    minimo = Energias[N].datos[0];
                    //PARA EL AÑO 2O21
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor minimo es de %f GWh.\n", minimo);
            }

}
void printMayorValorMesResiduos();//HAY QUE DISTINGUIRLOS ENTRE RENOVABLES Y NO RENOVABLES
void printPeorValorMesResiduos();//HAY QUE DISTINGUIRLOS ENTRE RENOVABLES Y NO RENOVABLES
void printMayorValorMesGeneracionTotal2021()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N, u;
                    u=0;
                    N=17;
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<11;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                            u++;//contador para el mes
                        }
                    }
                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}
void printPeorValorMesGeneracionTotal()
{
        char aux0, aux1, aux2, x;
    int contador=0, i=0, j;
    int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    FILE *pf;
    pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
        {

            while(fscanf(pf, "%c", &aux0) != EOF)
                {
                    if(aux0 == '\n')
                    numerodefilas++;

                }
            fclose(pf);
        }

        numerodefilas++;//para que sume la ultima linea

        //AHORA LO ABRIMOS POR SEGUNDA VEZ

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
                return (-1);
            }
        else
            {
                for(i=0; i<=3; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                  //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                numerodefechas=numerodefilas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }


                numerodeenergias=numerodefilas-5; //le restamos las 5 primeras filas

                Energia Energias[numerodeenergias];

                for(i=0; i<=numerodeenergias; i++)
                {
                    fscanf(pf, "%[^,]", &Energias[i].tipo);

                    int k=0;

                    char coma, comaalta1, comaalta2;


                    for(x=0; x<24; x++) //aqui recojo 24 datos
                    {
                        fscanf(pf, "%c %c %f %c", &coma, &comaalta1, &Energias[i].datos[k], &comaalta2);
                        k++;
                    }
                }


                    int i, N;
                    N=17;
                    float minimo;

                    minimo = Energias[N].datos[0];
                    //PARA EL AÑO 2O21
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor minimo es de %f GWh.\n", minimo);
            }

}

