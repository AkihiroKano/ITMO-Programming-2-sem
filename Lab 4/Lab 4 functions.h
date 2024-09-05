#ifndef BASICS_OF_PROGRAMMING_CPP_4_LABA_FUNCTIONS_H
#define BASICS_OF_PROGRAMMING_CPP_4_LABA_FUNCTIONS_H

#include "iostream"
#include "cmath"

// Интерфейс "Геометрическая фигура"
class GeoFig {
public:
    //Площадь
    virtual double area() = 0;

    //Периметер
    virtual double perimeter() = 0;
};

class Printable {
public:
    virtual void draw() = 0;
};

class DialogInitiable {
public:
    virtual void initFromDialog() = 0;
};

class BaseCObject {
public:
    virtual const char *classname() = 0;

    virtual unsigned int size() = 0;
};

class Figure : public GeoFig, public Printable, public DialogInitiable, public BaseCObject {
};

class Rectangle : public Figure {
private:
    double weight, height;
public:
    Rectangle() = default;

    double area() override {
        return weight * height;
    }

    double perimeter() override {
        return 2 * weight + 2 * height;
    }

    unsigned int size() override {
        return sizeof(Rectangle);
    }

    const char *classname() override {
        return "Rectangle";
    }

    void draw() override {
        std::cout << "Class name: " << this->classname() << '\n' << "Memory size: " << this->size() << '\n';
        std::cout << "Wight: " << weight << '\n' << "Height: " << height << '\n';
        std::cout << "Square: " << this->area() << '\n';
        std::cout << "Perimeter: " << this->perimeter() << '\n';
        std::cout << "________________________\n";
    }

    void initFromDialog() override {
        std::cout << "What parameters will the rectangle have?\nWight: ";
        std::cin >> weight;
        std::cout << "Height: ";
        std::cin >> height;
        std::cout << "________________________\n";
    }
};


class Ellipse : public Figure {
private:
    double semiMajorAxis, semiMinorAxis;
public:
    Ellipse() = default;

    double area() override {
        return 2 * M_PI * sqrt((pow(semiMinorAxis, 2)) + pow(semiMajorAxis, 2) / 2);
    }

    double perimeter() override {
        return M_PI * semiMinorAxis * semiMajorAxis;
    }

    unsigned int size() override {
        return sizeof(Ellipse);
    }

    const char *classname() override {
        return "Ellipse";
    }

    void draw() override {
        std::cout << "Class name: " << this->classname() << '\n' << "Memory size: " << this->size() << '\n';
        std::cout << "Semi Minor Axis: " << semiMinorAxis << '\n' << "Semi Major Axis: " << semiMajorAxis << '\n';
        std::cout << "Square: " << this->area() << '\n';
        std::cout << "Perimeter: " << this->perimeter() << '\n';
        std::cout << "________________________\n";
    }

    void initFromDialog() override {
        std::cout << "What parameters will the rectangle have?\nSemi Minor Axis: ";
        std::cin >> semiMinorAxis;
        std::cout << "Semi Major Axis: ";
        std::cin >> semiMajorAxis;
        std::cout << "________________________\n";
    }
};

#endif //BASICS_OF_PROGRAMMING_CPP_4_LABA_FUNCTIONS_H