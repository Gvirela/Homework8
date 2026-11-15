#include <iostream>

void counting_function(){
    static int var{1};
    std::cout << "The number of function calls counting_function(): " << var++ << std::endl;
}
int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}