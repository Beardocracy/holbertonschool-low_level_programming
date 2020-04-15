#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_recursive(int *array, size_t l, size_t r, int value);
int jump_search(int *array, size_t size, int value);
size_t mmin(size_t a, size_t b);
int interpolation_search(int *array, size_t size, int value);

#endif
