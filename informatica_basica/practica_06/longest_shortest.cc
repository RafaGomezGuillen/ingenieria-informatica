#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Vamos a calcular la longitud del numero de palabras introducidas."
       << endl;
  cout << endl;

  int palabras;
  int i;
  string word, shortest, longest;
  shortest = longest = word;

  cout << "Introduzca el numero de palabra que quiere calcular: ";
  cin >> palabras;

  for (i = 1; i <= palabras; i++) {
    getline(cin, word);
    cout << "Palabra " << i << ": ";
    cin >> word;
    cout << endl;

    if (i == 1) {
      longest = shortest;
      shortest = word;

    } else {
      if (word.size() > longest.size()) longest = word;
      if (word.size() < shortest.size()) shortest = word;
    }
  }

  cout << "La palabra mas corta es :" << shortest
       << " con una longitud de: " << shortest.size() << endl;
  cout << "La palabra mas larga es :" << longest
       << " con una longitud de: " << longest.size() << endl;

  return 0;
}
