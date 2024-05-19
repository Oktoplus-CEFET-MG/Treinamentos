#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v,v+n);
    int quant = 0;
    for(int i = 0; i < n; i+=2)
        quant+=v[i+1]-v[i];
    cout << quant << "\n";

    return 0;
}
