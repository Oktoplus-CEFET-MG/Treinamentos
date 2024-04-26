#include <bits/stdc++.h>
#include <math.h>

using namespace std;

typedef struct frase
{
    int posi;
    int num;
    string texto;
} frase;


int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int tam;
        cin >> tam;
        string frase, decode = "";
        cin >> frase;
        
        for (int j = 0; j < tam; j++)
        {

            if(frase[j] >= '3'){ // como o alfabeto varia de 1 a 26, se vem mais que 2, obrigatoriamente é digito unico
                decode += 'a' + (frase[j] - '0') - 1;
            }
            else if(j + 1 < tam && j + 2 < tam && frase[j + 2] == '0'){ // analise de possivel 2 digitos
                if(j + 3 >= tam || (j + 3 < tam && frase[j + 3] != '0')){ //analise se realmente é dois digitos certo, ou se está roubando 0 de um possivel "100"(j)
                    decode += 'a' + (frase[j] - '0') * 10 + (frase[j+1] - '0') - 1;
                    j+=2;
                }
                else{ //caso seja o a ou b
                    decode += 'a' + (frase[j] - '0') - 1;
                }
            }
            else{ // caso seja o digito a ou b
                decode += 'a' + (frase[j] - '0') - 1;
            }
        }
        cout << decode << endl;
    }
    
    return 0;
}

