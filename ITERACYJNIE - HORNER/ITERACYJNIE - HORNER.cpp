#include <iostream>
using namespace std;
double oblicz(double A[], int n, double x)
{
    double w = A[0];
    for (int i = 1; i <= n; i++) w = w * x + A[i];
    return w;
}
int main()
{
    int stopien;
    double wartosc;
    cout << "Wpisz stopień wielomianu: " << endl;
    cin >> stopien;
    cout << "Wpisz wartość argumentu: " << endl;
    cin >> wartosc;
    double tab[4] = {2,4,-3,7};
    cout << oblicz(tab, stopien, wartosc);

}
//Zrobiłem to dla wielomianu w(x) = 2x^3 + 4x^2 - 3x + 7