#include <bits/stdc++.h>

void solve()
{
    int n, m;
    std::cin >> n >> m;

    std::string a, b;
    std::cin >> a >> b;

    int k = 0;

    for(int i = 0; i < m && k < n; i++)
    {
        if(a[k] == b[i])
            k++;
    }

    std::cout << k<< '\n';
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
