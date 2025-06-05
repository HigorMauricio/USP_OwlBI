#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "resolucao do exercicio https://neps.academy/br/exercise/1656\n";
    int A, B, menor, maior, valor, med, C;
    cin >> A >> B;

    if (A> B){
        maior = A;
        menor = B;
    } else{
        maior = B;
        menor = A;
    }

    med = menor;
    C = 3*med - A - B;
        
    cout << C;
    return 0;
}