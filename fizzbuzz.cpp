#include <iostream>
int main()
{
    int c1=0, c2=0, c3=0;
    std::cin >> c1>>c2>>c3;
    for (int val = 1; val <= c3; ++val)
    {
        if (val % c1 == 0 and val % c2 == 0)
        {
            std::cout << "FizzBuzz"<<std::endl;
        }
        else if (val % c1 == 0){
            std::cout << "Fizz"<<std::endl;
        }  
        else if (val % c2 ==0){
            std::cout << "Buzz"<<std::endl;
        }
        else{
            std::cout << val <<std::endl;
        }
    }
    return 0;
}