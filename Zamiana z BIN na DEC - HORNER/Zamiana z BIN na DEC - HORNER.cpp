#include <iostream>
using namespace std;

long oblicz(int A[], int n)
{
    long w = A[0];
    for (int i = 1; i <= n; i++) w = w * 2 + A[i];
    return w;
}
int main()
{
    int tab[8] = {1,1,1,1,1,1,1,1};
    int n = 7;

    cout << oblicz(tab, n);
}
