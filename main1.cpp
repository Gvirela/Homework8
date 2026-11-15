#include <iostream>

namespace Math{
    namespace sum{
        int calc(int x, int y){
            return x + y;
        }
    }
    namespace diff{
        int calc(int x, int y){
            return x - y;
        }
    }
    namespace multiplication{
        int calc(int x, int y){
            return x * y;
        }
    }
    namespace division{
        int calc(int x, int y){
            return x / y;
        }
    }
}
int main(int argc, char** argv)
{
    int x{ 6 }, y{ 9 };
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "Sum: " << Math::sum::calc(x, y) << std::endl;
    std::cout << "Difference: " << Math::diff::calc(x, y) << std::endl;
    std::cout << "Multiplication: " << Math::multiplication::calc(x, y) << std::endl;
    std::cout << "Division: " << Math::division::calc(x, y) << std::endl;
}