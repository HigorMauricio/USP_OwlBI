#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "resolucao do execicio: https://neps.academy/br/exercise/158\n";
    int N, V;
    cin >> N;
    int anterior, q=0, maior_q=0;
    
    for (int i=0; i<N; i++){
        cin >> V;
        if(i==0) anterior = V;

        if( V== anterior){
            q+=1;
        } else{
            if(q > maior_q){
                maior_q = q;
            }
            anterior = V;
            q = 1;
        }
    }
    if(q > maior_q) maior_q = q;
    cout << maior_q;
    return 0;
}