#include "Lab 3 functions.h"

int main() {
    Square square1(0, 0, 5, 30);
    Square square2(1, 1, 5, 30);

    // Явный вызов оператора ==
    if (square1.operator==(square2)) {
        std::cout << "Squares are equal\n";
    } else {
        std::cout << "Squares are not equal\n";
    }

    // Неявный вызов оператора !=
    if (square1 != square2) {
        std::cout << "Squares are not equal\n";
    } else {
        std::cout << "Squares are equal\n";
    }

    // Явный вызов оператора <
    if (square1.operator<(square2)) {
        std::cout << "Square1 is smaller than square2\n";
    } else {
        std::cout << "Square1 is not smaller than square2\n";
    }

    // Неявный вызов оператора >
    if (square1 > square2) {
        std::cout << "Square1 is greater than square2\n" << std::endl;
    } else {
        std::cout << "Square1 is not greater than square2\n";
    }

    // Явный вызов оператора *
    Square scaledSquare = square1.operator*(2);
    std::cout << "Multiplication by 2: ";
    scaledSquare.output_square();

    // Неявный вызов оператора +
    std::pair<double, double> vector = std::make_pair(2, 2);
    Square translatedSquare = square1 + vector;
    std::cout << "Vector addition (2, 2): ";
    translatedSquare.output_square();

    Stack stack;

    // Явный вызов оператора <<
    stack.operator<<(10);
    stack.operator<<(20);

    // Неявный вызов оператора <<
    stack << 40;
    stack << 80;

    // Явный вызов оператора >>
    int value;
    stack.operator>>(value);
    std::cout << "Number from stack: " << value << '\n';

    // Неявный вызов оператора >>
    stack >> value;
    std::cout << "Number from stack: " << value << '\n';

    // Вывод стека
    std::cout << "Stack: \n";
    stack.output_stack();
}
