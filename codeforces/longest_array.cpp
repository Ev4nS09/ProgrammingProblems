
#include <bits/stdc++.h>

void solve()
{
    long long begin, end;
    std::cin >> begin >> end;

    int result = 0;

    int jump = 0;
    for(int i = 0; i < end - begin + 1; i+=jump)
    {
       result++;
       jump++;
    }

    std::cout << result << '\n';
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
