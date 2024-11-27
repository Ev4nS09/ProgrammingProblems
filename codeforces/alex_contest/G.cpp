#include <bits/stdc++.h>

void solve()
{
    int r, c;
    std::cin >> r >> c;

    std::vector<std::vector<int>> m(r, std::vector<int>(c));

    for(int i = 0; i < r; i++) 
    {   
        int current; std::cin >> current;
        for(int j = c - 1; j >= 0; j--) 
        {
            m[i][j] = current % 10;
            current /= 10;
        }
    }


    int sr = 0;
    int sc = 1;

    int result = 0;
    std::cout << result << '\n';

    for(int i = 0; i < r / 2; i++)
    {
        int one = 0;
        int five = 0; 
        int four = 0;

        int cr = i;
        int cc = i;
        do
        {   
            if(m[cr%r][cc%c] == 1)
            {
                one = 1;
            }
            else if(m[cr%r][cc%c] == 5 && one == 1)
            {
                five = 1;
            }
            else if(m[cr%r][cc%c] == 4 && five == 1)
            {
                four = 1;
            }   
            else if(m[cr%r][cc%c] == 3 && four == 1)
            {
                one = 0;
                five = 0;
                four = 0;
                result++;
            }
            else
            {
                one = 0;
                five = 0;
                four = 0;
            }

            if(cr == i && cc == c - i - 1 || cr == r - i - 1 && cc == i)
            {
                sr = 1;
                sc = 0;
            }
            else if(cr == r - i - 1 && cc == c - i - 1)
            {
                sr = 0;
                sc = 1;
            }
                
            cr += sr; 
            cc += sc; 

        }while(!(cr % r == i && cc % c == i));
        
        std::cout << result << '\n';
    }
}

int main()
{
    //std::ios_base::sync_with_stdio(false);
    //std::cin.tie(0);

    int tests; std::cin >> tests;

    while(tests--)
    {
        solve();
    }

}
