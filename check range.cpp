#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int a, b, c;
	cout << "Введите цифру: ";
	cin >> a;
	cout << "Введите диапазон: ";
	cin >> b >> c;
	if (b > c) swap(b, c);

	cout << ((a >= b && a <= c) ? "Число входит в диапазон": "ошибка");
	
	
}