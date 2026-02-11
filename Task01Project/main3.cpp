#include <iostream>
#include <Windows.h>

using namespace std;

char bar(int a) {

}

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
	return 0;
}//□ ■