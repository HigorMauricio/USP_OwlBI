#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "resolução do exercicio https://neps.academy/br/exercise/2067";
    int D, A, N, valor;
    cin >> D >> A >> N;
    if(N == 1){
        valor = 31 * D; 
    } else if (N <= 15){
        valor = (31 - N +1) * (D + (N-1)*A);
    } else{
        valor = (31 - N +1) * (D + 14*A);
    }
    cout << valor;
    return 0;
}