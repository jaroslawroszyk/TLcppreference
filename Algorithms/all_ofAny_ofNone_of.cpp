#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

auto main() -> int
{
    std::vector<int> v = {4, 4}; // or std::vector<int>v(10, 2);

    std::partial_sum(v.begin(), v.end(), v.begin());
    for (const auto &el : v)
    {
        std::cout << el << " ";
    }
    //  std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
}

#include <numeric>
#include <iostream>
#include <vector>
#include <iterator>
auto main() -> int
{
    auto v = std::vector{1, 2, 3};
    std::partial_sum(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
}