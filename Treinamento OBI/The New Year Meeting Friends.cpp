#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c; cin >> a >> b >> c;

    int ini = min(a,min(b,c));
    int fim = max(a,max(b,c));
    
    cout << fim - ini << "\n";
    return 0;
}
