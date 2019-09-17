#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float a;
	cin >> a;
	if (a >= 0) cout << floor(a / 1024) << endl;
	else cout << "Не ну это бан";
	system("pause");
	return 0;
}
