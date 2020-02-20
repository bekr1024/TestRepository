#include <iostream>
#include <array>
#include "merge_sort.h"
//#include  "C:\Users\BenK\Desktop\myproject\merge_sort\TestRepository\merge_sort\merge_sort.h"

using namespace std;

int main()
{
    std::cout << "int bytesize is: " << sizeof(int) << "\n\n";
    double test_arr[] = {-22.01, 0.345, 2.222, 2.223, 2.2220, 14.0, -9.78};
    double arr_size = sizeof(test_arr)/sizeof(test_arr[0]);
    std::cout << "Unsorted test array is:\n";
    print_array(test_arr, arr_size);

    merge_sort(test_arr, 0, sizeof(test_arr)/sizeof(test_arr[0]) - 1);

    std::cout << "Merge sorted test array is:\n";
    print_array(test_arr, arr_size);

    return 0;
}
