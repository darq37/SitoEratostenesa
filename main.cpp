#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "SITO ERATOSTENESA" << endl;
    cout << "Podaj zakres: " <<endl;
    cin >> n;
    cout << "Liczby od 1 do " << n << "to :" << endl;

    int tab[n]; // inicjalizuje tablice intów;
    for (int i = 1; i < n+1; ++i) {
        tab[i] = 1;
        cout << i << ", "; // wypełniam ją jakimiś wartościami, pokazuje na ekran indexy tablicy;
    }
    int j; // deklaruje zmienną j
    for (int i = 2; i< n+1; i++){ // iteruje tablice od 2 do n+1
        if (tab[i]!=0) // jeżeli index tabicy różni się od 0
            j =2*i; // zmienna j przyjmuje dwukrotną wartosc danego indexu
            while (j<=n){ //póki j jest mniejsze lub równe n
                tab[j]=0; // tablica indexów j jest wypełniana zerami;
                j+=i; // zwiększam j w taki sposób, ze j = j+i, a w konsekwencji, j = 3*i, czeli wybieram następny wolny index  i zamieniam go na 0
            }
    }
    cout <<endl;

    cout << "Liczby pierwsze z przedzialu <2," << n << "> to:\n";
    for (int k = 2; k <= n; k++)// teraz iterujac po tablicy wypelnionej 1 dla liczb pierwszych i 0 dla reszty, pokazuje wynik
        if (tab[k] != 0)
            cout << k << " ";
    cout << endl;

    return 0;
}