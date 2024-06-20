#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;

    cin >> n >> x;

    int vet[n];

    for(int i = 0; i < n; i++)
        cin >> vet[i];
    
    int ini = 0;
    int cont = 0;
    int soma = 0;

    for(int fim = 0; fim < n; fim++){
        soma = soma + vet[fim];
        while(soma > x && ini <= fim){
            soma = soma - vet[ini];
            ini++;
        }
        if(soma == x){
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
}