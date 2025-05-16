#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    cout << "resolucao do exercicio https://neps.academy/br/exercise/49\n";
    cout << fixed << setprecision(2);
    char operacao;
    double a, b;

    cin >> operacao;
    cin >> a >> b;

    if(operacao == 'M'){
        cout << a * b;
    } else{
        cout << a / b;
    }

    return 0;
}
