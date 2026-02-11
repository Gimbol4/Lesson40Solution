#include <iostream>
#include <Windows.h>
#include <string>


using namespace std;

//string bar(int a) {
//	string s = "";
//	while (a > 0) {
//		s = s + (char)254;
//		a--;
//	}
//	return s;
//}

string symbol(int a) {
	string s = "";
	int code = 0;
	while (code < a) {
		s += to_string(code) + " - " + (char)code + '\n';
		code++;
	}
	return s;
}


int main() {
	int a;
	do {
		system("cls");
		cout << "Input a postive number: ";
		cin >> a;
	} while (a <= 0);
	cout << symbol(a) << (char)176;
	//while (3)
	//}
	return 0;
}//□ ■░