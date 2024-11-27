#include <bits/stdc++.h>

#define my_pair std::pair<std::string, int> 

bool f(my_pair pair1, my_pair pair2)
{
    if(pair1.second == pair2.second)
    {
        return true;
    }

    return pair1.second < pair2.second;
}

void solve()
{
    std::priority_queue<my_pair, std::vector<my_pair>, std::function<bool(my_pair, my_pair)>> pq(f);

    int n; std::cin >> n;
    int hv = -1;

    for(int i = 0; i < n; i++)
    {
        my_pair p;
        std::cin >> p.first;
        std::cin >> p.second;
        p.second *= 10;
        

        int max = -1;
        int min = 11;
        for(int j = 0; j < 6; j++)
        {
            int current; std::cin >> current;

            if(current > max)
                max = current;
            if(current < min)
                min = current;

            p.second += current;
        }

        p.second -= max;
        p.second -= min;

        if(p.second > hv)
            hv = p.second;

        pq.push(p);
    }

    int shv;

    for(int i = 0; i < n && i < 1000 && shv != -1; i++)
    {
        if(pq.top().second < hv)
        {
            shv = pq.top().second;
            hv = -1;
        }

        if(pq.top().second < shv)
            break;
            
        std::cout << pq.top().first << " " << pq.top().second << '\n';
        pq.pop();
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    solve();

}

