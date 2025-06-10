#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "resolucao do exercicio https://neps.academy/br/exercise/521\n";
    int L, pedacos=1, quadrados = 0;
    cin >> L;
    while(L >= 2){
        pedacos *= 4;
        L /= 2;
    }

    cout << pedacos;
}