#include <iostream>
using namespace std;

int main () {
  float euros, yenes;
  cout << "Cuantos euros tienes?: ";
  cin >> euros;
  yenes = euros / 0.0075;
  cout << "Tienes: " << yenes << " yenes." << endl;
  return 0;
}
