#include "iostream"

int divide(int &a, int &b)
{
    if (b == 0)
    {
        throw "Hey Man!! Division By Zero is not possible.\n";
    }
    return (a / b);
}

int32_t main(int argc, char **argv)
{
    int a = 10, b = 0;
    int z = 0;
    try
    {
        z = divide(a, b);
    }
    catch (...)
    {
        std::cerr << "Error!!\n";
        // std::cerr << msg;
    }
    return 0;
}