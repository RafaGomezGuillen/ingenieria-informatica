#include <iostream>
using namespace std;

int main() {
  cout << "\nPractica 5 de Principios de Computadores. Matrices.\n";
  int nfil = 20, ncol = 10;
  int matriz[400] = {
      100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114,
      115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129,
      130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144,
      145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
      160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174,
      175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189,
      190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204,
      205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219,
      220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234,
      235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249,
      250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264,
      265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279,
      280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294,
      295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309,
      310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324,
      325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339,
      340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354,
      355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369,
      370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384,
      385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399,
      400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414,
      415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429,
      430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444,
      445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459,
      460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474,
      475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489,
      490, 491, 492, 493, 494, 495, 496, 497, 498, 499};

  for (int i = 0; i < nfil; i++) {
    for (int j = 0; j < ncol; j++) {
      int* ptElem = matriz + ncol * i + j;
      cout << *ptElem << " ";
    }
    cout << "\n";
  }
  do {
    int opcion = 1;
    while (opcion != 0) {
      cout << "\n(1) Cambiar dimensiones\n(2) Obtener elemento [i,j]\n"
              "(3) Invertir fila\n(4) Invertir columna\n(0) Salir\nElija "
              "opcion: ";
      cin >> opcion;
      if (opcion > 4) {
        cout << "\nError: opcion incorrecta.\n";
      }

      if ((opcion == 1)) {
        cout << "\nIntroduzca numero de filas: ";
        cin >> nfil;

        cout << "\nIntroduzca numero de columnas: ";
        cin >> ncol;
        if (((nfil * ncol) <= 400) && (nfil > 0) && (ncol > 0)) {
          cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
          for (int i = 0; i < nfil; i++) {
            for (int j = 0; j < ncol; j++) {
              int* ptElem = matriz + ncol * i + j;
              cout << *ptElem << " ";
            }
            cout << "\n";
          }
        } else {
          cout << "\nError: dimension incorrecta. Excede el maximo numero de "
                  "elementos (400).\n";
        }
      }

      if ((opcion == 2)) {
        int i = 0;
        int j = 0;
        cout << "\nObtener el elemento [i,j]. Introduzca indice i (primera "
                "fila indice 0): ";
        cin >> i;
        cout << "\nObtener el elemento [i,j]. Introduzca indice j (primera "
                "columna indice 0): ";
        cin >> j;
        if ((i >= 0 and j >= 0) and (i < nfil and j < ncol)) {
          int* ptElem = matriz + ncol * i + j;
          cout << "\nElemento obtenido en la posicion indicada: " << *ptElem;
        } else if ((i < 0) or (i >= nfil)) {
          cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
        } else if ((j < 0) or (j >= ncol)) {
          cout << "\nError: dimension incorrecta. Numero de columna "
                  "incorrecto.\n";
        }
      }
      if (opcion == 3) {
        cout << "\nInvertir la fila [i,*]. Introduzca indice i (primera fila "
                "indice 0): ";
        int i = 0;
        cin >> i;
        if (i < nfil) {
          int comienzo = 0;
          int final = ncol - 1;
          int* intecambio1 = matriz + ncol * i + comienzo;
          cout << "intercambio1: " << *intecambio1 << endl;
          int* intecambio2 = matriz + ncol * i + final;
          cout << "intercambio2: " << *intecambio2 << endl;
          while (comienzo < final) {
            int aux = *intecambio1;
            *intecambio1 = *intecambio2;
            *intecambio2 = aux;
            cout << "aux: " << aux << endl;
            comienzo++;
            cout << "comienzo: " << comienzo << endl;
            final--;
            cout << "final: " << final << endl;
          }
          cout << "i: "<< i << endl;
          cout << "intercambio1: " << *intecambio1 << endl;
          cout << "intercambio2: " << *intecambio2 << endl;
          for (int i = 0; i < nfil; i++) {
            for (int j = 0; j < ncol; j++) {
              int* ptElem = matriz + ncol * i + j;
              cout << *ptElem << " ";
            }
            cout << "\n";
          }
        } else {
          cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
        }
      }

      if (opcion == 4) {
        int j;
        cout << "\nInvertir la columna [*,j]. Introduzca indice j (primera "
                "columna indice 0): ";
        cin >> j;
        if (j < ncol) {
          int comienzo = 0;
          int final = nfil - 1;
          while (comienzo < final) {
            int* intecambio1 = matriz + ncol * comienzo + j;
            int* intecambio2 = matriz + ncol * final + j;
            int aux = *intecambio1;
            *intecambio1 = *intecambio2;
            *intecambio2 = aux;
            comienzo++;
            final--;
          }

          for (int i = 0; i < nfil; i++) {
            for (int j = 0; j < ncol; j++) {
              int* ptElem = matriz + ncol * i + j;
              cout << *ptElem << " ";
            }
            cout << "\n";
          }
        } else {
          cout << "\nError: dimension incorrecta. Numero de columna "
                  "incorrecto.\n";
        }
      }
    }
    if (opcion == 0) break;
  } while (true);
  cout << "\nFin del programa.\n";
}
