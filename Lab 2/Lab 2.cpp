#include "Lab 2 functions.h"

class Menu {
public:
    void showMenu() {
        std::cout << "1. Open file\n";
        std::cout << "2. Get file name\n";
        std::cout << "3. Check if a file is open\n";
        std::cout << "4. Check if the file has ended\n";
        std::cout << "5. Get next word from file\n";
        std::cout << "6. Get next line from file\n";
        std::cout << "7. Close file\n";
        std::cout << "8. Exit\n";
    }
};

int main() {
    Menu menu;
    FileReader fileReader;
    int num;
    menu.showMenu();
    while (std::cin >> num) {
        if (num == 1) {
            std::string filename;
            std::cout << "File path expected: ";
            std::cin >> filename;
            bool flag = fileReader.open_file(filename);
            if (flag) std::cout << "File open\n";
            else std::cout << "Error opening file\n";
        } else if (num == 2) {
            bool flag = fileReader.get_file_name();
            if (!flag) std::cout << "Error\n";
        } else if (num == 3) {
            bool flag = fileReader.is_file_open();
            if (flag) std::cout << "File open\n";
            else std::cout << "Error\n";
        } else if (num == 4) fileReader.is_file_ended();
        else if (num == 5) {
            bool flag = fileReader.get_next_word();
            if (!flag) std::cout << "Error\n";
        } else if (num == 6) {
            bool flag = fileReader.get_next_line();
            if (!flag) std::cout << "Error\n";
        } else if (num == 7) {
            bool flag = fileReader.close_file();
            if (flag) std::cout << "The file is closed\n";
            else std::cout << "Error\n";
        } else if (num == 8) {
            return 0;
        } else std::cout << "Invalid command\n";
    }
}
// C:/Users/Akihiro/CLionProjects/Basics_of_programming_cpp/cmake-build-debug/files/2laba.txt