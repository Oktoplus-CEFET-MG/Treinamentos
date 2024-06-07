#include <bits/stdc++.h>

using namespace std;

bool compara(int a, int b){
    if(a>b)
        return true;
    if(a<b)
        return false;
}

int main(){
    int n, valor = 0;

    cin >> n;

    vector<int>precos(n);

    for(int i=0; i<n; i++){
        cin >> precos[i];
    }

    sort(precos.begin(), precos.end(), compara);

    if(precos.size() >= 3){
        for(int i=0; i<precos.size(); i++){
            if(i+2 < precos.size()){
                valor += precos[i] + precos[i+1]; 
                i+=2;
            }
            else{
                valor += precos[i];
            }
        }
    }
    else{
        valor = precos[0] + precos[1];
    }

    cout << valor << endl;



    return 0;
}