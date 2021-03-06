/*=============================================
======= PROGRAMA PRINCIPAL AJEDREZ     ========
=============================================*/
#include <stdio.h>
#include <stdlib.h>
#include "interfaz.h"


int
main (void)
{
  char opcion = '\0';
  int salida = 0;
  //Despliega bienvenida
  mostrar_bienvenida ();
  while (!salida)
    {

      //Despliega Menu de opciones
      mostrar_menu ();
      opcion = capturar_caracter ();

      switch (opcion)
	{
	  //Opción 1. Nueva Partida.
	case '1':
	  /*tipo_juego = modo ();
	     jugar (un_tablero, tipo_juego); */
	  break;
	  //Opción 2. Cargar Partida.
	case '2':
	  system ("clear");
	  mostrar_animacion (ANIMACION_BIENVENIDA);
	  break;
	  //Opción 3.Manual del juego.
	case '3':
	  system ("clear");
	  manual ();
	  break;
	  //Opción 4.Configuración.
	case '4':
	  system ("clear");
	  //setUp ();
	  system ("clear");
	  break;
	  //Opción 5.Salir.
	case '5':
	  mostrar_animacion (ANIMACION_DESPEDIDA);
	  system ("clear");
	  salida = 1;
	  break;
	default:
	  printf
	    ("\nNo ha introducido una opción válida. Intente de nuevo.\n");
	  opcion = '\0';
	  break;
	}
    }
  return 0;
}
