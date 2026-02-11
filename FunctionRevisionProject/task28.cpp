// Задание 28: Объявите функцию `average`, которая принимает три числа 
// с плавающей запятой и возвращает среднее арифметическое их значение.
#include <iostream>
using namespace std;

double average(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {
    float a = 1.5f, b = 2.5f, c = 3.5f;
    cout << average(a, b, c);
    return 0;
}