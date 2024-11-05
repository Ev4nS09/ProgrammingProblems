
#include <bits/stdc++.h>

void solve()
{
    int num_families, rows;
    std::cin >> num_families >> rows;

    int happy_members = 0;
    int alone_members = 0;

    for(int i = 0; i < num_families; i++)
    {
        int family; std::cin >> family;
        
        if(family % 2 == 0)
        {
            happy_members += family;
        }
        else
        {
            alone_members++;
            happy_members += family - 1;
        }
    }

    int empty_rows = rows - (happy_members/ 2);

    happy_members += empty_rows * 2 - alone_members > alone_members ? alone_members : empty_rows * 2 - alone_members;
    
    std::cout << happy_members << '\n';
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
