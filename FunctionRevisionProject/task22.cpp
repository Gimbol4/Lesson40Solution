// Задание 22: Добавьте прототип функции, которая принимает большое 
// вещественное значение и возвращает его квадрат.

#include <iostream>
using namespace std;

double square(float num);

int main() {
    cout << square(3.5f);
    return 0;
}

double square(float num) {
    return num * num;
}

