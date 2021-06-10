#include <iostream>
using namespace std;
double oblicz(double A[], int n, double x)
{
    if (n == 0)
        return A[0];

    return x * oblicz(A, n - 1, x) + A[n];
}
int main()
{
    int stopien;
    double wartosc;
    cout << "Wpisz stopień wielomianu: " << endl;
    cin >> stopien;
    cout << "Wpisz wartość argumentu: " << endl;
    cin >> wartosc;
    double tab[4] = { 2,4,-3,7 };
    cout << oblicz(tab, stopien, wartosc);

}
//Zrobiłem to dla wielomianu w(x) = 2x^3 + 4x^2 - 3x + 7