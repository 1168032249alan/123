
#include "Usuario.h"

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }
}
void mostrarListaUsuarios(eUsuario usuario[],int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        if (usuario[i].estado==1)
        {
            printf("%d %d %s \n ",usuario[i].idUsuario,usuario[i].idSerie,usuario[i].nombre);
        }
    }
}

void mostrarUsuarioConSuSerie(eUsuario usuarios[], int u, eSerie series[], int s )
{
    series[0].estado=0;
    int i;//usuarios
    int j;//series

    for(i=0;i<u;i++)
    {
        if(usuarios[i].estado==1)
        {
            //mostrar los datos del usuario
            printf("%s",usuarios[i].nombre);
        }

        for(j=0;j<s;j++)
        {
            if(usuarios[i].idSerie==series[j].idSerie)
            {
                printf("%s",series[j].nombre);

                break;
            }
        }
    }
}


