/*
 *  GRAFO.CPP - Plantilla para la implementaci�n de la clase GRAFOS
 *
 *
 *  Autores : Antonio Sedeno Noda, Sergio Alonso
 *  Cursos   : 2012-2021
 */

#include "grafo.h"

void GRAFO ::destroy() {
  for (unsigned i = 0; i < n; i++) {
    LS[i].clear();
    A[i].clear();
    if (dirigido == 1) {
      LP[i].clear();
    };
  }
  LS.clear();
  LP.clear();
  A.clear();
}

void GRAFO ::build(char nombrefichero[85], int &errorapertura) {
  unsigned i, j;
  ElementoLista dummy;
  ifstream textfile;
  textfile.open(nombrefichero);

  if (textfile.is_open()) {
    textfile >> (unsigned &)n >> (unsigned &)m >> (unsigned &)dirigido;
    LS.resize(n);
    LP.resize(n);
    for (int l = 0; l < m; l++) {
      if (dirigido == 1) {
        textfile >> (unsigned &)i >> (unsigned &)j >> (int &)dummy.c;
        dummy.j = j - 1;
        LS[i - 1].push_back(dummy);
        dummy.j = i - 1;
        LP[j - 1].push_back(dummy);
      } else {
        textfile >> (unsigned &)i >> (unsigned &)j >> (int &)dummy.c;
        if (i != j) {
          dummy.j = j - 1;
          LS[i - 1].push_back(dummy);
          dummy.j = i - 1;
          LS[j - 1].push_back(dummy);
        } else {
          dummy.j = j - 1;
          LS[i - 1].push_back(dummy);
        }
      }
    }
    textfile.close();
  }
  if (dirigido != 0 && dirigido != 1) {
    errorapertura = 1;
  }
}

GRAFO::~GRAFO() { destroy(); }

GRAFO::GRAFO(char nombrefichero[85], int &errorapertura) {
  build(nombrefichero, errorapertura);
}

void GRAFO::actualizar(char nombrefichero[85], int &errorapertura) {
  destroy();
  build(nombrefichero, errorapertura);
}

unsigned GRAFO::Es_dirigido() { return dirigido; }

void GRAFO::Info_Grafo() {
  if (dirigido == 1) {
    cout << "Grafo dirigido ";
  } else {
    cout << "Grafo no dirigido ";
  };
  cout << " | nodos " << n << " | ";
  if (dirigido == 1) {
    cout << " arcos ";
  } else {
    cout << "aristas ";
  };
  cout << m << " " << endl;
}

// void Mostrar_Lista(vector<LA_nodo> L) {}

void GRAFO ::Mostrar_Listas(int l) {
  // grafo dirigidos
  if (l == 1) {
    cout << "Nodos de la lista de sucesores";
    for (int i = 0; i < LS.size(); i++) {
      cout << "\n[" << i + 1 << "]";
      for (int j = 0; j < LS[i].size(); j++) {
        cout << " "
             << ": " << LS[i][j].j  << ": "
             << "(" << LS[i][j].c << ")"<< "nuevo" << LS[5][0].j ;

      }
    }
    cout << endl;
  }
  // grafo dirigidos
  if (l == -1) {
    cout << "Nodos de la lista de predecesores";
    for (int i = 0; i < LP.size(); i++) {
      cout << "\n[" << i + 1 << "]";
      for (int j = 0; j < LP[i].size(); j++) {
        cout << " "
             << ": " << LP[i][j].j + 1 << ": "
             << "(" << LP[i][j].c << ")";
      }
    }
    cout << endl;
  }
  // grafo no dirigidos
  if (l == 0) {
    cout << "Nodos de la lista de adyacentes";
    for (int i = 0; i < n; i++) {
      cout << "\n[" << i + 1 << "]";
      for (int j = 0; j < LS[i].size(); j++) {
        cout << " "
             << ": " << LS[i][j].j + 1 << ": "
             << "(" << LS[i][j].c << ")";
      }
    }
    cout << endl;
  }
};

void GRAFO::dfs_num(unsigned i, vector<LA_nodo> L, vector<bool> &visitado,
                    vector<unsigned> &prenum, unsigned &prenum_ind,
                    vector<unsigned> &postnum, unsigned &postnum_ind)

{
  visitado[i] = true;
  // asignamos el orden de visita prenum que corresponde el nodo i
  prenum[prenum_ind++] = i;
  for (unsigned j = 0; j < L[i].size(); j++)
    if (!visitado[L[i][j].j]) {
      dfs_num(L[i][j].j, L, visitado, prenum, prenum_ind, postnum, postnum_ind);
    };
  // asignamos el orden de visita posnum que corresponde al nodo i
  postnum[postnum_ind++] = i;
}

void GRAFO::RecorridoProfundidad() {
  unsigned k;
  vector<bool> visitado;
  vector<unsigned> prenum;
  unsigned prenum_ind = 0;
  vector<unsigned> postnum;
  unsigned postnum_ind = 0;

  visitado.resize(n);
  prenum.resize(n);
  postnum.resize(n);

  cout << "Elija el nodo de partida? [1-" << n << "]: ";
  std::cin >> k;

  dfs_num(k - 1, LS, visitado, prenum, prenum_ind, postnum, postnum_ind);

  cout << "Orden de visita de los nodos en preorden" << endl;
  for (int i = 0; i < prenum_ind; i++)
    if (i < prenum.size() - 1)
      cout << "[" << prenum[i] + 1 << "] -> ";
    else
      cout << "[" << prenum[i] + 1 << "]";

  cout << endl;

  cout << "Orden de visita de los nodos en postorden" << endl;
  for (int i = 0; i < postnum.size(); i++) {
    if (i < postnum.size() - 1)
      cout << "[" << postnum[i] + 1 << "] -> ";
    else
      cout << "[" << postnum[i] + 1 << "]";
  }
  cout << endl;
}

void GRAFO::bfs_num(
    unsigned i,         // nodo desde el que realizamos el recorrido en amplitud
    vector<LA_nodo> L,  // lista que recorremos, LS o LP; por defecto LS
    vector<unsigned> &pred,  // vector de predecesores en el recorrido
    vector<unsigned> &d)     // vector de distancias a nodo i+1
// Recorrido en amplitud con la construcci�n de pred y d: usamos la cola
{
  std::vector<bool> visitado;  // creamos e iniciamos el vector visitado
  visitado.resize(n, false);
  visitado[i] = true;

  pred.resize(n, 0);  // creamos e inicializamos pred y d
  d.resize(n, 0);
  pred[i] = i;
  d[i] = 0;

  std::queue<unsigned> cola;  // creamos e inicializamos la cola
  cola.push(i);               // iniciamos el recorrido desde el nodo i+1

  while (!cola.empty())  // al menos entra una vez al visitar el nodo i+1 y
                         // continúa hasta que la cola se vacíe
  {
    unsigned k = cola.front();  // cogemos el nodo k+1 de la cola
    cola.pop();                 // lo sacamos de la cola
    // Hacemos el recorrido sobre L desde el nodo k+1
    for (unsigned j = 0; j < L[k].size(); j++)
    // Recorremos todos los nodos u adyacentes al nodo k+1
    // Si el nodo u no está visitado
    {
      if (visitado[L[k][j].j] == false) {
        // Lo visitamos
        visitado[L[k][j].j] = true;
        // Lo metemos en la cola
        cola.push(L[k][j].j);
        // le asignamos el predecesor
        pred[L[k][j].j] = k;
        // le calculamos su etiqueta distancia
        d[L[k][j].j] = d[k] + 1;
      }
    }
    // Hemos terminado pues la cola está vacía
  }
}

void GRAFO::RecorridoAmplitud() {
  unsigned nodo;
  vector<LA_nodo> L{LS};
  vector<unsigned> pred;
  vector<unsigned> d;

  cout << "Vamos a construir un recorrido en amplitud" << endl;
  cout << "Elija el nodo de partida? [1-" << n << "]: ";
  cin >> nodo;
  cout << "Nodo inicial: " << nodo;
  cout << endl;

  bfs_num(nodo - 1, L, pred, d);
  cout << "Nodos según distancia al nodo inicial en numero de aristas" << endl;
  vector<std::vector<unsigned>> naristas(d.size());
  for (int i{0}; i < d.size(); i++) {
    naristas[d[i]].push_back(i);
  }
  for (int i{0}; i < naristas.size(); i++) {
    if (naristas[i].empty()) {
      break;
    }
    cout << "Distancia " << i << " aristas : ";
    for (int j{0}; j < naristas[i].size(); j++) {
      cout << naristas[i][j] + 1;
      if (j < naristas[i].size() - 1) {
        cout << " : ";
      }
    }
    cout << '\n';
  }
  cout << '\n' << "Ramas de conexión en el recorrido" << endl;
  std::vector<std::vector<std::vector<unsigned>>> recorrido(pred.size());
  for (int i{0}; i < pred.size(); i++) {
    if (d[i] == 0) {
      continue;
    }
    unsigned rama{pred[i]};
    unsigned index = i;
    recorrido[d[i] - 1].push_back({index});
    while (rama != (unsigned)(nodo - 1)) {
      index = rama;
      rama = pred[rama];
      recorrido[d[i] - 1].back().push_back(index);
    }
    if (recorrido[d[i] - 1].back().back() != (unsigned)(nodo - 1)) {
      recorrido[d[i] - 1].back().push_back(nodo - 1);
    }
  }
  /// imprimir el vector
  for (int i{0}; i < recorrido.size(); i++) {
    for (int j{0}; j < recorrido[i].size(); j++) {
      for (int k = recorrido[i][j].size() - 1; k >= 0; k--) {
        cout << recorrido[i][j][k] + 1;
        if (k != 0) {
          cout << " - ";
        }
      }
      cout << '\n';
    }
  }
}
