#include <bits/stdc++.h>

using namespace std;

// https://neps.academy/br/exercise/19int num = 0


int main(){
    int num = 0, size = 0;
    char side = '0';
    cin >> num;

    int sizeArr[num];
    char sideArr[num];

    fill(sizeArr, sizeArr+num, 0);

    for(int x = 0; x < num; x++) cin >> sizeArr[x] >> sideArr[x];

    for(int x = 0; x < num; x++) cout << sizeArr[x] << sideArr[x] << endl;
/*
    for(int x = 0; x < size; x++) cin >> compts[x];
    
    for(int x = 0; x < size; x++){ // do an histogram :)
       histo[compts[x]]++;
       if(histo[1] && histo[3] && histo[5]) {
        histo[1]--; histo[3]--; histo[5]--; numa++;
       }else if(histo[1] && histo[4]) {
        histo[1]--; histo[4]--; numb++;
       } else if(histo[2] && histo[4]) {
        histo[2]--; histo[4]--; numc++;
       }
    }

    cout << "A: " << numa << endl;
    cout << "B: " << numb << endl;
    cout << "C: " << numc << endl;
*/
    return 0;
}

/* vim: set ai et ts=4 sw=4 ft=cpp nu: */
