#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int soma=0;
        for (int j = 0; j < s1.size(); j++){
            while (s1[j] != s2[j])
            {
                soma++;
                if(s1[j] != 'z') //verificacao se tenho que voltar ao a ou seguir em frente
                    s1[j]++;
                else
                    s1[j] = 'a';
            }
        }
        cout << soma << endl;
    }
    
    return 0;
}