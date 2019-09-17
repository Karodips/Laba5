#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cin >> a;
	b = a / 10;
	a = a - (b * 10);
	a = a * 10 + b;
	cout << a << endl;
	system("pause");
	return 0;
}
