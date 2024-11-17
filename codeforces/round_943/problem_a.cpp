
#include <bits/stdc++.h>

#define dq(x) (x % 2 == 0 ? x / 2 : (x / 2) + 1)

void solve()
{
    int x;
    std::cin >> x;

    int div = dq(x) + 1;

    while(x % --div != 0)
    {
    }

    int result = x;

    while(--result % div != 0){};

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
