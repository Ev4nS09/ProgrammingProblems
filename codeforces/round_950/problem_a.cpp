#include <bits/stdc++.h>

void solve()
{
    int a[7] = {0, 0, 0, 0, 0, 0, 0};
    int n, m;
    std::cin >> n >> m;

    std::string s;
    std::cin >> s;

    int fds = 7;

    for(int i = 0; i < n; i++)
    {
        if(a[s[i] - 'A'] == 0)
        {
            a[s[i] - 'A'] = 1;
            fds--;
        }
    }

    std::cout << (fds * m) << '\n';

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
