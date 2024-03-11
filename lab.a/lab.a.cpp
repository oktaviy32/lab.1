
#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Введіть операцію (+, -, *, /): ";
    cin >> op;

    cout << "Введіть два числа: ";
    cin >> num1 >> num2;

    switch (op) {
    case '+':
        cout << "Результат: " << num1 + num2;
        break;
    case '-':
        cout << "Результат: " << num1 - num2;
        break;
    case '*':
        cout << "Результат: " << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            cout << "Результат: " << num1 / num2;
        else
            cout << "Ділення на нуль!";
        break;
    default:
        cout << "Невірна операція!";
        break;
    }

    return 0;
}
