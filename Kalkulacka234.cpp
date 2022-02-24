#include <iostream>
using namespace std;

double scitanie(double c1, double c2) {
    return c1 + c2;
}
double odcitanie(double c1, double c2) {
    return c1 - c2;
}
double delenie(double c1, double c2) {
    return c1 / c2;
}
double nasobenie(double c1, double c2) {
    return c1 * c2;
}

int main()
{
zaciatok:
    int operacia;
    double c1, c2;
    cout << "cislo 1: ";
    cin >> c1;
    cout << "cislo 2: ";
    cin >> c2;

    cout << "Vyber operaciu \n 1- scitanie\n 2- odcitanie\n 3- nasobenie\n 4- delenie\n ==> ";
    cin >> operacia;

    if (operacia == 1) {
        double vysledok = scitanie(c1, c2);
        cout << "Je: " << vysledok << endl;
    }
    if (operacia == 2) {
        double vysledok = odcitanie(c1, c2);
        cout << "Je: " << vysledok << endl;
    }
    if (operacia == 3) {
        double vysledok = nasobenie(c1, c2);
        cout << "Je: " << vysledok << endl;
    }
    if (operacia == 4) {
        if (c2 == 0) {
            cout << "nulou sa neda delit " << endl;
            goto zaciatok;
        }
        double vysledok = delenie(c1, c2);
        cout << "Je: " << vysledok << endl;
    }
    if (operacia > 4 || operacia < 1) {
        cout << "Chyba" << endl;
        goto zaciatok;
    }

    cout << "Znovu? (1- ano; 2- nie): ";
    int operacia2;
    cin >> operacia2;
    if (operacia2 == 1) {
        goto zaciatok;
    }
    else {
        return 0;
    }
}