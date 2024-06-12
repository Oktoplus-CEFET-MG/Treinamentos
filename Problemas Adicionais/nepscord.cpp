#include<bits/stdc++.h>
using namespace std;

typedef struct usuario
{
    int xp, lvl, ultimoTempo;
} usuario;


void funcao(map<string, usuario> chat);

int main(){
    int n, k; cin >> n >> k;
    map<string, usuario> chat;
    for(int i = 0; i < n; i++){
        string nome; cin >> nome;
        int tempo; cin >> tempo;
        auto busca = chat.find(nome);
        if(busca == chat.end()){
            usuario novo;
            novo.xp = 25;
            novo.lvl = 1;
            novo.ultimoTempo = tempo;
            chat[nome] = novo;
        }
        else{
            auto& atual = busca->second;
            if(tempo - atual.ultimoTempo >= k){
                atual.xp += 25;
                atual.ultimoTempo = tempo;
                if(atual.xp == 100){
                    atual.lvl++;
                    atual.xp = 0;
                }
            }
        }
    }
    funcao(chat);
    cout << endl;

    return 0;
}

void funcao(map<string, usuario> chat){
    vector<pair<string, usuario>> rascunho;
    for(auto it = chat.begin(); it!= chat.end(); it++){
        rascunho.push_back(make_pair(it->first, it->second));
    }

    sort(rascunho.begin(), rascunho.end(), [](pair<string, usuario> a, pair<string, usuario> b){
        if(a.second.lvl == b.second.lvl){
            if(a.second.xp == b.second.xp){
                return a.first < b.first;
            }
            return a.second.xp > b.second.xp;
        }
        return a.second.lvl > b.second.lvl;
    });
    cout << "--Rank do Nepscord--" << endl;
    for(int i = 0; i < 3; i++){
        if(i < rascunho.size()){
            printf("#%d. %s - Nivel %d\n", i + 1, rascunho[i].first.c_str(), rascunho[i].second.lvl);
        }
        else{
            printf("#%d.\n", i + 1);
        }
    }
}
