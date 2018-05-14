#include <iostream>
int main()
{
    int num = 0;
    std::cin >> num;
    for (int val = 1; val<=num; ++val)
    {
        double i1 = 0, i2 = 0, i3 = 0, pos = 0;
        std::cin >> i1>>i2>>i3;
  
        if (i1+i2 == i3 or i1 * i2 == i3 or i1/i2 == i3 or i2/i1 == i3 or i1-i2 == i3 or i2-i1 == i3)
        {
            pos = 1;
        }
       

        if (pos == 1)
        {
            std::cout << "Possible" <<std::endl;
        
        }
        else {
            std::cout << "Impossible" <<std::endl;
        }

    }
    return 0;
}