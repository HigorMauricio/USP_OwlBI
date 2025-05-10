#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "resolucao do exercicio https://neps.academy/br/exercise/52\n";
    int N;
    cin >> N;
    bool A=false, B=false;
    
    for (int i=0; i<N; i++){
        int acoes;
        cin >> acoes;
        if (acoes == 1){
            if(A) A = false;
            else A = true;
        } else{
            if(B) B = false;
            else B = true;
            if (A) A = false;
            else A = true;
        }
    }

    if(A) cout << 1 << "\n";
    else cout << 0 << "\n";

    if(B) cout << 1 << "\n";
    else cout << 0 << "\n";
    return 0; 
}