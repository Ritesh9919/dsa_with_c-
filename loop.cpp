#include <iostream>
using namespace std;
// Q1 calculate sum of number 1 to n which is divisble by 3
//  Q2 Calculate the factorial of n

int main()
{
    int n;
    int sum = 0;
    int fact = 1;
    cout << "Enter the number n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << sum << endl;
    cout << fact << endl;
    return 0;
}