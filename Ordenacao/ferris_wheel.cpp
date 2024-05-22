#include <bits/stdc++.h>

using namespace std;

bool compara(int a, int b){
    if(a < b)
        return true;
    if(a > b)
        return false;
}

int main(){
    int n, x, gondolas=0;

    cin >> n >> x;

    vector<int>pesos(n);
    int inicio=0, fim=n-1;

    for(int i=0; i<n; i++){
        cin >> pesos[i];
    }

    sort(pesos.begin(), pesos.end(), compara);

    while(fim > inicio){
        if(pesos[inicio] + pesos[fim] <= x){
            gondolas++;
            inicio++;
            fim--;
        }
        else{
            gondolas++;
            fim--;
        }
    }
    if(fim == inicio)
        gondolas++;

    cout << gondolas << endl;

    return 0;
}