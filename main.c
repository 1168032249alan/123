#include <stdio.h>
#include <stdlib.h>
#include "estructuragenerica.h"
#include "string.h"
#define CANTIDAD 10
int main()
{
     char seguir ='s';
     int opcion=0;

    eGenerica listadoGenerico[CANTIDAD];
    eGen_init(listadoGenerico,CANTIDAD);

     do
        {
            printf("1: Alta de usuario \n");
            printf("2: Modificar datos del usuario \n");
            printf("3: Baja del usuario \n");
            printf("4: Publicar producto \n");
            printf("5: Modificar publicacion \n");
            printf("6: Cancelar publicacion \n");
            printf("7: Comprar producto \n");
            printf("8: Listar publicaciones del usuario \n");
            printf("9: Listar publicaciones \n");
            printf("10: Listar usuarios \n");
            scanf("%d",&opcion);

                    switch (opcion)
                {
                    case 1:
                            eGen_buscarLugarLibre(listadoGenerico,CANTIDAD);
                            eGen_alta(listadoGenerico,CANTIDAD);
                            eGen_mostrarListado(listadoGenerico,CANTIDAD);
                            break;

                    /*case 2:
                            eGen_modificacion(listadoGeneroco,CANTIDAD);
                            break;
                    case 3:
                            eGen_baja(ListadoGenerico,CANTIDAD);
                           break;

                    default:
                            printf("ingrese una opcion correcta");
                }

    eGenerica listadoGenerico[CANTIDAD];
    printf( "\n \t muestro el array... esta vacio");
    eGen_mostrarListado(listadoGenerico,CANTIDAD);
    getchar();

    printf( "\n \t muestro el array con los borrados y vacios");
    eGen_mostrarListadoConBorrados(listadoGenerico,CANTIDAD);
    //getchar();

    //eGen_alta(listadoGenerico,CANTIDAD);
    //eGen_alta(listadoGenerico,CANTIDAD);
    //printf( "\n \t cargo dos elementos y muestro el array");
    //eGen_mostrarListado(listadoGenerico,CANTIDAD);
    //getchar();

    //printf( "\n \t muestro el array con los borrados y vacios");
    //eGen_mostrarListadoConBorrados(listadoGenerico,CANTIDAD);
    //getchar();
*/

                }
        }while(opcion!=5);
    return 0 ;
}
