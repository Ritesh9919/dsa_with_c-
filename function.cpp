#include <iostream>
#include <cmath>
using namespace std;
bool checkPrime(int n)

{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

void printPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (checkPrime(i))
        {
            cout << i << " ";
        }
    }
}

// calculate nth fibonacci
int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    // cout << checkPrime(1);
    // 2 3 4 5 6 7 8 9 10
    // printPrime(7);
    cout << fibonacci(5);

    return 0;
}