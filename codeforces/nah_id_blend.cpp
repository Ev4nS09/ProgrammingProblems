
#include <bits/stdc++.h>

void solve()
{
    double n, x, c;

    std::cin >> n >> x >> c;

    int result = std::ceil(n / std::min(x, c));

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
