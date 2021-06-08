#include <bits/stdc++.h>

using namespace std;

// https://neps.academy/br/exercise/323


int main(){
    int a, acc = 0;

    cin >> a;

    while(a != 1){
        acc++;
        a = a%2 ? 3*a+1 : a/2;
    }
    cout << acc << endl;
    return 0;
}

/* vim: set ai et ts=4 sw=4 ft=cpp nu: */
