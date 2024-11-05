#include <bits/stdc++.h>

void solve()
{
    long long n; std::cin >> n; 

    long long max = 0;
    long long min = LONG_LONG_MAX;

    for(long long i = 0; i < n; i++)
    {
        long long current; 
        std::cin >> current; 

        if(current > max)
            max = current;
        if(current < min)
            min = current;
    }

    long long result = (max - min) * (n - 1);

    std::cout << result << '\n';
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int tests; std::cin >> tests;

    while(tests--)
    {
        solve();
    }

}
