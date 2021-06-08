#include <bits/stdc++.h>

using namespace std;

// https://neps.academy/br/exercise/185


int main(){
    int size = 0; 
    int numa = 0, numb = 0, numc = 0;
    cin >> size;
    //cout << size << endl;

    int compts[size];
    int histo[6] = {0};

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
    return 0;
}

/* vim: set ai et ts=4 sw=4 ft=cpp nu: */
