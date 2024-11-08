#include <bits/stdc++.h>

void solve()
{
    double x, y, d;
    std::cin >> x >> y >> d;

    int result = (ceil(((double)std::max(x, y)) / d)) * 2;

    
    result = x > y && ceil(x / d) != ceil(y / d) ? result - 1: result; 

    std::cout << result << '\n';
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int tests;
    std::cin >> tests;

    while(tests-- > 0)
    {
        solve();
    }

    return 0;
}
