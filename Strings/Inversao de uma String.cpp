#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    string s, aux;
    int n, a, b, i;

    cin >> n >> a >> b;
    cin >> s;
    
    aux = s;
    
    i = b-1;

    for(int j = a-1; j <= b-1; j++){
        aux[j] = s[i];    // aux vai receber os caracteres invertido da string s(apenas os índices de "a" até "b")
        i--;
    }

    s = aux;

    cout << s << "\n";

    return 0;
}
