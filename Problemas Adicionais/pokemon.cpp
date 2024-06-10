#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, cont = 0; cin >> n;
    set<int> pokemons;
    for (int i = 0; i < 3; i++)
    {
        int temp; cin >> temp;
        pokemons.insert(temp);
    }
    for(auto pokemon: pokemons){
        n -= pokemon;
        if(n < 0){
            break;
        }
        cont++;
    }
    cout << cont << endl;    
}