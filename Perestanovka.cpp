#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cin >> a;
	if ( a > 9 && a < 100) {
	b = a / 10;
	a = a - (b * 10);
	a = a * 10 + b;
	cout << a << endl;
	}
	else cout << "wait that's illegal!";
	system("pause");
	return 0;
}
