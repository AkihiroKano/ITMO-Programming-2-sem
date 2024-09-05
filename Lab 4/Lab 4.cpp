#include "Lab 4 functions.h"
#include "vector"

class Menu {
public:
    void menu() {
        std::cout << "1. Add a rectangle\n";
        std::cout << "2. Add an ellipse\n";
        std::cout << "3. Sum of perimeters\n";
        std::cout << "4. Sum of areas\n";
        std::cout << "5. Show all shapes\n";
        std::cout << "6. Memory occupied by all the figures\n";
        std::cout << "7. Exit\n";
    }
};

int main() {
    std::vector<Figure *> figures;
    Menu menu;
    menu.menu();
    int command;
    while (std::cin >> command) {
        if (command == 1) {
            Rectangle *rectangle = new Rectangle;
            rectangle->initFromDialog();
            figures.push_back(rectangle);
        } else if (command == 2) {
            Ellipse *ellipse = new Ellipse;
            ellipse->initFromDialog();
            figures.push_back(ellipse);
        } else if (command == 3) {
            double sum = 0;
            for (auto i: figures) {
                sum += i->perimeter();
            }
            std::cout << sum << '\n';
        } else if (command == 4) {
            double sum = 0;
            for (auto i: figures) {
                sum += i->area();
            }
            std::cout << sum << '\n';
        } else if (command == 5) for (auto i: figures) i->draw();
        else if (command == 6) {
            double sum = 0;
            for (auto i: figures) sum += i->size();
            std::cout << sum << '\n';
        } else if (command == 7) {
            for (const auto &fig: figures) {
                delete fig;
            }
            break;
        } else std::cout << "Try again";
    }
}