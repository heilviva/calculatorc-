#include <iostream>
#include <cmath>

using namespace std;

double addition(double a, double b) {
    return a + b;
}


double subtraction(double a, double b) {
    return a - b;
}
double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;
    }
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double number) {
    if (number >= 0) {
        return sqrt(number);
    }
    else {
        cout << "Ошибка: невозможно извлечь квадратный корень из отрицательного числа!" << endl;
        return 0;
    }
}
double percent(double number) {
    return number * 0.01;
}

unsigned long long factorial(int number) {
    if (number < 0) {
        cout << "Ошибка: невозможно вычислить факториал отрицательного числа!" << endl;
        return 0;
    }
    else if (number == 0) {
        return 1;
    }
    else {
        unsigned long long result = 1;
        for (int i = 1; i <= number; i++) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int choice;
    double num1, num2;

    do {
        // Вывод меню
        cout << "Выберите операцию:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Нахождение квадратного корня" << endl;
        cout << "7. Нахождение 1 процента от числа" << endl;
        cout << "8. Найти факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;
        cout << "Введите номер операции: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << addition(num1, num2) << endl;
            break;
        case 2:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << subtraction(num1, num2) << endl;
            break;
        case 3:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << multiplication(num1, num2) << endl;
            break;
        case 4:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << division(num1, num2) << endl;
            break;
        case 5:
            cout << "Введите основание и показатель степени: ";
            cin >> num1 >> num2;
            cout << "Результат: " << power(num1, num2) << endl;
            break;
        case 6:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Результат: " << squareRoot(num1) << endl;
            break;
        case 7:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Результат: " << percent(num1) << endl;
            break;
        case 8:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Результат: " << factorial(num1) << endl;
            break;
        case 9:
            cout << "Программа завершена." << endl;
            break;
        default:
            cout << "Ошибка: неверный выбор операции!" << endl;
            break;
        }

        cout << endl;
    } while (choice != 9);

    return 0;
}