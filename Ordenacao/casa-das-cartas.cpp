#include <bits/stdc++.h>
using namespace std;

typedef struct{
    int valor;
    int resto;
    int deputados;
} propina;

bool comparacao(propina p1, propina p2);

int main(){
    int n, m; cin >> n >> m;
    vector<propina> ofertas(n, {0, 0, 0});
    for(int i = 0; i < n; i++){
        cin >> ofertas[i].valor;
        ofertas[i].deputados = ofertas[i].valor / m;
        ofertas[i].resto = ofertas[i].valor % m;
    }
    
    sort(ofertas.begin(), ofertas.end(), comparacao); // orderno em ordem decrescente o resto de cada propina, se acho resto igual, orderno em decrescente pelo valor para os deputados
    for (int i = 0; i < n; i++)
        cout << ofertas[i].valor << " ";
     cout << endl;
    
}

bool comparacao(propina p1, propina p2){ 
    if(p1.resto == p2.resto){
        return p1.deputados > p2.deputados;
    }
    return p1.resto > p2.resto;
}
