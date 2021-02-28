//In C++, try - catch blocks can be nested.Also, an exception can be
//re - thrown using “throw;”
#include <iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw 20;
        }
        catch (int n)
        {
            cout << "Handle Partially ";
            throw; // Re-throwing an exception
        }
    }
    catch (int n)
    {
        cout << "Handle remaining\n";
    }
    return 0;
}