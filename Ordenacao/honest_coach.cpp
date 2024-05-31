#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll t, n;
    cin >> t;

    for(ll i = 0; i < t; i++){
        cin >> n;
        ll vetor[n];
        for(ll j = 0; j < n; j++)
            cin >> vetor[j];
        sort(vetor, vetor+n);
        ll dif = INT_MAX;
        for(ll j = 0; j < n-1; j++){
            if(dif > vetor[j+1] - vetor[j])
                dif = vetor[j+1] - vetor[j];
        }
        cout << dif << endl;
    }
    
    return 0;
}