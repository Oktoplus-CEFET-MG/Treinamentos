#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n=15,j=0;

    int x[n]={0};
    string d=" ";
while(getline( cin, d )){   

    for (int i = 0; i < d.size(); i++)
    {
       if( d[i]!=' ' ){ 
        if(i%2 == 1){
            if(d[i]<'a')
                d[i]+=32;
        }else{
            if(d[i]>='a')
                d[i]-=32;
        }}
    }
    cout<<d<<endl;
    j++;
    };

}