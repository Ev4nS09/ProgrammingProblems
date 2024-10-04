#include <bits/stdc++.h>

void solve()
{
    

    double population;
    std::cin >> population;

    double richest = -1;
    double total_gold = 0;
         
    for(int i = 0; i < population; i++)
    {
        double current_gold;
        std::cin >> current_gold;

        if(current_gold > richest)
            richest = current_gold;

        total_gold += current_gold;

    }

    if(population < 3)
    {
        std::cout << -1 << '\n';
        return;
    }
    
    int result = (4.0 * ((total_gold - richest) / population) + 4.0) / (1.0 - 2.0 / population);

    std::cout << result << '\n';

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int tests;
    std::cin >> tests;

    while(tests-- > 0)
    {
        solve();
    }

    return 0;
}
