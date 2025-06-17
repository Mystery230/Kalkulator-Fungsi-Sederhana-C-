#include <iostream>

int calculate_F(int x1, int x2) {
    int F_result = 3 * x1 + x2;
    return F_result;
}

int main() {
    int x1, x2;

    std::cout << "Masukkan nilai x1: ";
    std::cin >> x1;

    std::cout << "Masukkan nilai x2: ";
    std::cin >> x2;

    int hasil_F = calculate_F(x1, x2);

    std::cout << "Hasil F(x) = 3 * " << x1 << " + " << x2 << " adalah " << hasil_F << std::endl;

    return 0;
}

