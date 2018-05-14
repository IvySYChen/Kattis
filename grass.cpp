#include <iostream>
#include <iomanip>

int main()
{
    double c = 0, total_cost = 0;
    int num = 0;
    std::cin >> c >>num;
    for (int val = 1; val <=num; ++val)
    {
        double l = 0, w = 0;
        std::cin >> l >> w;
        total_cost += l*w;
    }
    total_cost = total_cost * c;
    std::cout << std::fixed;
    std::cout << std::setprecision(7);
    std::cout << total_cost <<std::endl;
    return 0;
}