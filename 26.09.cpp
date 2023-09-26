// 26.09.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a;
    cout << "Введите цифру: ";
    cin >> a;
    switch (a) {
    case 0:
        cout << "zero";
        break;
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "three";
        break;
    case 4:
        cout << "four";
        break;
    case 5:
        cout << "five";
        break;
    case 6:
        cout << "six";
        break;
    case 7:
        cout << "seven";
        break;
    case 8:
        cout << "eight";
        break;
    case 9:
        cout << "nine";
        break;
    default:
            cout << "ошибка";
        break;
    }
}
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //calculator (only output result + - * /
    float a, b;
    char op;
    cout << "Input a ";
    cin >> a;
    cout << "Input b ";
    cin >> b;
    cout << "Выберите действие: +,-,:,*: ";
    cin >> op;
    switch (op) {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        if (b == 0) cout << "На 0 делить нельзя";
        else
        {
            cout << a / b;
        }
        cout << a / b;
        break;
    default:
        cout << "Ошибка";
        break;
    }
}