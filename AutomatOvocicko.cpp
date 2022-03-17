#include <iostream>
#include <cstdlib>
#include <ctime> //Informácie s dátumom a časom
#include <string> //použivateľ stringu
#include <stdlib.h> //generovanie čísiel
using namespace std;

void vypocetswitch(int pole1, int pole2, int pole3, string jablko, string ceresna, string melon);
void cashziskanezahru(double cash, int pole1, int pole2, int pole3, double celkom);
int main() {
	int pole1;
	int pole2;
	int pole3;
	double cash = 0;
	double celkom = 0;
	double vlozenecash = 0;
	int count;
	string jablko = "jablko";
	string ceresna = "cerešňa";
	string melon = "melón";
	string znovu;

	cout << "Vytaj v hre AutomatOvocičko" << endl;
	srand(time(0));
	
	do {
		cout << "Vlož cash do Automatu, zatočíme." << endl;
		cin >> cash;
		cout << "Vložil si :" << cash << endl;
		
		pole1 = rand() % 8 + 1;
		pole2 = rand() % 8 + 1;
		pole3 = rand() % 8 + 1;

		vypocetswitch(pole1, pole2, pole3, jablko, ceresna, melon);
		cashziskanezahru(cash, pole1, pole2, pole3);
		vlozenecash = (vlozenecash + cash);

		cout << "Chceš hrať znova? Napíš ano." << endl;
		cin >> znovu;
			if (znovu = "ano");
		{
			cout << "Cash ktoré si vložil do automatu:" << vlozenecash << endl;
			cout << "Vyhral si:" << celkom << endl;
		}

	} while (znovu == "ano");
	system("Pauza");
	return 0;
}
void

