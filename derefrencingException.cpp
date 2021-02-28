#include "iostream"

int main()
{
    int *p = NULL;
    try
    {
        if (p == NULL)
            throw "Cannot dereference a null pointer\n";
        std::cout << *p << std::endl;
    }
    catch (const char *error)
    {
        std::cerr << error;
    }
    return 0;
}
