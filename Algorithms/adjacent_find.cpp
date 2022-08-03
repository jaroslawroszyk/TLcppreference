#include <iostream>
#include <algorithm>
#include <vector>
/*
Searches the range [first, last) for two consecutive equal elements.

Przeszukuje zakres [first,last) dla pierwszego wystąpienia dwóch kolejnych pasujących elementów
i zwraca iterator do pierwszego z tych dwóch elementów lub last, jeśli taka para nie zostanie znaleziona.

Dwa elementy pasują, jeśli porównują, używając operatora== (lub używając pred, w wersji (2)).
*/

auto main() -> int
{
    std::vector<int> v1{0, 1, 2, 2, 3, 40, 40, 41, 41, 5};

    auto i1 = std::adjacent_find(v1.begin(), v1.end());

    if (i1 == v1.end())
    {
        std::cout << "No matching adjacent elements\n";
    }
    else
    {
        std::cout << "The first adjacent pair of equal elements is at "
                  << std::distance(v1.begin(), i1) << ", *i1 = "
                  << *i1 << '\n';
    }

    auto i2 = std::adjacent_find(v1.begin(), v1.end(), std::greater<int>());
    if (i2 == v1.end())
    {
        std::cout << "The entire vector is sorted in ascending order\n";
    }
    else
    {
        std::cout << "The last element in the non-decreasing subsequence is at "
                  << std::distance(v1.begin(), i2) << ", *i2 = " << *i2 << '\n';
    }
}