// Задание 25: Объявите функцию `factorial`, которая "вычисляет" 
// факториал целого числа.

#include <iostream>
using namespace std;

long long factorial(int a) {
    long long res;
    while (a > 0) {
        res = a * (a - 1);
        a--;
    }
}

int main() {
    cout << factorial(5);
    return 0;
}