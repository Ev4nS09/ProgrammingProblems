#include <bits/stdc++.h>

void solve()
{
    int n_values, n_queries;
    std::cin >> n_values >> n_queries;

    std::vector<int> values(n_values);
    std::vector<int> queries(n_queries);
    std::vector<int> result_vector(n_values * n_queries);

    for(int i = 0; i < n_values; i++)
    {
        int value; std::cin >> value;
        values.push_back(value);
    }

    for(int i = 0; i < n_values; i++)
    {
        int right = i == 0 ? 0 : (values[n_values - 1] - values[i - 1]); 
        int result = (values[i] - values[0]) * right;
        result += n_values - i + 1;

        result_vector[result]++;
    }

    for(int i = 0; i < n_queries; i++)
    {
        int querie; std::cin >> querie;
        queries.push_back(querie);

        std::cout << result_vector[querie] << " ";
    }

    std::cout << '\n';

        

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
