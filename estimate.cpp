#include <iostream>
#include <string>



int main(){
    int a = 0;
    std::cin >> a;
    for (int i = 0; i<a; ++i){
        std::string b;
        std::cin >> b;
        std::cout<<b.length()<<std::endl;
 
    }
    return 0;
}

