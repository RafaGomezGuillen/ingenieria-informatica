
/*
 *  Programa principal.
 *
 *
 *               Autores : Antonio Sedeno Noda, Sergio Alonso.
 *               Cursos  : 2012-2021
 */

#include <string.h>

#include "grafo.cpp"
#include "grafo.h"

void clrscr() { system("clear"); }
// void pressanykey() { system("pause"); }

void menu(unsigned dirigido, char &opcion) {
  cout << "Optimiza!cion en Grafos, 2021-2022 Rafael Gomez Guillen "
          "(alu010146578)"
       << endl;
  cout << "c. [c]argar grafo desde fichero" << endl;
  if (dirigido == 0)  // Grafo no dirigido
  {
    cout << "i. Mostrar [i]nformacion basica del grafo" << endl;
    cout << "a. Mostrar la lista de [a]dyacencia del grafo" << endl;
    cout << "m. Realizar un recorrido en a[m]plitud del grafo desde un nodo por sucesores" << endl; 
    cout << "r. Realizar un recorrido en p[r]ofundidad del grafo desde un nodo por sucesores" << endl;
  } else {
    cout << "i. Mostrar [i]nformacion basica del grafo" << endl;
    cout << "s. Mostrar la lista de [s]ucesores del grafo" << endl;
    cout << "p. Mostrar la lista de [p]redecesores del grafo" << endl;
    cout << "m. Realizar un recorrido en a[m]plitud del grafo desde un nodo por sucesores" << endl; 
    cout << "r. Realizar un recorrido en p[r]ofundidad del grafo desde un nodo por sucesores" << endl;
  };
  cout << "q. Finalizar el programa" << endl;
  cout << "Introduce la letra de la accion a ejecutar  > ";
  cin >> opcion;
};

int main(int argc, char *argv[]) {
  int nodo;
  int error_apertura;
  char nombrefichero[85], opcion;
  clrscr();
  if (argc > 1) {
    cout << "Cargando datos desde el fichero dado como argumento" << endl;
    strcpy(nombrefichero, argv[1]);
  } else {
    cout << "Introduce el nombre completo del fichero de datos" << endl;
    cin >> nombrefichero;
  };
  GRAFO G(nombrefichero, error_apertura);
  if (error_apertura == 1) {
    cout << "Error en la apertura del fichero desde argumento: revisa nombre y "
            "formato"
         << endl;
    //pressanykey();
    clrscr();
  } else {
    cout << "Grafo cargado desde el fichero " << nombrefichero << endl;
    //pressanykey();
    clrscr();
    do {
      menu(G.Es_dirigido(), opcion);
      switch (opcion) {
        case 'c':
          clrscr();
          cout << "Introduce el nombre completo del fichero de datos" << endl;
          cin >> nombrefichero;
          G.actualizar(nombrefichero, error_apertura);
          if (error_apertura == 1) {
            cout << "Error en la apertura del fichero: revisa nombre y formato "
                    ": puedes volver a intentarlo"
                 << endl;
          } else {
            cout << "Fichero cargado correctamente desde " << nombrefichero
                 << endl;
          };
          //pressanykey();
          clrscr();
          break;
        case 'i':
          clrscr();
          cout << "Grafo cargado desde " << nombrefichero << endl;
          G.Info_Grafo();
          //pressanykey();
          break;
          clrscr();
        case 's':
          G.Mostrar_Listas(1);  // sucesores
         // pressanykey();
          break;
          clrscr();
        case 'p':
          G.Mostrar_Listas(-1);  // predecesores
          //pressanykey();
          break;
          clrscr();
        case 'a':
          G.Mostrar_Listas(0);  // adyacencia
         // pressanykey();
          break;
          clrscr();
        case 'm':
          G.RecorridoAmplitud();
          break;
          clrscr();
        case 'r':
          G.RecorridoProfundidad();  
          //pressanykey();
          break;
          clrscr();
      }
    } while (opcion != 'q');
  }
  cout << "Fin del programa" << endl;
  exit(EXIT_SUCCESS);
  return (0);
};
