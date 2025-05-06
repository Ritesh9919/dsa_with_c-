#include <iostream>
using namespace std;
#include <cmath>

int decimalToBinary(int n)
{
    long ans = 0;
    int place = 0;
    while (n > 0)
    {
        int remainder = n % 2;
        ans = ans + (remainder * (long)pow(10, place));
        n = n / 2;
        place++;
    }
    return ans;
}

int binaryToDecimal(int n)
{
    int ans = 0;
    int place = 0;

    while (n > 0)
    {
        int remainder = n % 10;
        ans = ans + (remainder * pow(2, place));
        place++;
        n = n / 10;
    }
    return ans;
}

int main()
{
    // cout << decimalToBinary(10);
    cout << binaryToDecimal(1010);
    return 0;
}