/*
 * =====================================================================================
 * ABS Electro test task.
 * https://www.abselectro.com
 * =====================================================================================
 */

#include <cmath>
#include <iostream>
#include <random>
#include <sstream>
#include <vector>

template<typename T>
void DumpArray(const T *arr, size_t elem_count, const char *msg)
{
    for (int i = 0; i < elem_count; ++i)
    {
        std::cout << msg << "[" << i << "] = " << arr[i] << '\n';
    }
}


//
// 1. Написать функцию, принимающую на вход произвольное неотрицательное целое число и возвращающую строку,
//    содержащую его представление в двоичной системе счисления.
//

void ConvertToBinary(char *result, unsigned int number)
{
    unsigned int bin_digits_count = log(number) / log(2) + 1;

    if (bin_digits_count <= 0) bin_digits_count = 1;

    for (unsigned i = 1; i <= bin_digits_count; ++i)
    {
        result[bin_digits_count - i] = '0' + (number & 1);
        number >>= 1;
    }

    result[bin_digits_count] = '\0';
}


//
// 2. Написать функцию, принимающую на вход неотрицательное целое число(N) и возвращающую массив,
//    содержащий последовательность чисел от 1 до N, в котором каждое число последовательности находится в случайной позиции.
//

void FillArray(unsigned int *result,  unsigned int max_value)
{
    std::vector<bool> g_map(max_value);
    std::mt19937 gen(0);
    std::uniform_int_distribution<unsigned int> ud(0, max_value - 1);
    unsigned int pos;

    for (unsigned int i = 0; i < max_value; ++i)
    {
        for (pos = ud(gen); g_map[pos]; pos = ud(gen));
        g_map[pos] = true;
        result[pos] = i;
    }
}


//
// 3. Написать функцию, принимающую в качестве параметра массив неупорядоченных неотрицательных
//    целых чисел от 1 до N и выполняющую его сортировку.
//

void Sort(unsigned int *values, unsigned int count)
{
    for (unsigned int i = 0; i < count; ++i)
    {
        for (unsigned int j = i; j < count; ++j)
        {
            if (values[j] < values[i])
            {
                values[i] += values[j];
                values[j] = values[i] - values[j];
                values[i] -= values[j];
            }
        }
    }
}


//
// 4. Написать функцию, принимающую в качестве параметра массив неупорядоченных неотрицательных целых чисел от 1 до N
//    и определяющую значение последнего элемента в массиве без доступа к нему.
//

unsigned int FindMissingValue(const unsigned int *values, unsigned int count)
{
    return values[count - 1];
}


int main()
{
    std::cout << "ConvertToBinary\n===============\n\n";

    char bin_result[255];

    for (unsigned int i = 0; i < 100; ++i)
    {
        ConvertToBinary(bin_result, i);
        std::cout << "i = " << i << ", binary = " << bin_result << '\n';
    }

    std::cout << "\n\nFillArray, FindMissingValue & Sort\n==================================\n\n";

    unsigned int arr_result[255];

    for (unsigned int i = 1; i <= 10; ++i)
    {
        std::stringstream ss;
        FillArray(arr_result, i);
        ss << "result" << i;
        std::cout << "Randomized:\n";
        DumpArray(arr_result, i, ss.str().c_str());
        std::cout << "Last value = " << FindMissingValue(arr_result, i) << '\n';
        std::cout << "\nSorted:\n";
        Sort(arr_result, i);
        DumpArray(arr_result, i, ss.str().c_str());
        std::cout << '\n';
    }


    std::cout << std::endl;
    return 0;
}
