#include <bits/stdc++.h>

int main()
{
    int t; std::cin >> t;

    while(t--)
    {
        int x, y; std::cin >> x >> y;
        std::cout << m[x - 1][y - 1] << '\n';
    }

    return 0;
    
}