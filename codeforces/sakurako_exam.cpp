#include <bits/stdc++.h>

void solve()
{
    int ones, twos;
    std::cin >> ones >> twos;

    if(ones % 2 == 0 && twos % 2 == 0)
        std::cout << "YES\n";
    else if(ones == 0 || ones % 2 != 0)
        std::cout << "NO\n";
    else
        std::cout << "YES\n";
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

