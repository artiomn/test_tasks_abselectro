Тестовое задание в [ABS Electro](http://www.abselectro.com/)
==============================

Для программиста C++.


Условия задачи
--------------

1. Написать функцию, принимающую на вход произвольное неотрицательное целое число и возвращающую строку, содержащую его представление в двоичной системе счисления.

Прототип функции:
`void ConvertToBinary(char *result, unsigned int number);`

Где:

- `result` — результирующая строка.
- `number` — входное число.

Пример:
Для числа 12 данная функция должна вернуть строку "1100".

2.  Написать функцию, принимающую на вход неотрицательное целое число(N) и возвращающую массив, содержащий последовательность чисел от 1 до N, в котором каждое число последовательности находится в случайной позиции.

Прототип функции:
`void FillArray(unsigned int *result,  unsigned int max_value);`

Где:

- `result` — результирующий массив.
- `max_value` — максимальное число.

Пример:
При N = 10, результат выполнения функции может иметь вид { 9, 5, 2, 7, 3, 4, 8, 1, 6 }

3. Написать функцию, принимающую в качестве параметра массив неупорядоченных неотрицательных целых чисел от 1 до N и выполняющую его сортировку.

Прототип функции:
`void Sort(unsigned int *values, unsigned int count);`

Где:

- `values` —  сортируемый массив.
- `count` — количество элементов в массиве.

Пример:
Массив вида { 9, 5, 2, 7, 3, 4, 8, 1, 6 } должен быть преобразован в { 1, 2, 3, 4, 5, 6, 7, 8, 9 }.

4. Написать функцию, принимающую в качестве параметра массив неупорядоченных неотрицательных целых чисел от 1 до N и определяющую значение последнего элемента в массиве без доступа к нему.

Прототип функции:
`unsigned int FindMissingValue(const unsigned int *values, unsigned int count);`

Где:

- `values` — неупорядоченный массив целых чисел от 1 до count
- `count` — количество  элементов в массиве

Пример:
Для массива вида { 9, 5, 2, 7, 3, 4, 8, 1, 6 } данная функция должна вернуть 6.


Компиляция и запуск
-------------------

```
$ g++ test.cpp -o test && ./test
```


Пример вывода
-------------

```
ConvertToBinary
===============

i = 0, binary = 0
i = 1, binary = 1
i = 2, binary = 10
i = 3, binary = 11
i = 4, binary = 100
i = 5, binary = 101
i = 6, binary = 110
i = 7, binary = 111
i = 8, binary = 1000
i = 9, binary = 1001
i = 10, binary = 1010
i = 11, binary = 1011
i = 12, binary = 1100
i = 13, binary = 1101
i = 14, binary = 1110
i = 15, binary = 1111
i = 16, binary = 10000
i = 17, binary = 10001
i = 18, binary = 10010
i = 19, binary = 10011
i = 20, binary = 10100
i = 21, binary = 10101
i = 22, binary = 10110
i = 23, binary = 10111
i = 24, binary = 11000
i = 25, binary = 11001
i = 26, binary = 11010
i = 27, binary = 11011
i = 28, binary = 11100
i = 29, binary = 11101
i = 30, binary = 11110
i = 31, binary = 11111
i = 32, binary = 100000
i = 33, binary = 100001
i = 34, binary = 100010
i = 35, binary = 100011
i = 36, binary = 100100
i = 37, binary = 100101
i = 38, binary = 100110
i = 39, binary = 100111
i = 40, binary = 101000
i = 41, binary = 101001
i = 42, binary = 101010
i = 43, binary = 101011
i = 44, binary = 101100
i = 45, binary = 101101
i = 46, binary = 101110
i = 47, binary = 101111
i = 48, binary = 110000
i = 49, binary = 110001
i = 50, binary = 110010
i = 51, binary = 110011
i = 52, binary = 110100
i = 53, binary = 110101
i = 54, binary = 110110
i = 55, binary = 110111
i = 56, binary = 111000
i = 57, binary = 111001
i = 58, binary = 111010
i = 59, binary = 111011
i = 60, binary = 111100
i = 61, binary = 111101
i = 62, binary = 111110
i = 63, binary = 111111
i = 64, binary = 1000000
i = 65, binary = 1000001
i = 66, binary = 1000010
i = 67, binary = 1000011
i = 68, binary = 1000100
i = 69, binary = 1000101
i = 70, binary = 1000110
i = 71, binary = 1000111
i = 72, binary = 1001000
i = 73, binary = 1001001
i = 74, binary = 1001010
i = 75, binary = 1001011
i = 76, binary = 1001100
i = 77, binary = 1001101
i = 78, binary = 1001110
i = 79, binary = 1001111
i = 80, binary = 1010000
i = 81, binary = 1010001
i = 82, binary = 1010010
i = 83, binary = 1010011
i = 84, binary = 1010100
i = 85, binary = 1010101
i = 86, binary = 1010110
i = 87, binary = 1010111
i = 88, binary = 1011000
i = 89, binary = 1011001
i = 90, binary = 1011010
i = 91, binary = 1011011
i = 92, binary = 1011100
i = 93, binary = 1011101
i = 94, binary = 1011110
i = 95, binary = 1011111
i = 96, binary = 1100000
i = 97, binary = 1100001
i = 98, binary = 1100010
i = 99, binary = 1100011


FillArray, FindMissingValue & Sort
==================================

Randomized:
result2[0] = 2
result2[1] = 1
Last value = 1

Sorted:
result2[0] = 1
result2[1] = 2

Randomized:
result3[0] = 3
result3[1] = 1
result3[2] = 2
Last value = 2

Sorted:
result3[0] = 1
result3[1] = 2
result3[2] = 3

Randomized:
result4[0] = 4
result4[1] = 3
result4[2] = 1
result4[3] = 2
Last value = 2

Sorted:
result4[0] = 1
result4[1] = 2
result4[2] = 3
result4[3] = 4

Randomized:
result5[0] = 5
result5[1] = 4
result5[2] = 1
result5[3] = 2
result5[4] = 3
Last value = 3

Sorted:
result5[0] = 1
result5[1] = 2
result5[2] = 3
result5[3] = 4
result5[4] = 5

Randomized:
result6[0] = 6
result6[1] = 5
result6[2] = 4
result6[3] = 1
result6[4] = 2
result6[5] = 3
Last value = 3

Sorted:
result6[0] = 1
result6[1] = 2
result6[2] = 3
result6[3] = 4
result6[4] = 5
result6[5] = 6

Randomized:
result7[0] = 6
result7[1] = 7
result7[2] = 5
result7[3] = 1
result7[4] = 2
result7[5] = 3
result7[6] = 4
Last value = 4

Sorted:
result7[0] = 1
result7[1] = 2
result7[2] = 3
result7[3] = 4
result7[4] = 5
result7[5] = 6
result7[6] = 7

Randomized:
result8[0] = 7
result8[1] = 8
result8[2] = 5
result8[3] = 4
result8[4] = 1
result8[5] = 2
result8[6] = 3
result8[7] = 6
Last value = 6

Sorted:
result8[0] = 1
result8[1] = 2
result8[2] = 3
result8[3] = 4
result8[4] = 5
result8[5] = 6
result8[6] = 7
result8[7] = 8

Randomized:
result9[0] = 8
result9[1] = 9
result9[2] = 6
result9[3] = 5
result9[4] = 1
result9[5] = 2
result9[6] = 3
result9[7] = 4
result9[8] = 7
Last value = 7

Sorted:
result9[0] = 1
result9[1] = 2
result9[2] = 3
result9[3] = 4
result9[4] = 5
result9[5] = 6
result9[6] = 7
result9[7] = 8
result9[8] = 9

Randomized:
result10[0] = 8
result10[1] = 10
result10[2] = 7
result10[3] = 6
result10[4] = 5
result10[5] = 1
result10[6] = 4
result10[7] = 2
result10[8] = 3
result10[9] = 9
Last value = 9

Sorted:
result10[0] = 1
result10[1] = 2
result10[2] = 3
result10[3] = 4
result10[4] = 5
result10[5] = 6
result10[6] = 7
result10[7] = 8
result10[8] = 9
result10[9] = 10
```
