#include <iostream>

int a;

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число : ";
    std::cin >> a;
    if (a%2==0){
        std::cout << a << " Четное число.";
    }else{
        std::cout << a << " Не четное число. ";
    }
}