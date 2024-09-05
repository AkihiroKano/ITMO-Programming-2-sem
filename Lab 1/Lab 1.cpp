#include "Lab 1 functions.h"

// 3. Изменяет большую из двух переменных на её остаток от деления на вторую переменную.
// Пример работы с функцией replacement_by_the_remainder_of_the_division_by_reference (ссылка)
void example1() {
    int a = 10, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    replacement_by_the_remainder_of_the_division_by_reference(a, b);
    std::cout << "Result of replacement_by_the_remainder_of_the_division_by_reference: " << a << '\n';
}

// Пример работы с функцией replacement_by_the_remainder_of_the_division_by_pointer (указатель)
void example2() {
    int a = 10, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    replacement_by_the_remainder_of_the_division_by_pointer(&a, &b);
    std::cout << "Result of replacement_by_the_remainder_of_the_division_by_pointer: " << a << '\n';
}

// 8. Изменяют вещественную переменную на обратное к ней число.
// Пример работы с функцией reciprocal_number_by_reference (ссылка)
void example3() {
    float num = 2.0;
    std::cout << "num = " << num << '\n';
    reciprocal_number_by_reference(num);
    std::cout << "Result of inverse_number_by_reference: " << num << '\n';
}

// Пример работы с функцией reciprocal_number_by_pointer (указатель)
void example4() {
    float num = 2.0;
    std::cout << "num = " << num << '\n';
    reciprocal_number_by_pointer(&num);
    std::cout << "Result of inverse_number_by_pointer: " << num << '\n';
}

// 11. Уменьшает радиус окружности на заданное число.
// Пример работы с функцией reducing_the_radius_reference (ссылка)
void example5() {
    double radius = 5.0, amount = 2.0;
    std::cout << "radius = " << radius << ", amount = " << amount << '\n';
    reducing_the_radius_reference(radius, amount);
    std::cout << "Result of reducing_the_radius_reference: " << radius << '\n';
}

// Пример работы с функцией reducing_the_radius_pointer (указатель)
void example6() {
    double radius = 5.0, amount = 2.0;
    std::cout << "radius = " << radius << ", amount = " << amount << '\n';
    reducing_the_radius_pointer(&radius, amount);
    std::cout << "Result of reducing_the_radius_pointer: " << radius << '\n';
}

// 16. Меняет в матрице местами две указанные строчки.
// Пример работы с функцией swap_matrix_rows_by_reference (ссылка)
void example7() {
    int matrix[2][2] = {{1, 2},
                        {3, 4}};
    int *matrixPtr[2] = {matrix[0], matrix[1]};
    std::cout << "The original matrix:" << '\n' << matrixPtr[0][0] << " " << matrixPtr[0][1] << '\n' << matrixPtr[1][0]
              << " " << matrixPtr[1][1] << '\n';
    swap_matrix_rows_by_reference(matrixPtr, 0, 1);
    std::cout << "Result of swap_matrix_rows_by_reference:" << '\n' << matrixPtr[0][0] << " " << matrixPtr[0][1] << '\n'
              << matrixPtr[1][0]
              << " " << matrixPtr[1][1] << '\n';
}

// Пример работы с функцией swap_matrix_rows_by_pointer (указатель)
void example8() {
    int matrix[2][2] = {{1, 2},
                        {3, 4}};
    int *matrixPtr[2] = {matrix[0], matrix[1]};
    std::cout << "The original matrix:" << '\n' << matrixPtr[0][0] << " " << matrixPtr[0][1] << '\n' << matrixPtr[1][0]
              << " " << matrixPtr[1][1] << '\n';
    swap_matrix_rows_by_pointer(matrixPtr, 0, 1);
    std::cout << "Result of swap_matrix_rows_by_reference:" << '\n' << matrixPtr[0][0] << " " << matrixPtr[0][1] << '\n'
              << matrixPtr[1][0]
              << " " << matrixPtr[1][1] << '\n';
}

int main() {
    std::cout << "Task 3\n";
    example1();
    example2();
    std::cout << "\nTask 8\n";
    example3();
    example4();
    std::cout << "\nTask 11\n";
    example5();
    example6();
    std::cout << "\nTask 16\n";
    example7();
    example8();
}