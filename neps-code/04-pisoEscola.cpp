#include <bits/stdc++.h>

using namespace std;

// https://neps.academy/br/exercise/167

int main(){
	int l, c, area, full, half;
	cin >> l >> c;

	area = 2*l*c;                   // tiles to cover the full area
	full = area/2 + (l-1)*(c-1);    // half the area plus inner parts
	half = (area - full - 1)*2;	    // the remaining minus 1 (corners)

	cout << full << endl;
	cout << half << endl;

	return 0;	
}

/* vim: set ai et ts=4 sw=4 ft=cpp nu: */
