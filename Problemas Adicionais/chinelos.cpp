#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p, cont=0;

    cin >> n;

    int estoque[n+1];

    for(int i=1; i<=n; i++){
        cin >> estoque[i];
    }

    cin >> p;
    int pedidos;

    for(int i=1; i<=p; i++){
        cin >> pedidos;

        if(estoque[pedidos] != 0){
            estoque[pedidos] --;
            cont ++;
        }
    }
    
    cout << cont << endl;

    return 0;
}