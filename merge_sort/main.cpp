#include <iostream>
#include <array>
#include "merge_sort\merge_sort.h"

using namespace std;

int main()
{
    std::cout << "int bytesize is: " << sizeof(int) << "\n\n";
    int test_arr[] = {-30, 1, 32, 0, 0, 3};
    int arr_size = sizeof(test_arr)/sizeof(test_arr[0]);
    std::cout << "Unsorted test array is:\n";
    print_array(test_arr, arr_size);

    merge_sort(test_arr, 0, sizeof(test_arr)/sizeof(test_arr[0]) - 1);

    std::cout << "Merge sorted test array is:\n";
    print_array(test_arr, arr_size);

    return 0;
}
