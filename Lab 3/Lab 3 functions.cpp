#include "Lab 3 functions.h"

Square::Square(double x, double y, double side, double angle) : x(x), y(y), side(side), angle(angle) {}

bool Square::operator==(const Square &other) const {
    return side * side * sin(angle) == other.side * other.side * sin(other.angle);
}

bool Square::operator!=(const Square &other) const {
    return !(*this == other);
}

bool Square::operator<(const Square &other) const {
    return side < other.side;
}

bool Square::operator>(const Square &other) const {
    return side > other.side;
}

Square Square::operator*(double value) const {
    return Square(x, y, side * value, angle);
}

Square Square::operator+(const std::pair<double, double> &vector) const {
    return Square(x + vector.first, y + vector.second, side, angle);
}

void Square::output_square() {
    std::cout << "Square: (x=" << x << ", y=" << y << "), side=" << side << ", angle=" << angle << '\n';
}

Stack::Stack() { top = -1; }

Stack &Stack::operator<<(int value) {
    if (top < 99) stack[++top] = value;
    return *this;
}

Stack &Stack::operator>>(int &variable) {
    if (top >= 0) variable = stack[top--];
    return *this;
}

void Stack::output_stack() {
    for (int i = top; i >= 0; --i) std::cout << stack[i] << '\n';
}