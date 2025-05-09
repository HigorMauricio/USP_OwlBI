#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "resolucao exercicio https://neps.academy/br/exercise/335\n";
    int Xm, Ym, Xr, Yr, cruzamentosx, cruzamentosy, cruzamentos;
    cin >> Xm >> Ym >> Xr >> Yr;
    cruzamentosx = Xr - Xm;
    cruzamentosy = Yr - Ym;

    if (cruzamentosx < 0){
        cruzamentosx *= -1;
    }
    if (cruzamentosy < 0){
        cruzamentosy *= -1;
    }
    cruzamentos = cruzamentosx + cruzamentosy;
    cout << cruzamentos;
    return 0;
}