#include <bits/stdc++.h>
using namespace std;

int idade(int filho1, int filho2, int filho3);

int main(){
    int M, A, B, C, mais_velho;
    cin >> M >> A >> B;
    C = M - (A+B);
    
    mais_velho = idade(A, B, C);
    cout << mais_velho;

    return 0;
}

int idade(int filho1, int filho2, int filho3){
    int mais_velho = filho1;
    if (filho2 > mais_velho)mais_velho = filho2;
    if (filho3 > mais_velho)mais_velho = filho3;

    return mais_velho;
}