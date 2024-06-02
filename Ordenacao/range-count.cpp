#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> vetor(n, {0,0});
    map<int, vector<int>> tabela;
    for(int i = 0; i < n; i++){
        cin >> vetor[i].first;
        vetor[i].second = i + 1;
        tabela[vetor[i].first].push_back(vetor[i].second);
        
    }

    int q; cin >> q;
    while(q--){
        int inicio, fim, alvo, cont = 0;
        cin >> inicio >> fim >> alvo;
        auto itInicio = lower_bound(tabela[alvo].begin(), tabela[alvo].end(), inicio);
        auto itFim = upper_bound(tabela[alvo].begin(), tabela[alvo].end(), fim);
        if(itInicio != tabela[alvo].end()){
            cont = (itFim - tabela[alvo].begin()) - (itInicio - tabela[alvo].begin());
        }
        cout << cont << endl;
    }
    
}
