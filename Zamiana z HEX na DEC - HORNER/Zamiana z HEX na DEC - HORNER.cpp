// Zamiana z HEX na DEC - HORNER.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

long oblicz(string hex)
{
    double w =0;
    int pot = 0;
    for (int i = hex.size() - 1; i >= 0; i--)
    {
        if ((int)hex[i] - 48 < 10)
        {
            w = w + (pow(16, pot) * ((int)hex[i] - 48));
        }
        else w = w + (pow(16, pot) * ((int)hex[i] - 55));
        pot++;
    }
    return w;
}


int main()
{
    string hex;
    cout << "Wpisz liczbe szesnastkowa: ";
    cin >> hex;
    cout << endl;
    cout << "Twoja liczba w systemie 16: " << hex << endl;
    cout << "Twoja liczba w systemie 10: " << oblicz(hex);
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
