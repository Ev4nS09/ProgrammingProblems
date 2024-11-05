#include <bits/stdc++.h>

void solve()
{
    int n; std::cin >> n;
    std::vector<int> numbers(n);

    for(int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    std::string b_w; std::cin >> b_w;

    for(int i = 0; i < n; i++)
    {
        if(b_w[i] == '0')
        {
            for(int j = 0; j < n; j++)
            {
                int b_count = 0;

                if(i == j)
                {
                    b_count++;
                    continue;
                }            
                for(int p = numbers[j]; p != j && 
        }

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
