#include <iostream>
#include <cmath>

int main() {
    const double pi = 3.141592653589793; // значение числа Пи
    double d1, d2;

    // Ввод диаметров форм
    std::cout << "Введите диаметр формы по рецепту: ";
    std::cin >> d1;
    std::cout << "Введите диаметр нужной формы: ";
    std::cin >> d2;

    // Вычисление коэффициента перерасчета
    double coeff = (d2 * d2) / (d1 * d1);

    // Вывод результата
    std::cout << "Коэффициент перерасчета ингредиентов: " << coeff << std::endl;

    return 0;
}