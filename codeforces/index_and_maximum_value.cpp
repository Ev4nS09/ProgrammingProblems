#include <iostream>

inline void s();

inline void s()
{

        int v_size = 0;
        int n_mods = 0;

        std::cin >> v_size;
        std::cin >> n_mods;

        int max = 0;
        std::cin >> max;

        for(int i = 1; i < v_size; ++i)
        {
            int current; std::cin >> current;

            if(current > max)
            {
                max = current;
            }
        }

        while(n_mods-- > 0)
        {


            char sign;
            std::cin >> sign;

            int first;
            int second;

            std::cin >> first;
            std::cin >> second;

            if(first <= max && max <= second)
            {
                if(sign == '-')
                    --max;
                else
                    ++max;
            }

            
            std::cout << max << ' ';
        }

        std::cout << '\n';
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int tests = 0;
    std::cin >> tests;
    
    while(tests-- > 0)
    {
        s();
    }
        
    return 0;
}
