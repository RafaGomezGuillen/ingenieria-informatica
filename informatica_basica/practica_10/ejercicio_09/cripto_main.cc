/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Desarrolle en C++ un programa cripto.cc cuya finalidad será encriptar
 *        y/o desencriptar ficheros de texto.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */
#include <cstring>
#include <fstream>
#include <iostream>

#include "cripto.h"
using namespace std;

string xor_operation(string inp_string) {
  char encryption_key = 'A';
  string out_string = "";
  int j = inp_string.length();

  int i = 0;
  while (i < j) {
    out_string += inp_string[i] ^ encryption_key;
    i++;
  }
  return out_string;
}

int main(int argc, char* argv[]) {
  ifstream Fichero_entrada;
  ofstream Fichero_Salida("Fichero_salida.txt");
  Fichero_entrada.open(argv[1]);
  Fichero_Salida.open(argv[2]);

  switch ((*argv)[4]) {
    case '1':
      if ((*argv)[6] == '+') {
        if (Fichero_Salida.is_open()) {
          if (Fichero_entrada.is_open()) {
            string linea = argv[5];
            while (getline(Fichero_entrada, linea)) {
              string encrypted_string = xor_operation(linea);
              Fichero_Salida << encrypted_string << endl;
            }
          } else {
            cerr << "No se ha podido abrir Fichero.txt" << endl;
          }
        } else {
          cerr << "No se ha podido abrir Fichero_copiado.txt" << endl;
        }
      } else if ((*argv)[6] == '-') {
        if (Fichero_Salida.is_open()) {
          if (Fichero_entrada.is_open()) {
            string linea = argv[5];
            while (getline(Fichero_entrada, linea)) {
              string decrypted_string = xor_operation(linea);
              Fichero_Salida << decrypted_string << endl;
            }
          } else {
            cerr << "No se ha podido abrir Fichero.txt" << endl;
          }
        } else {
          cerr << "No se ha podido abrir Fichero_copiado.txt" << endl;
        }
      }
      break;

    case '2':
      if ((*argv)[6] == '+') {
        if (Fichero_Salida.is_open()) {
          if (Fichero_entrada.is_open()) {
            string msg;
            while (getline(Fichero_entrada, msg)) {
              string limit = argv[5];
              int key = stoi(limit);
              cin >> key;
              cin.ignore();
              string encryptedText = msg;
              int j = msg.size();

              for (int i = 0; i < j; i++) {
                if (msg[i] == 32) {
                  continue;  // 32 is ASCII of space character, we will ignore
                             // it
                } else {
                  if ((msg[i] + key) > 122) {
                    // after lowercase z move back to a, z's ASCII is 122
                    int temp = (msg[i] + key) - 122;
                    encryptedText[i] = 96 + temp;
                  } else if (msg[i] + key > 90 && msg[i] <= 96) {
                    // after uppercase Z move back to A, 90 is Z's ASCII
                    int temp = (msg[i] + key) - 90;
                    encryptedText[i] = 64 + temp;
                  } else {
                    // in case of characters being in between A-Z & a-z
                    encryptedText[i] += key;
                  }

                }  // if
              }    // for
              Fichero_Salida << encryptedText;
            }
          } else {
            cerr << "No se ha podido abrir Fichero.txt" << endl;
          }
        } else {
          cerr << "No se ha podido abrir Fichero_copiado.txt" << endl;
        }
      } else if ((*argv)[6] == '-') {
        if (Fichero_Salida.is_open()) {
          if (Fichero_entrada.is_open()) {
            string encpMsg;
            while (getline(Fichero_entrada, encpMsg)) {
              string limit = argv[5];
              int dcyptKey = stoi(limit);
              cin >> dcyptKey;
              cin.ignore();
              string decryptedText = encpMsg;
              int j = encpMsg.size();

              for (int i = 0; i < j; i++) {
                if (encpMsg[i] == 32) {
                  continue;  // ignoring space
                } else {
                  if ((encpMsg[i] - dcyptKey) < 97 &&
                      (encpMsg[i] - dcyptKey) > 90) {
                    int temp = (encpMsg[i] - dcyptKey) + 26;
                    decryptedText[i] = temp;
                  } else if ((encpMsg[i] - dcyptKey) < 65) {
                    int temp = (encpMsg[i] - dcyptKey) + 26;
                    decryptedText[i] = temp;
                  } else {
                    decryptedText[i] = encpMsg[i] - dcyptKey;
                  }
                }
              }
              Fichero_Salida << decryptedText;
            }
          } else {
            cerr << "No se ha podido abrir Fichero.txt" << endl;
          }
        } else {
          cerr << "No se ha podido abrir Fichero_copiado.txt" << endl;
        }
      }
      break;
  }
}
