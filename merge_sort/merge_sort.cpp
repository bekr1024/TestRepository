#include <iostream>
#include <array>
#include "merge_sort\merge_sort.h"

/*
    This function will take two subarrays and compare each element iteratively, placing the lesser of the two
    compared elements into the next index in the larger array.
*/

void merge_arrays(long *arr, int startpoint, int midpoint, int endpoint)
{
    // assume array [i_0, i_1, i_2, i_3, i_4] with startpoint i_0, midpoint i_2, endpoint i_4
    int n1 = midpoint - startpoint + 1; // n1 = (i_2 - i_0 + 1) = 3
    int n2 = endpoint - midpoint; // n2 = i_4 - i_2 = 2 + 1 = 2

    long l_arr[n1]; // should populate with [i_0, i_1, i_2] eventually.
    long r_arr[n2]; // should populate with [i_3, i_4] eventually.
    for(int i = 0; i < n1; ++i) // from i_0 to i_2, hopefully
    {
        l_arr[i] = arr[startpoint + i];// l_arr[0] = arr[0 + 0]; l_arr[1] = arr[0 + 1]; l_arr[2] = arr[0 + 2]; GOOD
    }
    for(int j = 0; j < n2; ++j) // from i_3 to i_4, hopefully.
    {
        r_arr[j] = arr[midpoint + j + 1]; // r_arr[0] = arr[2 + 0 + 1]; r_arr[1] = arr[2 + 1 + 1]; GOOD
    }

    int iii = 0; // these indexes need to be iterable but not consistently. Will increase only when called to do so.
    int jjj = 0;
    int k = startpoint;

    while (iii < n1 && jjj < n2)
    {
        if(l_arr[iii] < r_arr[jjj])
        {
            arr[k] = l_arr[iii];
            iii++;
        }
        else
        {
            arr[k] = r_arr[jjj];
            jjj++;
        }
        k++;
    }

    // for copying remaining elements of each subsequent array, since sometimes one array will finish before the other does.

    while(iii < n1)
    {
        arr[k] = l_arr[iii];
        iii++;
        k++;
    }
    while(jjj < n2)
    {
        arr[k] = r_arr[jjj];
        jjj++;
        k++;
    }
}

void merge_sort(long *arr, int startpoint, int endpoint)
{
    if(startpoint < endpoint)
    {
        int midpoint = (endpoint + startpoint)/2;
        merge_sort(arr, startpoint, midpoint);
        merge_sort(arr, midpoint + 1, endpoint);
        merge_arrays(arr, startpoint, midpoint, endpoint);
    }

}


void print_array(long *arr, int arr_size)
{
    std::cout << "{ ";
    for (int i = 0; i < arr_size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "}\n\n";
}

void merge_arrays(int *arr, int startpoint, int midpoint, int endpoint)
{
    // assume array [i_0, i_1, i_2, i_3, i_4] with startpoint i_0, midpoint i_2, endpoint i_4
    int n1 = midpoint - startpoint + 1; // n1 = (i_2 - i_0 + 1) = 3
    int n2 = endpoint - midpoint; // n2 = i_4 - i_2 = 2 + 1 = 2

    int l_arr[n1]; // should populate with [i_0, i_1, i_2] eventually.
    int r_arr[n2]; // should populate with [i_3, i_4] eventually.
    for(int i = 0; i < n1; ++i) // from i_0 to i_2, hopefully
    {
        l_arr[i] = arr[startpoint + i];// l_arr[0] = arr[0 + 0]; l_arr[1] = arr[0 + 1]; l_arr[2] = arr[0 + 2]; GOOD
    }
    for(int j = 0; j < n2; ++j) // from i_3 to i_4, hopefully.
    {
        r_arr[j] = arr[midpoint + j + 1]; // r_arr[0] = arr[2 + 0 + 1]; r_arr[1] = arr[2 + 1 + 1]; GOOD
    }

    int iii = 0; // these indexes need to be iterable but not consistently. Will increase only when called to do so.
    int jjj = 0;
    int k = startpoint;

    while (iii < n1 && jjj < n2)
    {
        if(l_arr[iii] < r_arr[jjj])
        {
            arr[k] = l_arr[iii];
            iii++;
        }
        else
        {
            arr[k] = r_arr[jjj];
            jjj++;
        }
        k++;
    }

    // for copying remaining elements of each subsequent array, since sometimes one array will finish before the other does.

    while(iii < n1)
    {
        arr[k] = l_arr[iii];
        iii++;
        k++;
    }
    while(jjj < n2)
    {
        arr[k] = r_arr[jjj];
        jjj++;
        k++;
    }
}

/*
    These functions will call merge sort recursively until each subarray has only one element and the sorting becomes trivial.
    Once two trivial subarrays are created, the merging of these two subarrays will become simple.
    Afterwards, the merging of the superarrays will be performed easily.
*/
void merge_sort(int *arr, int startpoint, int endpoint)
{
    if(startpoint < endpoint)
    {
        int midpoint = (endpoint + startpoint)/2;
        merge_sort(arr, startpoint, midpoint);
        merge_sort(arr, midpoint + 1, endpoint);
        merge_arrays(arr, startpoint, midpoint, endpoint);
    }

}

/*
    This is just for checking that our merge_sort works properly.
*/
void print_array(int *arr, int arr_size)
{
    std::cout << "{ ";
    for (int i = 0; i < arr_size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "}\n\n";
}

void merge_arrays(float *arr, int startpoint, int midpoint, int endpoint)
{
    // assume array [i_0, i_1, i_2, i_3, i_4] with startpoint i_0, midpoint i_2, endpoint i_4
    int n1 = midpoint - startpoint + 1; // n1 = (i_2 - i_0 + 1) = 3
    int n2 = endpoint - midpoint; // n2 = i_4 - i_2 = 2 + 1 = 2

    float l_arr[n1]; // should populate with [i_0, i_1, i_2] eventually.
    float r_arr[n2]; // should populate with [i_3, i_4] eventually.
    for(int i = 0; i < n1; ++i) // from i_0 to i_2, hopefully
    {
        l_arr[i] = arr[startpoint + i];// l_arr[0] = arr[0 + 0]; l_arr[1] = arr[0 + 1]; l_arr[2] = arr[0 + 2]; GOOD
    }
    for(int j = 0; j < n2; ++j) // from i_3 to i_4, hopefully.
    {
        r_arr[j] = arr[midpoint + j + 1]; // r_arr[0] = arr[2 + 0 + 1]; r_arr[1] = arr[2 + 1 + 1]; GOOD
    }

    int iii = 0; // these indexes need to be iterable but not consistently. Will increase only when called to do so.
    int jjj = 0;
    int k = startpoint;

    while (iii < n1 && jjj < n2)
    {
        if(l_arr[iii] < r_arr[jjj])
        {
            arr[k] = l_arr[iii];
            iii++;
        }
        else
        {
            arr[k] = r_arr[jjj];
            jjj++;
        }
        k++;
    }

    // for copying remaining elements of each subsequent array, since sometimes one array will finish before the other does.

    while(iii < n1)
    {
        arr[k] = l_arr[iii];
        iii++;
        k++;
    }
    while(jjj < n2)
    {
        arr[k] = r_arr[jjj];
        jjj++;
        k++;
    }
}

/*
    These functions will call merge sort recursively until each subarray has only one element and the sorting becomes trivial.
    Once two trivial subarrays are created, the merging of these two subarrays will become simple.
    Afterwards, the merging of the superarrays will be performed easily.
*/
void merge_sort(float *arr, int startpoint, int endpoint)
{
    if(startpoint < endpoint)
    {
        int midpoint = (endpoint + startpoint)/2;
        merge_sort(arr, startpoint, midpoint);
        merge_sort(arr, midpoint + 1, endpoint);
        merge_arrays(arr, startpoint, midpoint, endpoint);
    }

}


void print_array(float *arr, int arr_size)
{
    std::cout << "{ ";
    for (int i = 0; i < arr_size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "}\n\n";
}

void merge_arrays(double *arr, int startpoint, int midpoint, int endpoint)
{
    // assume array [i_0, i_1, i_2, i_3, i_4] with startpoint i_0, midpoint i_2, endpoint i_4
    int n1 = midpoint - startpoint + 1; // n1 = (i_2 - i_0 + 1) = 3
    int n2 = endpoint - midpoint; // n2 = i_4 - i_2 = 2 + 1 = 2

    float l_arr[n1]; // should populate with [i_0, i_1, i_2] eventually.
    float r_arr[n2]; // should populate with [i_3, i_4] eventually.
    for(int i = 0; i < n1; ++i) // from i_0 to i_2, hopefully
    {
        l_arr[i] = arr[startpoint + i];// l_arr[0] = arr[0 + 0]; l_arr[1] = arr[0 + 1]; l_arr[2] = arr[0 + 2]; GOOD
    }
    for(int j = 0; j < n2; ++j) // from i_3 to i_4, hopefully.
    {
        r_arr[j] = arr[midpoint + j + 1]; // r_arr[0] = arr[2 + 0 + 1]; r_arr[1] = arr[2 + 1 + 1]; GOOD
    }

    int iii = 0; // these indexes need to be iterable but not consistently. Will increase only when called to do so.
    int jjj = 0;
    int k = startpoint;

    while (iii < n1 && jjj < n2)
    {
        if(l_arr[iii] < r_arr[jjj])
        {
            arr[k] = l_arr[iii];
            iii++;
        }
        else
        {
            arr[k] = r_arr[jjj];
            jjj++;
        }
        k++;
    }

    // for copying remaining elements of each subsequent array, since sometimes one array will finish before the other does.

    while(iii < n1)
    {
        arr[k] = l_arr[iii];
        iii++;
        k++;
    }
    while(jjj < n2)
    {
        arr[k] = r_arr[jjj];
        jjj++;
        k++;
    }
}

/*
    These functions will call merge sort recursively until each subarray has only one element and the sorting becomes trivial.
    Once two trivial subarrays are created, the merging of these two subarrays will become simple.
    Afterwards, the merging of the superarrays will be performed easily.
*/
void merge_sort(double *arr, int startpoint, int endpoint)
{
    if(startpoint < endpoint)
    {
        int midpoint = (endpoint + startpoint)/2;
        merge_sort(arr, startpoint, midpoint);
        merge_sort(arr, midpoint + 1, endpoint);
        merge_arrays(arr, startpoint, midpoint, endpoint);
    }

}


void print_array(double *arr, int arr_size)
{
    std::cout << "{ ";
    for (int i = 0; i < arr_size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "}\n\n";
}
