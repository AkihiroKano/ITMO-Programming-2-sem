#include "Lab 1 functions.h"

void replacement_by_the_remainder_of_the_division_by_reference(int &a, int &b) {
    a %= b;
}

void replacement_by_the_remainder_of_the_division_by_pointer(int *a, int *b) {
    *a %= *b;
}

void reciprocal_number_by_reference(float &num) {
    num = 1 / num;
}

void reciprocal_number_by_pointer(float *num) {
    *num = 1 / *num;
}

void reducing_the_radius_reference(double &radius, double amount) {
    radius -= amount;
}

void reducing_the_radius_pointer(double *radius, double amount) {
    *radius -= amount;
}

void swap_matrix_rows_by_reference(int **matrix, int row1, int row2) {
    int *temp = matrix[row1];
    matrix[row1] = matrix[row2];
    matrix[row2] = temp;
}

void swap_matrix_rows_by_pointer(int **matrix, int row1, int row2) {
    int *temp = *(matrix + row1);
    *(matrix + row1) = *(matrix + row2);
    *(matrix + row2) = temp;
}