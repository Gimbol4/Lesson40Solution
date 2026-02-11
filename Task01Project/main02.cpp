#include <iostream>
#include <Windows.h>

using namespace std;

int reverse(int a);

int main() {
	int a;
	do {
		system("cls");
		cout << "Input a postive number: ";
		cin >> a;
	} while (a <= 0);

	while (a >= 0) {
		system("cls");
		cout << a;
		a--;
		Sleep(500);
	}
	system("cls");
	cout << "Complete.";
	return 0;
}

int reverse(int a) {
	int res = 0;
	while (a > 0) {
		res = res * 10;
		res = res + (a % 10);
		a = a / 10;
	}
	return res;
}