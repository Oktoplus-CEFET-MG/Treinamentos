#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    string aux;
    int cont=1, j=0;

    getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            aux.push_back(s[i]);;
            j++;
        } else{
            if(cont == 0){
                aux.push_back(s[i]);
                j++;
                cont++;
            } else{
                if(cont == 1)  // o cont == 1 funciona para verificar se está em um índice que contém o p (da língua do p)
                    cont = 0;  // após "pular" o p, o cont volta a ser zero para continuar preenchendo a string auxiliar
            }
        }
    }

    cout << aux << "\n";

    return 0;
}
