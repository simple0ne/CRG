
#include <iostream> // hlavicka v c++, zodpovedna za vstup a vystup
#include <cstdlib> //definuje funkcie, ulahcuje kod c++
#include <ctime> //ukazuje citatelnu hodnotu casu a datumu
#include <string> //premenna ktora uklada postupnost pismen alebo znakov
#include <stdlib.h> //hlavicka, ktora sa pouziva na poctove operacie s cislami a generovanie nahodnych cisel
using namespace std;

void switchStatementsCalculations(int& rada1, int& rada2, int& rada3, string jablko, string ceresna, string melon);

void calculatevlozenecash(double& cash, int rada1, int rada2, int rada3,double& celkom);

int main()
{
    int rada1;
    int rada2;
    int rada3;

    double cash = 0;
    double celkom = 0;
    double vlozenecash = 0;
    int count;

    string jablko = "jablko";
    string ceresna = "ceresna"; 
    string melon = "melon";
    string znovu;

    cout << "!Vytaj v hre Automat Ovocicko!" << endl;
    srand(time(0));

    do
    {

        cout << "Vloz peniaze do automatu, zatocime" << endl;
        cin >> cash;
        cout << "Vlozil si:" << cash << endl;




        rada1 = rand() % 3 + 1;
        rada2 = rand() % 3 + 1;
        rada3 = rand() % 3 + 1;

        switchStatementsCalculations(rada1, rada2, rada3, jablko, ceresna, melon);

        calculatevlozenecash(cash, rada1, rada2, rada3, celkom);

        vlozenecash = (vlozenecash + cash);





        cout << "Chces hrat znovu? Napis ano" << endl;
        cin >> znovu;
        if (znovu != "ano")
        {
            cout << "Peniaze ktore si vlozil do automatu: " << vlozenecash << endl;
            cout << "Peniaze ktore si vyhral: " << celkom << endl;
        }

    } while (znovu == "ano");


    system("Pause");
    return 0;
}

void switchStatementsCalculations(int& rada1, int& rada2, int& rada3, string jablko, string ceresna, string melon)
{
    switch (rada1)
    {
    case 1:
        cout << "Mas " << jablko << endl;
    case 2:
        cout << "Mas " << ceresna << endl;
        break;
    case 3:
        cout << "Mas " << melon << endl;
    }

    switch (rada2)
    {
    case 1:
        cout << "Mas " << jablko << endl;
        break;
    case 2:
        cout << "Mas " << ceresna << endl;
        break;
    case 3:
        cout << "Mas " << melon << endl;
    }

    switch (rada3)
    {
    case 1:
        cout << "Mas " << jablko << endl;
        break;
    case 2:
        cout << "Mas " << ceresna << endl;
        break;
    case 3:
        cout << "Mas " << melon << endl;
    }
}

void calculatevlozenecash(double& cash, int rada1, int rada2, int rada3, double& celkom)
{
    double vyhra = 0;

    if (rada1 == rada2 || rada1 == rada3 || rada2 == rada3)
    {
        cout << "Super! Vyhral si!" << endl;
        vyhra = (cash * 2);
        cout << "Vyhral si: " << vyhra << endl;
    }


    else if ((rada1 == rada2 && rada1 == rada3) || (rada2 == rada1 && rada2 == rada3) || (rada3 == rada1 && rada3 == rada2))
    {
        cout << "Gratulujem, vyhral si!" << endl;
        vyhra = (cash * 3);
        cout << "Vyhral si:" << vyhra << endl;
    }
    else
    {
        cout << "Nevyhral si, skus to znovu" << endl;
    }

    celkom = (celkom + vyhra);
}
