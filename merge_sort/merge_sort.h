#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_

#include <array>
#include <iostream>


void merge_sort(long *arr, int startpoint, int endpoint);
void merge_arrays(long *arr, int startpoint, int midpoint, int endpoint);
void print_array(long *arr, int arr_size);

void merge_sort(int *arr, int startpoint, int endpoint);
void merge_arrays(int *arr, int startpoint, int midpoint, int endpoint);
void print_array(int *arr, int arr_size);

void merge_sort(float *arr, int startpoint, int endpoint);
void merge_arrays(float *arr, int startpoint, int midpoint, int endpoint);
void print_array(float *arr, int arr_size);

void merge_sort(double *arr, int startpoint, int endpoint);
void merge_arrays(double *arr, int startpoint, int midpoint, int endpoint);
void print_array(double *arr, int arr_size);

#endif // MERGE_SORT_MERGE_SORT_H_
