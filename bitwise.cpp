#include <iostream>
using namespace std;
// 1999
int reverse(int n)
{
    int ans = 0;
    while (n > 0)
    {
        int remainder = n % 10;
        ans = (ans * 10) + remainder;
        n = n / 10;
    }
    return ans;
}

int main()
{
    cout << reverse(1999);
    cout << (10 << 2);
    return 0;
}