#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m; cin >> n >> m;
    
    set<int> pontos;
    pontos.insert(0);
    pontos.insert(n);
    map<int, int> intervalos;
    intervalos[n] = 1;

    while(m--){
        int ponto; cin >> ponto;
        auto it_depois = pontos.upper_bound(ponto);
        auto it_antes = it_depois; it_antes--;
        
        int intervalo_anterior = *it_depois - *it_antes;
        int intervalo_depois = *it_depois - ponto;
        int intervalo_antes = ponto - *it_antes;
        
        intervalos[intervalo_antes] ++;
        intervalos[intervalo_depois] ++;
        intervalos[intervalo_anterior] --;
        
        if(intervalos[intervalo_anterior] == 0){
            intervalos.erase(intervalo_anterior);
        }

        pontos.insert(ponto);

        auto maior_intervalo = intervalos.end(); maior_intervalo--;
        cout << maior_intervalo->first <<  " ";
        
    }
    cout << endl;
    return 0;
}
