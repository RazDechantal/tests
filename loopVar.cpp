#include <iostream>
#include <vector>

int main()
{
    std::vector<int> int_list;
    int_list.push_back(1);
    int_list.push_back(2);
    int_list.push_back(3);

    for (int x : int_list)
    {
        x = 99;
    }

    for (int x : int_list)
    {
        std::cout << "This item has value:" << x << std::endl;
    }

    return 0;
}