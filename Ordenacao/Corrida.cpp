#include <bits/stdc++.h>
using namespace std;

struct carros{
    int num;
    int temp;
};

typedef struct carros carros;

bool compara(carros a, carros b){
    if(a.temp < b.temp)
        return true;
    if(b.temp < a.temp)
        return false;
}

int main(){
    int n, m;

    cin >> n >> m;

    carros carros[n];
    int temp;

    for(int i = 0; i < n; i++){
        carros[i].num = i+1;
        carros[i].temp = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> temp;
            carros[i].temp += temp;
        }
    }

    sort(carros, carros+n, compara);

    for(int i = 0; i < 3; i++)
        cout << carros[i].num << "\n";

    return 0;
}
