#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<int> alunos(n, 0), time_temp;
    vector<vector<int>> times;

    for(int i = 0; i < n; i++){
        cin >> alunos[i];
    }
    sort(alunos.begin(), alunos.end());
    
    for (int i = 0; i < n && alunos[i] <= 5 - k ; i++) //enquanto analiso alunos que podem participar eu formo times
    {
        time_temp.push_back(alunos[i]);
        if(time_temp.size() == 3){
            times.push_back(time_temp);
            time_temp.clear();
        }
    }
    cout << times.size() << endl;    
}