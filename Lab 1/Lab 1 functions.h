#ifndef BASICS_OF_PROGRAMMING_CPP_1_LABA_PROCEDURES_H
#define BASICS_OF_PROGRAMMING_CPP_1_LABA_PROCEDURES_H

#include <iostream>

void replacement_by_the_remainder_of_the_division_by_reference(int &a, int &b);

void replacement_by_the_remainder_of_the_division_by_pointer(int *a, int *b);

void reciprocal_number_by_reference(float &num);

void reciprocal_number_by_pointer(float *num);

void reducing_the_radius_reference(double &radius, double amount);

void reducing_the_radius_pointer(double *radius, double amount);

void swap_matrix_rows_by_reference(int **matrix, int row1, int row2);

void swap_matrix_rows_by_pointer(int **matrix, int row1, int row2);

#endif //BASICS_OF_PROGRAMMING_CPP_1_LABA_PROCEDURES_H