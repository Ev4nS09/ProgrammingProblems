#include <bits/stdc++.h>

void solve()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> a(n, std::vector<int>(m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cin >> a[i][j];
        }        
    }

    if(n == 1 && m == 1)
    {
        std::cout << -1 << '\n';
        return;
    }

    /*for(int i = n - 1; i >= 0; i--)
    {

        int fds = a[i][m / 2];
        
        for(int j = m - 1; j >= 0; j--)
        {
            if(m % 2 == 1 && j == m / 2)
                continue;

            std::cout << a[i][j]<< ' '; 
        }

        if(m % 2 == 1)
            std::cout << fds;

        

        std::cout << '\n';
    }*/

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cout << a[i][j] % (n * m) + 1 << ' '; 
        }
        std::cout << '\n';
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
