#include <iostream>
using namespace std;


int main() {
  int numero1;
  cin>>numero1;
  if(1<=numero1 && numero1<=9){
    int numero2;
    cin>>numero2;
    for (int i=1; i<=numero2; i++) {
		if (i % 7 == 0){
      cout << i <<endl;
    }
  }
 }
 return 0;
}