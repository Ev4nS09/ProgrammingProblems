#include <bits/stdc++.h>

int main()
{
    long long max;
    std::cin >> max;

    long long values_sum = 0;

    for(int i = 0; i < max - 1; i++)
    {
        long long current; std::cin >> current;
        values_sum += current;
    }

    long long sum = (max * (max + 1)) / 2;

    std::cout << (sum - values_sum) << '\n';

    return 0;
}