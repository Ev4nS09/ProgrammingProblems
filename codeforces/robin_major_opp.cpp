#include <bits/stdc++.h>

void solve()
{
    int year, span;
    std::cin >> year >> span;
    bool is_ded_even = ((year - span) / 2 + year - span % 2) % 2 == 0; 
    bool is_year_even = (year / 2 + year % 2) % 2 == 0;

    std::cout << (is_year_even == is_ded_even ? "YES" : "NO") << "\n";
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int tests;
    std::cin >> tests;

    while(tests--)
    {
        solve();
    }

    return 0;
}
