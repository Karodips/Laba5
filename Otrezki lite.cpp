#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cin >> a >> b;
	if (a > b && a > 0 && b > 0) {
		c = a / b;
		cout << c << "\n";
	}
	else cout << "wryyyy\n";
	system("pause");
	return 0;
}
