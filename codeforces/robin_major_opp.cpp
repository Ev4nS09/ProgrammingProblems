#include <bits/stdc++.h>

void solve()
{
    int year, span;
    std::cin >> year >> span;

    if(year % 2 != 0)
    {
        year++;
    }

    std::cout << (((year / 2)+ (span / 2)) % 2 == 0 ? "YES" : "NO") << '\n';  

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
