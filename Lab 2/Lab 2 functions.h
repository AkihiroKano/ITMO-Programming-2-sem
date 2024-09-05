#ifndef BASICS_OF_PROGRAMMING_CPP_2_LABA_FUNCTIONS_H
#define BASICS_OF_PROGRAMMING_CPP_2_LABA_FUNCTIONS_H

#include <iostream>
#include <string>

class FileReader {
    std::string file_name;
    FILE *file= nullptr;
public:
    FileReader() = default;

    bool open_file(const std::string &transmitted_file_name);

    bool get_file_name();

    bool is_file_open() const;

    void is_file_ended() const;

    bool get_next_word();

    bool get_next_line();

    bool close_file();
};

#endif //BASICS_OF_PROGRAMMING_CPP_2_LABA_FUNCTIONS_H