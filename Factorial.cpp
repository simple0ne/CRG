#include <iostream>
using namespace std;

int main() {
	int n;
	long double factorial = 1.0;

	cout << "Zadaj cislo:"<< endl;
	cin >> n;
		if (n < 0);
			cout << "nulou sa neda nasobit";

			for (int i = 1; i <= n; ++i) {
				factorial = factorial * i;
	
			cout << "Faktorial cisla " << n << " je " << factorial << endl;
}
return 0;
}