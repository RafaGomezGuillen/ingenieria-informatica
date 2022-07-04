#include <iostream>
using namespace std;

int reverso(int num){
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
 
int main(){
    int numero1;
    cin>>numero1;    
    cout<< reverso(numero1)<<endl;
    return 0;
}

