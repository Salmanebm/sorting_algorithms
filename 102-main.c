#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {70, -92, 40, 14, 96, 66, 87, 75, 94, 55, 99, 89, -39, 34, 56, 98, 60, 68, 53, 20, 36, 4, 95, 19, 13, 42, 25, 37, 31, 44, 83, 91, 22, 5, 82, 72, 50, 65, 10, 93, 52, 86, 27, 9, 80, 88, 47, 23, 64, 97, 57, 49, 85, 3, 32, 2, 58, 11, 33, 63, 45, 7, 78, 16, 84, 48, 6, 100, 76, 17, 15, 8, 12, 90, 51, 38, 74, 59, 41, 73, 46, 43, 1, 77, 71, 69, 24, 67, 79, 81, 29, 18, 35, 21, 28, 26, 30, 61, 62, 54};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    counting_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
