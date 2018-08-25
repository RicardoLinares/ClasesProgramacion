#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* no cambies el tipo de main */
    int edad;
    float acumulador = 0;
    int contadorPersonas = 0;
    float promedio;

    int continuar;


    printf("Este Programa sacara el promedio de edad base a las personas que ingrese \n");
    /*
        for(contador = 0; contador < 3; contador++)
        {
            printf("Ingrese el Numero %d: ", contador + 1);
            scanf("%d", &numero);

            contadorNumeros++;
            acumulador += numero;

        }
    */
    do
    {
        //se pedira la edad de la persona
        printf("Ingrese la edad de la persona numero %d: ", contadorPersonas+1);
        scanf("%d", &edad);
        clean_stdin();
        //se la agrega al contador y al acumulador
        contadorPersonas++;
        acumulador += edad;
        //le pregunto al usuario si desea ingresar otra persona
        printf("desea ingresar otra persona? ingrese (si:1 o no:0): ");
        scanf("%d", &continuar);
        clean_stdin();
    }while(continuar);
    promedio = acumulador / contadorPersonas;

    printf("El promedio de edades es: %.2f", promedio );
    return 0;
}
// limpia el flujo del codigo
void clean_stdin()
{
    int c;
    do
    {
        c = getchar();
    }
    while (c != '\n' && c != EOF);
}
