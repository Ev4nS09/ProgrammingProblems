#include <bits/stdc++.h>

void solve()
{
    int n, k;
    std::cin >> n >> k;

    int rg = 0;
    int result = 0;

    while(n-- > 0)
    {
        int x; std::cin >> x;
        
        if(x >= k)
        {
            rg += x;
        }
        else if(x == 0 && rg > 0)
        {
            result++;
            rg--;
        }   
    }

    std::cout <<  result << '\n';
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
