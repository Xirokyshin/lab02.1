// Lab_02.1.cpp
// < Томашівський Максим Ростиславович >
// Лабораторна робота 2.1.
// Лінійні програми.
// Варіант 16

#include <iostream>
#include <cmath>  

using namespace std;

int main() {

    double x; // вхідний параметр
    double z1; // результат обчислення z1
    double z2; // результат обчислення z2

    cout << "x = "; cin >> x; // введеня значення x / console output / вивід даних

    z1 = ((x * x + 2 * x - 3) + (x + 1) * sqrt(x * x - 9)) /
        ((x * x - 2 * x - 3) + (x - 1) * sqrt(x * x - 9));
    // Обчислення за 1 формулою

    // z2 = sqrt((x + 3) / (x - 3));
    // Обчислення за 2 формулою

    cout << endl; // console output
    cout << "z1 = " << z1 << endl; // вивід результату z1
    cout << "z2 = " << z2 << endl; // вивід результату z2

    cin.get(); // console input
    return 0;
}
