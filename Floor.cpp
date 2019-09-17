#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float a;
	cin >> a;
	cout << floor(a / 1024) << endl;
	system("pause");
	return 0;
}
