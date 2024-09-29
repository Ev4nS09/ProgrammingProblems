#include <iostream>

void solve()
{
    int result = 1;

    std::pair<int, int> pair1;
    std::pair<int, int> pair2;

    std::cin >> pair1.first;
    std::cin >> pair1.second;
    std::cin >> pair2.first;
    std::cin >> pair2.second;;

    
    std::pair<int, int> interval;
    
    if(pair1.first >= pair2.first)
        interval.first = pair1.first;
    else if(pair1.first < pair2.first)
        interval.first = pair2.first;

    if(pair1.second <= pair2.second)
        interval.second= pair1.second;
    else if(pair1.second > pair2.second)
        interval.second = pair2.second;


    int left = (pair1.first < pair2.first && pair1.second > pair2.first) || 
        (pair2.first < pair1.first && pair2.second > pair1.first) ? 1 : 0;
    int right = (pair1.first < pair2.second && pair1.second > pair2.second ) || 
        (pair2.first < pair1.second && pair2.second > pair1.second) ? 1 : 0;
    

    if(interval.second - interval.first > 0) 
    {
        result = interval.second - interval.first + left + right;
    }
    else if(interval.second - interval.first == 0)
    {
        result = 2;
    }


    std::cout << result << '\n' << std::endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int tests;
    std::cin >> tests;

    for(int i = 0; i < tests; i++)
        solve();

    return 0;
}
