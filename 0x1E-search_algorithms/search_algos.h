#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_recursive(int *array, size_t l, size_t r, int value);
int jump_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
size_t mmin(size_t s, size_t n);
int advanced_binary(int *array, size_t size, int value);
int adv_bin_recursive(int *array, size_t l, size_t r, int value);

#endif
