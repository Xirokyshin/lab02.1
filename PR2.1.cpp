// Lab_02.1.cpp
// < ������������ ������ ������������� >
// ����������� ������ 2.1.
// ˳��� ��������.
// ������ 16

#include <iostream>
#include <cmath>  

using namespace std;

int main() {

    double x; // ������� ��������
    double z1; // ��������� ���������� z1
    double z2; // ��������� ���������� z2

    cout << "x = "; cin >> x; // ������� �������� x / console output / ���� �����

    z1 = ((x * x + 2 * x - 3) + (x + 1) * sqrt(x * x - 9)) /
        ((x * x - 2 * x - 3) + (x - 1) * sqrt(x * x - 9));
    // ���������� �� 1 ��������

    // z2 = sqrt((x + 3) / (x - 3));
    // ���������� �� 2 ��������

    cout << endl; // console output
    cout << "z1 = " << z1 << endl; // ���� ���������� z1
    cout << "z2 = " << z2 << endl; // ���� ���������� z2

    cin.get(); // console input
    return 0;
}
