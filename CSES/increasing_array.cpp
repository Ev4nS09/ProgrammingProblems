#include <bits/stdc++.h>

int main()
{
    long long n;
    std::cin >> n;

    if(n == 0)
        return 0;

    long long result = 0;
    long long last_value; std::cin >> last_value;

    for(long long i = 0; i < n-1; i++)
    {
        long long current; std::cin >> current;

        if(last_value > current)
            result += last_value - current;
        else
            last_value = current;
    }

    std::cout << result << '\n';

    return 0;
    
}