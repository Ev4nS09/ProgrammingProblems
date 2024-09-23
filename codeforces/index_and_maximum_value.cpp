#include <climits>
#include <iostream>
#include <vector>
#include <tuple>
#include <string>

std::vector<int> problem(std::vector<int> array, std::vector<int> mods)
{


    return {0};
}

std::tuple<int, int> vector_max_index(std::vector<int> vector)
{
    int max = INT_MIN;
    int index = 0;

    for(int i = 0; i < vector.size(); i++)
    {
        if(vector.at(i) > max)
        {
            index = i;
            max = vector.at(i);
        }
    }

    return std::make_tuple(max, index);
}

int main()
{
    int tests = 0;
    std::cin >> tests;
    
    while(tests-- > 0)
    {
        int v_size = 0;
        int n_mods = 0;


        std::vector<int> v(v_size);
        std::vector<int> output(v_size);


        std::string line;
        std::getline(std::cin, line);
        std::cout << line.size() << std::endl;

        while(line.size()) {int x = 0; std::cin >> x; v.push_back(x);}

        std::tuple<int, int> tuple = vector_max_index(v); 
        int index = std::get<0>(tuple);
        int max = std::get<1>(tuple);

       // while(n_mods-- > 0)
        {
            
        }
    }
        
    return 0;
}
