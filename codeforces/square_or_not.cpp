#include <bits/stdc++.h>

int square_root(int x)
{
    int current = 0;

    while(current * current < x)
        current++;

    return current;
}

void solve()
{
    int size; std::cin >> size;
    std::string s; std::cin >> s;

    int sq = square_root(size);

    if(sq * sq != size)
    {
        std::cout << "NO\n";
        return;
    }

    int limit = sq + 2; 
 
    for(int i = 0; i < sq - 2; i++)
    {
        if(s.at(i + limit - 1) != '0')
        {
            std::cout << "NO\n";
            return;
        }
    }

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
