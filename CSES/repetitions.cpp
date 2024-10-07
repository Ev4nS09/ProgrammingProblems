#include <bits/stdc++.h>

int main()
{
    std::string a;
    std::getline(std::cin, a);

    long long max = 0;

    for(long long i = 0; i < a.size();)
    {
        char current_char = a[i];

        long long j = 0;
        for(;j + i < a.size() && a[j + i] == current_char; j++){}

        if(max < j)
            max = j;

        i += j;
    }

    std::cout << max << '\n';

    return 0;
}