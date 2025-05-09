#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "resolucao do exercicio https://neps.academy/br/exercise/141\n";
    int M, hora=0, minuto;
    cin >> M;
    minuto = M;
    while(M >= 60){
        hora += 1;
        M -= 60;
        minuto = M;
    }
    cout << hora << "\n" << minuto << "\n";
    return 0;
}