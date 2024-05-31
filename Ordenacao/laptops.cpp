#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;

    cin >> n;

    vector<pair<int, int>>laptops(n);

    for(int i=0; i<n; i++){
        cin >> a >> b;
        laptops[i].first = a;
        laptops[i].second = b;
    }

    sort(laptops.begin(), laptops.end());

    bool flag = true;

    for(int i=0; i<n-1; i++){
        if(laptops[i].second > laptops[i+1].second){
            cout << "Happy Alex" << endl;
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "Poor Alex" << endl;
    }

    return 0;
}