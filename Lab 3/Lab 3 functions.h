#ifndef BASICS_OF_PROGRAMMING_CPP_3_LABA_FUNCTIONS_H
#define BASICS_OF_PROGRAMMING_CPP_3_LABA_FUNCTIONS_H

#include "iostream"
#include "cmath"

class Square {
private:
    double x, y;
    double side;
    double angle;
public:
    Square(double x, double y, double side, double angle);

    bool operator==(const Square &other) const;

    bool operator!=(const Square &other) const;

    bool operator<(const Square &other) const;

    bool operator>(const Square &other) const;

    Square operator*(double value) const;

    Square operator+(const std::pair<double, double> &vector) const;

    void output_square();
};

class Stack {
private:
    int stack[100];
    int top;
public:
    Stack();

    Stack &operator<<(int value);

    Stack &operator>>(int &variable);

    void output_stack();
};

#endif //BASICS_OF_PROGRAMMING_CPP_3_LABA_FUNCTIONS_H
