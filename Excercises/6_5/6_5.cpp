#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

int main() {
    double start_amount = 1000.0;
    double rate = 0.5; // Zinssatz in %
    double factor = 1.0 + rate / 100; // jährlicher Multiplikationsfaktor
    double final_amount = start_amount;

    // Überschrift
    cout << "Year" << setw(11) << "Amount" << endl;
    cout << fixed << setprecision(2);

    // Jahr 0 bis 10
    for (int year = 0; year <= 10; year++) {
        // Ausgabe für aktuelles Jahr
        cout << 2025 + year << setw(11) << final_amount << endl;

        // für nächstes Jahr den Betrag mit dem Faktor multiplizieren
        final_amount *= factor;
    }
}
