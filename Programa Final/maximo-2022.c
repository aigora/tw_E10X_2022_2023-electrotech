//FUNCIÓN QUE LEE EL FICHERO Y HACE EL MÁXIMO 2021

#include <stdio.h>

typedef struct
{
    float m, a;
}fecha;

typedef struct
{
    char tipo[20];
    float datos[23]; //porque hay dos años, es decir 24 meses
}Energia;  //vector de estructuras (LO TENGO QUE DECLARAR EN LA FUNCION VOID)

int numerodelineas();

int main()
{
     char aux0, aux1, aux2, x;
    int contador=0, i=0, j, lineas;
    //int numerodefilas=0;
    int numerodeenergias=0, numerodefechas=0;

    lineas=numerodelineas();
    FILE *pf;

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

                numerodefechas=lineas-4; //le restamos las 4 primeras filas

                fecha vfecha[23];

                float prueba1, prueba2;
                char aux4[10];

                fscanf(pf, "%[^,]", &aux4);//para que lea la palabra antes hasta la coma

                int n=0;

                    for(n=0;n<24;n++)
                        {
                            fscanf(pf, "%c %f %c %f", &coma1, &vfecha[n].m, &barra, &vfecha[n].a);
                        }

                numerodeenergias=lineas-5; //le restamos las 5 primeras filas

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
                    N=2;
                    float maximo;
                    maximo = Energias[N].datos[0];

                    //PARA EL PRIMER AÑO
                    for (i=12;i<23;i++)
                    {
                        if (Energias[N].datos[i]>maximo)
                        {
                            maximo=Energias[N].datos[i];
                        }
                    }

                    i=0;
                        while (Energias[N].datos[i] != maximo)
                        {
                            u++;//contador para el mes
                            i++;
                        }

                    printf("\n\tEl valor maximo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, maximo);
            }
}


int numerodelineas()
{

        int numerodefilas=0;
        char aux0;

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

        //numerodefilas++; quitarlo

        return numerodefilas;
}
/*
    VALORES QUE TOMA LA N PARA LOS DATOS DE CADA ENERGÍA
0 hidraulica
1 turbinacion bombeo
2 nuclear
3 carbon
4 fuel+gas
5 motor diesel
6 turbina de gas
7 turbina de vapor
8 ciclo combinado
9 hidroeolica
10 eolica
11 solar foto
12 solar termica
13 otras renovables
14 cogeneracion
15 residuos no renovables
16 residuos renovables
17 generacion total

*/
