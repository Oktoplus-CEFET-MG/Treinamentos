#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;

    cin >> m >> n;

    int matriz[m+1][n+1];

    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> matriz[i][j];

    int p, tipo, tamanho, cont = 0;

    cin >> p;

    for(int a = 0; a < p; a++){
        cin >> tipo >> tamanho;
        if(matriz[tipo][tamanho] != 0){
            matriz[tipo][tamanho]--;
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
}