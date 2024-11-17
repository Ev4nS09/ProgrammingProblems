#include <bits/stdc++.h>

#define abs(x) (x < 0 ? -(x) : x)
#define fds(x, y) (x >= y ? (x) % (y) : (y))

void solve()
{
    int n; std::cin >> n;

    std::vector<int> v(n);

    for(int i = 0; i < n - 1 ; i++)
        std::cin >> v[i];


    int current = v[0] + 1;

    std::cout << current << " ";
    
    for(int i = 0; i < n - 2; i++)
    {
        if(v[i+1] > current)
            current = v[i+1] + abs((v[i + 1]%current) - v[i]);
        else
            current += v[i];

        std::cout << current << " ";
    }

    current += v[n - 2];

    std::cout << current << " ";


    std::cout << '\n';
}

int main()
{

    int tests; std::cin >> tests;

    while(tests--)
    {
        solve();
    }

}
