#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<int> restos;
    while (n--)
    {
        int x, y; cin >> x >> y;
        restos.push_back(x % y);
    }
    sort(restos.begin(), restos.end());
    cout << restos[k - 1] << endl;
    return 0;
}