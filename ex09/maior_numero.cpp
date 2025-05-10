#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "resolucao do exercicio https://neps.academy/br/exercise/323\n";
    int maior=0;
    while(true){
        int numero;
        cin >> numero;
        if (numero == 0) break;
        else{
            if(numero > maior){
                maior = numero;
            }
        }
    }
    cout << maior;
    return 0;
}