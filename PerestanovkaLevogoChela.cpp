#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	if ( a > 99 && a < 1000) {
	a = (a % 100 * 10) + ((a - a % 100)/100);
	cout << a << endl;
	}
	else cout << "wait that's illegal!\n";
	system("pause");
	return 0;
}
