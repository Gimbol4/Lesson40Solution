// Задание 2: Объявите функцию `sum_large`, которая принимает небольшое 
// и большое целые числа и возвращает их сумму.

#include <iostream>
using namespace std;

int main()
{
    cout << sum_large(100, 10000000000LL);
    return 0;
}

long long sum_large(int a, int long long b) {
    return a + b;
}