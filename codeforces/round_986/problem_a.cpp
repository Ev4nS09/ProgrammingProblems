#include <bits/stdc++.h>

void solve()
{
    int n, a, b;
    std::cin >> n >> a >> b;

    std::string s; 
    std::cin >> s;

    int x = 0, y = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'N')
        {
            y++;
        }
        else if(s[i] == 'E')
        {
            x++;
        }
        else if(s[i] == 'S')
        {
            y--; 
        }
        else if(s[i] == 'W')
        {
            x--; 
        }
    }

    if(x < 0 || y < 0)
    {
        std::cout << "NO" << '\n';
    }
    else if(a / x ==  b / y )
    {
        std::cout << "YES" << '\n';
    }
    else
    {
        std::cout << "NO" << '\n';
    }
}


int main()
{

    int tests; std::cin >> tests;

    while(tests--)
    {
        solve();
    }

}
