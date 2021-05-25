#include <bits/stdc++.h>

using namespace std;

// https://neps.academy/br/exercise/111

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    // so utilizando 2 viagens so basta terem 2 iguais
	if(a == b or a == c or b == c) cout << 'S' << endl;
    // utilizando as 3 viagens a soma de dois quaisquer tem de ser igual ao terceiro
    else if(a+b==c or a+c==b or c+b==a) cout << 'S' << endl;
    // restante
    else cout << 'N' << endl;

    return 0;
}

/* vim: set ai et ts=4 sw=4 ft=cpp nu: */
