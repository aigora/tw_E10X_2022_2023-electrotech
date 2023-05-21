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
    printf("\n¡Bienvenido a la Base de Datos!\nElija una de las opciones siguientes:\n\n");
    printf("\t1. Tipos Energias.\n\t2. Futura Idea.\n\t3. Futura Idea.\n\t4. Futura Idea.\n\t5. Salir de la Base de Datos.\n");
    scanf("%i", &seleccion);
    system("cls");
    }

    while (seleccion != 1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5);
        switch(seleccion){
            case 1:
                printEnergias();
             break;


             case 2:
                printf("\nIdea En construccion...\n");
             break;


             case 3:
                printf("\nIdea En construccion...\n");
             break;


             case 4:
                printf("\nIdea En construccion...\n");
             break;


             case 5:
                exit(0);
             break;

        } // Cierre switch seleccion.

} // Cierre menuPrincipal.



void printEnergias(){
    int modalidad;

    do{
    printf("\nDesea continuar con el acceso a distintas Energias:\n\n");
    printf("\t1. Continuar\n\t2. Salir\n");
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
    printf("\t1. No Renovable\n\t2. Renovable\n\t3. Residuos\n\t4. Generacion Total\n\t5. Salir\n");
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
        printf("\t1. Combustibles Fosiles\n\t2. Nuclear\n\t3. Motores Diesel\n\t4. Salir\n");
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
        printf("\n¡Usted ha seleccionado Energia Nuclear!\n\n");
        printf("Como curiosidad usted debe saber... que la energia nuclear se divide en dos procesos distintos, uno, la fusion nuclear y,\
 el otro, la fision nuclear. El mas empleado es la fision nuclear que consiste en la desintegracion de ciertos atomos\
 con neutrones. Esta reaccion libera una gran cantidad de energia utilitaria. El proceso de fision nuclear es un proceso\
limpio. La unica parte donde se produce contaminacion, es en el proceso de desulfuracion del uranio.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Nuclear:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7);
        switch (seleccion){
            case 1:
                //printMayorValorDiaNuclear();
            break;

            case 2:
                //printMayorValorMesNuclear();
            break;

            case 3:
                //printPeorValorDiaNuclear();
            break;

            case 4:
                //printPeorValorMesNuclear();
            break;

            case 5:
                printMediaAnualNuclear2021();
            break;

            case 6:
                //printMediaAnualNuclear2022();
            break;

            case 7:
                system("cls");
                printTiposEnergiasNoRenovables();
            break;

        } // Cierre switch seleccion

} //Cierre printNuclear



void printMotoresDiesel(){
    int seleccion;

    do{
        printf("\n¡Usted ha seleccionado Motores Diesel!\n\n");
        printf("Como curiosidad usted debe saber... FALTA INFOOOOOOOOOO!!!\n\n");

        printf("\nSeleccione que mas desea conocer sobre los Motores Diesel:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7);
        switch (seleccion){
            case 1:
                //printMayorValorDiaMotoresDiesel();
            break;

            case 2:
                //printMayorValorMesMotoresDiesel();
            break;

            case 3:
                //printPeorValorDiaMotoresDiesel();
            break;

            case 4:
                //printPeorValorMesMotoresDiesel();
            break;

            case 5:
                //printMediaAnualMotoresDiesel2021();
            break;

            case 6:
                //printMediaAnualMotoresDiesel2022();
            break;

            case 7:
                system("cls");
                printTiposEnergiasNoRenovables();
            break;

        } // Cierre switch seleccion

} //Cierre printMotoresDiesel



void printTiposEnergiasRenovables(){
    int modalidad;

    do{
        printf("\nSeleccione el tipo de Energia Renovable de la que desee obtener mayor informacion:\n\n");
        printf("\t1. Hidraulica\n\t2. Hidroeolica\n\t3. Eolica\n\t4. Solar Fotovoltaica\n\t5. Solar Termica\n\t6. Otras Renovables\n\t7. Salir\n");
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
        printf("\n¡Usted ha seleccionado la Energia Hidraulica!\n\n");
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
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7);
        switch (seleccion){
            case 1:
                //printMayorValorDiaHidraulica();
            break;

            case 2:
                //printMayorValorMesHidraulica();
            break;

            case 3:
                //printPeorValorDiaHidraulica();
            break;

            case 4:
                //printPeorValorMesHidraulica();
            break;

            case 5:
                printMediaAnualHidraulica2021();
            break;

            case 6:
                //printMediaAnualHidraulica2022();
            break;

            case 7:
                system("cls");
                printTiposEnergiasRenovables();
            break;

        } // Cierre switch seleccion

} //Cierre printHidraulica



void printHidroeolica(){
    int seleccion;

    do{
        printf("\n¡Usted ha seleccionado la Energia Hidroeolica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Hidroeolica combina el uso de aerogeneradores y turbinas hidraulicas\
 para aprovechar tanto la energia del viento como la del agua en movimiento. Esta forma de generacion de energia se utiliza principalmente\
 en zonas costeras o en el mar, donde hay vientos fuertes y corrientes de agua constantes.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Hidroeolica:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7);
        switch (seleccion){
            case 1:
                //printMayorValorDiaHidroeolica();
            break;

            case 2:
                //printMayorValorMesHidroeolica();
            break;

            case 3:
                //printPeorValorDiaHidroeolica();
            break;

            case 4:
                //printPeorValorMesHidroeolica();
            break;

            case 5:
                printMediaAnualHidroeolica2021();
            break;

            case 6:
                //printMediaAnualHidroeolica2022();
            break;

            case 7:
                system("cls");
                printTiposEnergiasRenovables();
            break;

        } // Cierre switch seleccion

} //Cierre printHidroeolica



void printEolica(){
    int seleccion;

    do{
        printf("\n¡Usted ha seleccionado la Energia Eolica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Eolica transforma la energia cinetica del viento en energia mecanica mediante\
 las turbinas eolicas. Dicha energia mecanica aplicada a un alternador convierte la energia en energia electrica. Existe la energia eolica\
     terrestre y marina. A esta ultima se le conoce como 'offshore'.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Eolica:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7);
        switch (seleccion){
            case 1:
                //printMayorValorDiaEolica();
            break;

            case 2:
                //printMayorValorMesEolica();
            break;

            case 3:
                //printPeorValorDiaEolica();
            break;

            case 4:
                //printPeorValorMesEolica();
            break;

            case 5:
                printMediaAnualEolica2021();
            break;

            case 6:
                //printMediaAnualEolica2022();
            break;

            case 7:
                system("cls");
                printTiposEnergiasRenovables();
            break;

        } // Cierre switch seleccion

} //Cierre printEolica



void printSolarFotovoltaica(){
    int seleccion;

    do{
        printf("\n¡Usted ha seleccionado la Energia Fotovoltaica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Fotovoltaica sufre una transformacion directa de la radiacion solar en energia\
 electrica mediante el efecto fotoelectrico, que consiste en la emision de electrones de un material cuando se ilumina\
 con la radiacion solar.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Fotovoltaica:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7);
        switch (seleccion){
            case 1:
                //printMayorValorDiaFotovoltaica();
            break;

            case 2:
                //printMayorValorMesFotovoltaica();
            break;

            case 3:
                //printPeorValorDiaFotovoltaica();
            break;

            case 4:
                //printPeorValorMesFotovoltaica();
            break;

            case 5:
                printMediaAnualFotovoltaica2021();
            break;

            case 6:
                //printMediaAnualFotovoltaica2022();
            break;

            case 7:
                system("cls");
                printTiposEnergiasRenovables();
            break;

        } // Cierre switch seleccion

} //Cierre printFotovoltaica



void printSolarTermica(){
     int seleccion;

    do{
        printf("\n¡Usted ha seleccionado la Energia Solar Termica!\n\n");
        printf("Como curiosidad usted debe saber... La Energia Solar Termica genera electricidad a partir de la energia recogida en un fluido\
 que se calienta mediante la energia solar. Si el fluido caliente es vapor o aire, debemos de tener en cuenta que el agua se evapora\
 gracias a la energia solar y dicho vapor es enviado a una turbina conectada a un generador, produciendo energia electrica.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Energia Solar Termica:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7);
        switch (seleccion){
            case 1:
                //printMayorValorDiaSolarTermica();
            break;

            case 2:
                //printMayorValorMesSolarTermica();
            break;

            case 3:
                //printPeorValorDiaSolarTermica();
            break;

            case 4:
                //printPeorValorMesSolarTermica();
            break;

            case 5:
                printMediaAnualSolarTermica2021();
            break;

            case 6:
                //printMediaAnualSolarTermica2022();
            break;

            case 7:
                system("cls");
                printTiposEnergiasRenovables();
            break;

        } // Cierre switch seleccion

} //Cierre printSolarTermica



void printOtrasEnergiasRenovables(){
     int seleccion;

    do{
        printf("\n¡Usted ha seleccionado otras Energias Renovables!\n\n");
        printf("Como curiosidad usted debe saber... Cuando nos referimos a otras Energias Renovables podemos englobar energias como\
 la geotermica, mareomotriz, energias procedentes de biomasa o biocombustibles.\n\n");

        printf("\nSeleccione que mas desea conocer sobre otras Energias Renovables:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6 && seleccion != 7);
        switch (seleccion){
            case 1:
                //printMayorValorDiaOtrasRenovables();
            break;

            case 2:
                //printMayorValorMesOtrasRenovables();
            break;

            case 3:
                //printPeorValorDiaOtrasRenovables();
            break;

            case 4:
                //printPeorValorMesOtrasRenovables();
            break;

            case 5:
                printMediaAnualOtrasRenovables2021();
            break;

            case 6:
                //printMediaAnualOtrasRenovables2022();
            break;

            case 7:
                system("cls");
                printTiposEnergiasRenovables();
            break;

        } // Cierre switch seleccion

} //Cierre printOtrasEnergiasRenovables



void printResiduos(){
    int modalidad;

    do{
        printf("\n¡Usted ha seleccionado la fuente de energia primaria Residuos!\n\n");
        printf("Como curiosidad usted debe saber... FALTA INFOOOOOOOO!!!!!\n\n");

        printf("\nSeleccione que mas desea conocer sobre la fuente de energia a partir de Residuos:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7);
        switch (modalidad){
            case 1:
                //printMayorValorDiaResiduos();
            break;

            case 2:
                //printMayorValorMesResiduos();
            break;

            case 3:
                //printPeorValorDiaResiduos();
            break;

            case 4:
                //printPeorValorMesResiduos();
            break;

            case 5:
                //printMediaAnualResiduos2021();
            break;

            case 6:
                //printMediaAnualResiduos2022();
            break;

            case 7:
                system("cls");
                printTiposEnergias();
            break;

        } // Cierre switch modalidad

} //Cierre printResiduos



void printGeneracionTotal(){
int modalidad;

    do{
        printf("\n¡Usted ha seleccionado la Generacion Total!\n\n");
        printf("Como curiosidad usted debe saber... En este punto se recoge la suma de todas y cada una de las fuentes de generacion distintas\
 que se registran por Red Electrica Espanola (No Renovables, Renovables, Otra Renovables y Residuos).\n\n");

        printf("\nSeleccione que mas desea conocer sobre la Generacion Total:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7);
        switch (modalidad){
            case 1:
                //printMayorValorDiaGeneracionTotal();
            break;

            case 2:
                //printMayorValorMesGeneracionTotal();
            break;

            case 3:
                //printPeorValorDiaGeneracionTotal();
            break;

            case 4:
                //printPeorValorMesGeneracionTotal();
            break;

            case 5:
                //printMediaAnualGeneracionTotal2021();
            break;

            case 6:
                //printMediaAnualGeneracionTotal2022();
            break;

            case 7:
                system("cls");
                printTiposEnergias();
            break;

        } // Cierre switch modalidad

} //Cierre printGeneracionTotal



void printCombustiblesFosiles(){
 int seleccion;

    do{
        printf("\nSeleccione el tipo de Combustible Fosil del que desee obtener mayor informacion:\n\n");
        printf("\t1. Carbon\n\t2. Fuel + Gas Natural\n\t3. Turbina Gas\n\t4. Turbina Vapor\n\t5. Ciclo Combinado\n\t6. Salir\n");
        scanf("%i", &seleccion);
        fflush(stdin);
        system("cls");
    }

    while (seleccion !=  1 && seleccion != 2 && seleccion != 3 && seleccion != 4 && seleccion != 5 && seleccion != 6);
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
                system("cls");
                printTiposEnergiasNoRenovables();
            break;


        }// Cierre switch seleccion

} // Cierre printCombustiblesFosiles



void printCarbon(){
    int modalidad;

    do{
        printf("\n¡Usted ha seleccionado la fuente de energia primaria Carbon!\n\n");
        printf("Como curiosidad usted debe saber... que el carbon es el combustible fosil mas sucio y ;a gran parte de su consumo mundial\
 se utiliza para la fundicion del hierro y como componente esencial del acero. Tambien se usa con gran frecuencia en la\
 industria quimica y petroquimica. EEUU es uno de los paises con mayores reservas de carbon junto con Asia. El carbon mas\
 habitual es la antracita.\n\n");

        printf("\nSeleccione que mas desea conocer sobre el Carbon:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7);
        switch (modalidad){
            case 1:
                //printMayorValorDiaCarbon();
            break;

            case 2:
                //printMayorValorMesCarbon();
            break;

            case 3:
                //printPeorValorDiaCarbon();
            break;

            case 4:
                //printPeorValorMesCarbon();
            break;

            case 5:
                //printMediaAnualCarbon2021();
            break;

            case 6:
                //printMediaAnualCarbon2022();
            break;

            case 7:
                system("cls");
                printCombustiblesFosiles();
            break;

        } // Cierre switch modalidad

} //Cierre printCarbon



void printFuelGas(){
    int modalidad;

    do{
        printf("\n¡Usted ha seleccionado la fuente de energia primaria Petroleo y Gas Natural!\n\n");
        printf("Como curiosidad usted debe saber... que el petroleo una mezcla de hidrocarburos saturados en estado solido, liquido\
 o gaseoso que se encuentran en yacimientos naturales. El petroleo se lleva a un proceso de destilacion fraccionada\
 para obetener distintos tipos de carburantes. Las mayores reservas de petroleo las podemos encontrar Oriente medio.\
 En el caso del gas natural, debemos de destacar que el componente mayoritario es el metano. Tambien, las mayores\
 reservas de gas antural las encontramos en oriente medio.\n\n");

        printf("\nSeleccione que mas desea conocer sobre el Petroleo y Gas Natural:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7);
        switch (modalidad){
            case 1:
                //printMayorValorDiaFuelGas();
            break;

            case 2:
                //printMayorValorMesFuelGas();
            break;

            case 3:
                //printPeorValorDiaFuelGas();
            break;

            case 4:
                //printPeorValorMesFuelGas();
            break;

            case 5:
                //printMediaAnualFuelGas2021();
            break;

            case 6:
                //printMediaAnualFuelGas2022();
            break;

            case 7:
                system("cls");
                printCombustiblesFosiles();
            break;

        } // Cierre switch modalidad


} //Cierre printFuelGas



void printTurbinaGas(){
    int modalidad;

    do{
        printf("\n¡Usted ha seleccionado la obtencion de energia a partir de la Turbina de Gas!\n\n");
        printf("Como curiosidad usted debe saber... primero se usa un combustible fosil para realizar una conversion de energia quimica\
 , por ejemplo, del carbon en energia termica. Para ello, se introduce el carbon en el interio de un horno y dicho vapor\
 o gas generado se hace pasar por una turbina que se encargara de la conversion de energia termica en energia mecanica.\
 Dicha energia mecanica de la turbina se convierte posteriormente en energia electrica al pasar por un generador electrico.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de la Turbina de Gas:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7);
        switch (modalidad){
            case 1:
                //printMayorValorDiaTurbinaGas();
            break;

            case 2:
                //printMayorValorMesTurbinaGas();
            break;

            case 3:
                //printPeorValorDiaTurbinaGas();
            break;

            case 4:
                //printPeorValorMesTurbinaGas();
            break;

            case 5:
                //printMediaAnualTurbinaGas2021();
            break;

            case 6:
                //printMediaAnualTurbinaGas2022();
            break;

            case 7:
                system("cls");
                printCombustiblesFosiles();
            break;

        } // Cierre switch modalidad


} //Cierre printTurbinaGas



void printTurbinaVapor(){
    int modalidad;

    do{
        printf("\n¡Usted ha seleccionado la obtencion de energia a partir de la Turbina de Vapor!\n\n");
        printf("Como curiosidad usted debe saber... la turbina de vapor compone el ciclo de Rankine. Dicho ciclo podemos separarlo en 4 etapas.\
 La etapa 1-2 donde se produce una compresion isoentropica de agua liquida en la bomba. La presion del agua aumenta\
 para ser introducida en la caldera. En la etapa 2-3, manteniendp la presion, el agua se calienta hasta la temperatura\
 de ebullicion, se evapora y despues se aumenta la temperatura del vapor de agua. En la etapa 3-4, se produce la expansion\
 isoentropica en la turbina por lo que el agua se descomprime provocando el movimiento de la turbina y se enfria hasta llegar a\
 la temperatura del condesador. Por ultimo, tenemos la etapa 4-1 donde el agua se enfria y vuelve a la bomba para iniciar,\
 de nuevo, el ciclo. El rendimiento maximo en un ciclo de Rankine es del 30%\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de la Turbina de Vapor:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7);
        switch (modalidad){
            case 1:
                //printMayorValorDiaTurbinaVapor();
            break;

            case 2:
                //printMayorValorMesTurbinaVapor();
            break;

            case 3:
                //printPeorValorDiaTurbinaVapor();
            break;

            case 4:
                //printPeorValorMesTurbinaVapor();
            break;

            case 5:
                //printMediaAnualTurbinaVapor2021();
            break;

            case 6:
                //printMediaAnualTurbinaVapor2022();
            break;

            case 7:
                system("cls");
                printCombustiblesFosiles();
            break;

        } // Cierre switch modalidad


} //Cierre printTurbinaVapor



void printCicloCombinado(){
    int modalidad;

    do{
        printf("\n¡Usted ha seleccionado la obtencion de energia a partir de un Ciclo Combinado!\n\n");
        printf("Como curiosidad usted debe saber... En este ciclo se decide sumar a la central termica una turbina de gas para producir\
 energia adicional a aprtir de los gases obtenidos en la combustion de los combustibles fosiles. Es decir, juntamos\
 una turbina de gas y una turbina de vapor. En este ciclo el rendimiento que obtenemos es del 45%.\n\n");

        printf("\nSeleccione que mas desea conocer sobre la obtencion de energia a partir de un Ciclo Combinado:\n");
        printf("\n\t1. Mayor Valor de Generacion Diario (Dia de Produccion y Dato)\n\t2. Mayor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t3. Peor Valor de Generacion Diario (Dia de Produccion y Dato)\n");
        printf("\t4. Peor Valor de Generacion Mensual (Mes de Produccion y Dato)\n\t5. Media Anual 2021\n\t6. Media Anual 2022\n\t7. Salir\n");
        scanf("%i", &modalidad);
        fflush(stdin);
        system("cls");
    }

    while (modalidad !=  1 && modalidad != 2 && modalidad != 3 && modalidad != 4 && modalidad != 5 && modalidad != 6 && modalidad != 7);
        switch (modalidad){
            case 1:
                //printMayorValorDiaCicloCombinado();
            break;

            case 2:
                //printMayorValorMesCicloCombinado();
            break;

            case 3:
                //printPeorValorDiaCicloCombinado();
            break;

            case 4:
                //printPeorValorMesCicloCombinado();
            break;

            case 5:
                //printMediaAnualCicloCombinado2021();
            break;

            case 6:
                //printMediaAnualCicloCombinado2022();
            break;

            case 7:
                system("cls");
                printCombustiblesFosiles();
            break;

        } // Cierre switch modalidad


} //Cierre printCicloCombinado




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


//LAS QUE ME QUEDAN POR HACER

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



void printMediaAnualHidraulica2022();

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

void printMediaAnualHidroeolica2022();

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

void printMediaAnualEolica2022();

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


void printMediaAnualFotovoltaica2022();

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

//void printMediaAnualSolarTermica2022();

void printMediaAnualOtrasRenovables2021()
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
//void printMediaAnualCarbon2022();

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
//void printMediaAnualFuelGas2022();

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
//void printMediaAnualTurbinaGas2022();

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
//void printMediaAnualTurbinaVapor2022();

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
//void printMediaAnualCicloCombinado2022();
/*
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
*/
//void printMediaAnualMotoresDiesel2022();

//void printMediaAnualResiduos2021()
//void printMediaAnualResiduos2022();


//void printMediaAnualGeneracionTotal2021();
//void printMediaAnualGeneracionTotal2022();

void printMayorValorMesHidraulica()
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
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor maximo es de %f GWh.\n", maximo);
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
void printMayorValorMesHidroeolica()
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
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor maximo es de %f GWh.\n", maximo);
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
void printMayorValorMesEolica()
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
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor maximo es de %f GWh.\n", maximo);
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
void printMayorValorMesFotovoltaica()
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
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor maximo es de %f GWh.\n", maximo);
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
void printMayorValorMesSolarTermica()
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
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor maximo es de %f GWh.\n", maximo);
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
void printMayorValorMesOtrasRenovables()
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
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor maximo es de %f GWh.\n", maximo);
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
void printMayorValorMesCarbon()
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
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor maximo es de %f GWh.\n", maximo);
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
void printMayorValorMesFuelGas()
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
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor maximo es de %f GWh.\n", maximo);
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
void printMayorValorMesTurbinaGas()
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
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor maximo es de %f GWh.\n", maximo);
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
void printMayorValorMesTurbinaVapor()
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
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor maximo es de %f GWh.\n", maximo);
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
void printMayorValorMesCicloCombinado()
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
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor maximo es de %f GWh.\n", maximo);
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
void printMayorValorMesMotoresDiesel()
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
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor maximo es de %f GWh.\n", maximo);
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
void printMayorValorMesGeneracionTotal()
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
                    float maximo;

                    maximo = Energias[N].datos[0];
                    //PARA LOS DOS AÑOS
                    for (i=0;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }
                    printf("\n\tEl valor maximo es de %f GWh.\n", maximo);
            }
}
void printPeorValorMesGeneracionTotal()
{

}
