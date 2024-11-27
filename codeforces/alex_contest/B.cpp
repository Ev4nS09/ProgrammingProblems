#include <bits/stdc++.h>

void solve()
{
    int t; std::cin >> t;
    std::vector<std::vector<int>> C(t, std::vector<int>(2));

    for(int i = 0; i < t; i++)
    {
        std::cin >> C[i][0];
    }
    for(int i = 0; i < t; i++)
    {
        std::cin >> C[i][1];
    }
    
    for(int n = 0; n < t; n++) { // loop over n from 0 to N-1 (inclusive)
        C[n][0] = 1;
        C[n][n % 2] = 1;
        for (int k = 1; k < n; k++) // loop over k from 1 to n-1 (inclusive)
        {
            C[n][k] = C[n][k - 1] + C[n - 1][k - 1];
            std::cout << C[n][k] << '\n';
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

        solve();

}
