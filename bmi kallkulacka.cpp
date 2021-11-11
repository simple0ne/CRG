#include <iostream>
#include "Source.h"
using namespace std;
int main() {
	float bmi, m, kg;

	cout << "zadaj vysku=m" << endl;
	cin >> m;

	cout << "zadaj vahu=kg" << endl;
	cin >> kg;
	
	bmi = (kg / (m * m)) * 10000;
	cout << bmi << endl;
		if (bmi < 18.49) {
		cout << "Podvyziva" << endl;
		}
			else if (18.5 < bmi < 25) {
			cout << "Idealna hmotnost" << endl;
			}
				else if (bmi > 25) {
				cout << "Nadvaha" << endl;
				}
				else if (bmi > 30) {
				cout << "Obeznost" << endl;
				}
		
		}