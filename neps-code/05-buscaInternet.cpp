#include <bits/stdc++.h>

using namespace std;

// https://neps.academy/br/exercise/515

int main(){
	int l;
	cin >> l;

    // 3o link t pessoas
    // 2o link dobro do terceiro
    // 1o link dobro do segundo


    int link3 = l;
    int link2 = 2 * link3;
    int link1 = 2 * link2;

	cout << link1 << endl;

	return 0;	
}

/* vim: set ai et ts=4 sw=4 ft=cpp nu: */
