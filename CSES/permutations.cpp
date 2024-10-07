#include <bits/stdc++.h>

int main()
{
    long long v;
    std::cin >> v;

    if(v > 1 && v < 4)
        std::cout << "NO SOLUTION\n";
    else
    {
        for(int i = 2; i <= v - (v % 2); i+=2)
            std::cout << i << " ";

        for(int i = 1; i <= v - ((v+1) % 2); i+=2)
            std::cout << i << " ";
    }

    return 0;
    
}