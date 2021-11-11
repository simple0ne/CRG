#include <iostream>
using namespace std;

int main() {
	int jednotka;
	cout << "Co je auto ? 1)kvet 2)vozidlo 3)ovocie 4)nastroj" << endl;
	cin >> jednotka;
	if (jednotka == 2) {
		cout << "spravna odpoved" << endl;


		int dvojka;
			cout << "Mas rad CRG ? 5)ano 6)nie 7)mozno 8)neviem" << endl;
		cin >> dvojka;
		if (dvojka == 1) {
			cout << "spravna odpoved" << endl;


			int trojka;
			cout << "Akej farby je slnko ? 9)zelena 10)fialova 11)zlta 12)tyrkysova" << endl;
			cin >> trojka;
			if (trojka == 11) {
				cout << "dokoncil si test" << endl;
			}

			else {
			cout << "odpovedal si nespravne, skus to znova" << endl;
			}

		else {
		cout << " nespravna odpoved, skus to znova" << endl;
		}
	else {
	cout << "skus to znova" << endl;
	}