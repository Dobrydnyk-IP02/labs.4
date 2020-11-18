#include <math.h>
#include <iostream>
using namespace std;
int main() {
	double x;
	setlocale(LC_ALL, "Russian");
	cout << "¬ведiть число: "; cin >> x;
	double p = 1;
		for ( int i = 2; i <= 64; i *= 2) {
			if ((x - i + 1) != 0) {
				p *= (x - i) / (x - i + 1);
			}
		}
	cout << p;
	return 0;
}