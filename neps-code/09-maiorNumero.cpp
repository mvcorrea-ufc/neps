#include <bits/stdc++.h>

using namespace std;

// https://neps.academy/br/exercise/323

int main(){
    int a, acc = 0;

    while((cin >> a) && a != 0){
        if(a > acc) acc = a;
    }
    cout << acc << endl;

    return 0;
}

/* vim: set ai et ts=4 sw=4 ft=cpp nu: */
