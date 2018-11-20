#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "SITO ERATOSTENESA" << endl;
    cout << "Podaj zakres: " <<endl;
    cin >> n;

    int tab[n];
    for (int i = 1; i < n+1; ++i) {
        tab[i] = true;
        cout << i << ", ";
    }
    int j;
    for (int i = 2; i< n+1; i++){
        if (tab[i]!=0)
            j =2*i;
            while (j<=n){
                tab[j]=0;
                j+=i;
            }
    }
    cout <<endl;

    cout << "Liczby pierwsze z przedzialu <2," << n << "> to:\n";
    for (int k = 2; k <= n; k++)
        if (tab[k] != 0)
            cout << k << " ";
    cout << endl;

    return 0;
}