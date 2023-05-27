//FUNCIÓN QUE LEE EL FICHERO Y HACE EL MÍNIMO 2021

#include <stdio.h>

typedef struct
{
    float m, a;
}fecha;

typedef struct
{
    char tipo[20];
    float datos[24]; //porque hay dos años, es decir 24 meses
}Energia;  //vector de estructuras (LO TENGO QUE DECLARAR EN LA FUNCION VOID)

int numerodelineas();

int main()
{
    char aux0, aux1, x;
    int i=0, lineas;
    int numerodeenergias=0;

    lineas=numerodelineas();
    FILE *pf;

        pf = fopen("generacion_por_tecnologias_21_22_puntos.csv", "r");
        if(pf == NULL)
            {
                printf("Error al encontrar el archivo");
            }
        else
            {
                for(i=0; i<4; i++)
                  {
                    fscanf(pf, "%c", &aux1);
                    while(aux1 != '\n')
                        {
                            fscanf(pf, "%c", &aux1);
                        }
                  }

                //AQUI TENGO QUE LEER LAS FECHAS
                char coma1, barra;//auxiliares para almacenar lo que no me interesa

                fecha vfecha[24];

                char aux4[100];

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
                    N=0;
                    float minimo;
                    minimo = Energias[N].datos[0];

                    //PARA EL PRIMER AÑO
                    for (i=0;i<12;i++)
                    {
                        if (Energias[N].datos[i]<minimo)
                        {
                            minimo=Energias[N].datos[i];
                        }
                    }

                    i=0;
                        while (Energias[N].datos[i] != minimo)
                        {
                            u++;//contador para el mes
                            i++;
                        }

                    printf("\n\tEl valor minimo se produjo en la fecha del %.0f/%.0f con un valor de %f GWh. \n", vfecha[u].m, vfecha[u].a, minimo);
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
