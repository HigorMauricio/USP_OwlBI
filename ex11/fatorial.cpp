#include <bits/stdc++.h>
using namespace std;

int Fatorial(int numero);

int main(){
    cout << "resolucao do exercicio https://neps.academy/br/exercise/174\n";
    int N, fatorial;
    cin >> N;
    fatorial = Fatorial(N);
    cout << fatorial;
    return 0;
}

int Fatorial(int numero){
    int fatorial = numero;
    if (numero == 0){
        fatorial = 1;
        return fatorial;
    }
    for(int i=2; i<numero; i++){
        fatorial *= i;
    }
    return fatorial;
}