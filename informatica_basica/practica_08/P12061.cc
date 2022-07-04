#include <iostream>
using namespace std;

int main(){
  string frase;
	bool sentencia = false;
	int respuesta = 0;
	
	while (cin >> frase && frase != "end") {
		if (sentencia) ++respuesta;
		else if (frase == "beginning") sentencia = true;
	}
	if (sentencia && frase == "end") {
    cout << respuesta << endl;
  } else {
    cout << "wrong sequence" << endl;
  }
  return 0;
}