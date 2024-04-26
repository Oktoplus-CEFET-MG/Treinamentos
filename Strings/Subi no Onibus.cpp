#include <bits/stdc++.h>


using namespace std;



int main(){
    string c="",a;
    getline(cin,a);
    
    for (int i = 0; i < a.size(); i++)
    {
        //cria a string c q e a inversa de a ao soma os char presente na string a
       c+=a[a.size()-i-1];
    }
    //compare se a=c
    if(c==a)
        cout<<"eh palindromo";
    else
        cout<<"nao eh palindromo";

}
