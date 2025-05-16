#include <bits/stdc++.h>
using namespace std;

bool eh_primo(int x);

int main(){
    cout << "resolucao do exercicio https://neps.academy/br/exercise/247\n";
	int x;
	cin>>x;
	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
    return 0;
}

bool eh_primo(int x){
    if (x==1 or x==0) return false;
	for(int i=2; i <= x/2; i++){
        if (x%i == 0) return false;
    }
    return true;
}

