#include <bits/stdc++.h>

void solve()
{
    long long n; std::cin >> n;
    long long sum = 0;

    std::vector<long long> v(n);

    for(long long i = 0; i < n; i++)
    {
        long long current; std::cin >> current;
            sum += current;
            v[i] = current;
        }

        long long result = 0;

        if(sum % 3 == 2)
        {
            result++;
        }
        else if(sum % 3 != 0)
        {
            for(long long i = 0; i < n; i++)
            {
                if(v[i] % 3 == sum % 3)
                {
                    result++;
                    break;
                }
            }

            if(result == 0)
                result = 2;
        }

        std::cout << result << '\n';
    }

int main()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(0);

        long long tests; std::cin >> tests;

    while(tests--)
    {
        solve();
    }

}
