#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    int vet[n];

    for(int i=0; i<n; i++)
        cin >> vet[i];
    
    int left=0, rigth=0, soma=0, soma_maxima=0;

    for(int right=0; right<n; right++){
        soma += vet[right];

        while(soma > m){
            soma -= vet[left];
            left++;
        }

        if(soma > soma_maxima)
            soma_maxima = soma;
    }

    cout << soma_maxima << endl;

    return 0;
}