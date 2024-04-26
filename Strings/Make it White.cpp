#include <bits/stdc++.h>


using namespace std;



int main(){
   int n;
   cin >> n;
   int r[n]={0};
   for (int i = 0; i < n; i++)
   {
        int t=0,prim =0 ,fim =-1;
        string c;
        //tamanho da string c
        cin>>t;
        cin>>c;
        for (int j = 0; j < t; j++)
        {
            if(c[j]=='B'){
              //a posiçao do primeiro B
                prim=j;
        
                break;
            }
        }
        for (int j = t-1; j >= 0; j--)
        {
            if(c[j]=='B'){
               //a posiçao ddo ultimo B
                fim=j;
         
                break;
            }
        }
        // abaixo a seguinte logica  e fim e igual ao começo  o resultado e 1 se nao vai ser feito atravez da diferença de fim com prim
        if(fim==prim)
            r[i]=1;
        else
        //essa diferença +1 dar um numero de casas a serem pintadas
            r[i]=fim-prim+1;
   }
   for (int i = 0; i < n; i++)
   {
     cout<<r[i]<<endl;
   }
   

}
