#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

auto main() -> int
{
    std::vector<int> vec {1,6,4,20,11,9,3};
    std::partial_sort(vec.begin(), vec.end(), vec.begin());
    for(auto& el : vec)
      std::cout << el << " ";
}