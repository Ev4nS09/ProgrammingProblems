#include <bits/stdc++.h>

void solve()
{
    int a, b, l;
    std::cin >> a >> b >> l;

    if(l % a != 0 && l % b != 0)
    {
        std::cout << 1 << '\n';
        return;
    }

    



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
