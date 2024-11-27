
#include <bits/stdc++.h>

void solve()
{
    int n; std::cin >> n;
    int result = 0;

    while(n--)
    {
        int current; std::cin >> current;
        result += std::abs(current);
    }

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
