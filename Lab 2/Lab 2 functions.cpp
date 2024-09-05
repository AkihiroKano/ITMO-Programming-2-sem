#include "Lab 2 functions.h"
#include <cstdio>
#include <cstring>

bool FileReader::open_file(const std::string &transmitted_file_name) {
    file = fopen(transmitted_file_name.c_str(), "r");
    if (file != nullptr) {
        file_name = strrchr(transmitted_file_name.c_str(), '/');
        return true;
    } else return false;
}

bool FileReader::get_file_name() {
    if (file != nullptr) {
        std::cout << file_name << '\n';
        return true;
    } else return false;
}

bool FileReader::is_file_open() const { return file != nullptr; }

void FileReader::is_file_ended() const {
    if (file != nullptr) {
        if (feof(file)) std::cout << "File ended\n";
        else std::cout << "File is not ended\n";

    } else std::cout << "Error\n";
}

bool FileReader::get_next_word() {
    if (file != nullptr) {
        char buffer[64];
        if (fscanf(file, "%s", buffer) != EOF) {
            std::string line = buffer;
            std::cout << line << '\n';
            return true;
        } else return false;
    } else return false;
}

bool FileReader::get_next_line() {
    if (file != nullptr) {
        char buffer[1024];
        if (fgets(buffer, 1024, file) != nullptr) {
            std::string line = buffer;
            std::cout << line << '\n';
            return true;
        } else return false;
    } else return false;
}

bool FileReader::close_file() {
    if (file != nullptr) {
        fclose(file);
        file = nullptr;
        return true;
    } else return false;
}