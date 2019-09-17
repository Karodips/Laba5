#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	a = (a % 100 * 10) + (a / 100);
	cout << a << endl;
	system("pause");
	return 0;
}
