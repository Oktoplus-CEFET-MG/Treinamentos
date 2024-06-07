#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;

    cin >> n;

    int vet[n];

    for(int i = 0; i < n; i++)
        cin >> vet[i];
    
    cin >> k;

    int ini = 0, fim = n-1;

    while(ini < fim){
        if(vet[ini] + vet[fim] == k){
            cout << vet[ini] << " " << vet[fim] << endl;
            return 0;
        }

        else{
            if(vet[ini] + vet[fim] < k)
                ini++;
            else
                fim--;
        }
    }
    
    return 0;
}