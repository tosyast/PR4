#include <iostream>
#include <string>
using namespace std; //объявление
#include <windows.h>

int factorial(int n) {
    int num;
    if (n > 0) {
        int fact = 1;
        for (int s = 1; s <= n; s++) {
            fact *= s;
        }
        std::cout << "Факториал: " << fact;
        return fact;
    }
    else {
        std::cout << "Число должно быть больше 0. Введите еще раз: ";
        cin >> num;
        factorial(num);
    }
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    std::cout << "Введите число: ";
    cin >> number;
    factorial(number);
    return 0;

}
   

