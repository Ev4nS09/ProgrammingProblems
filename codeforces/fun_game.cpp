#include <bits/stdc++.h>

void solve()
{

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

    int* a = (int*) malloc(sizeof(int));
    int* b = (int*) malloc(sizeof(int));

    *a = 5;
    *b = 10;

    a = (int*) ((long long)a ^ (long long) b);
    b = (int*) ((long long) a ^ (long long) b);
    a = (int*) ((long long) a ^ (long long) b);
}
