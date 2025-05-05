#include <iostream>
using namespace std;

void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);
void pattern6(int n);
void pattern7(int n);
void pattern8(int n);
void pattern9(int n);
void pattern10(int n);

int main()
{
    // pattern1(5);
    // pattern2(4);
    // pattern3(4);
    // pattern4(3);
    // pattern5(4);
    // pattern6(4);
    // pattern7(4);
    // pattern8(4);
    // pattern9(5);
    pattern10(4);
    return 0;
}

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = i + 1;
        for (int j = 0; j <= i; j++)
        {
            cout << num;
            num = num - 1;
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
            ch = ch - 1;
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        char ch = 'A' + i;
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int space = 0; space <= n - i - 1; space++)
        {
            cout << " ";
        }

        // num set 1
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        // num set 2
        for (int k = i; k > 0; k--)
        {
            cout << k;
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 0; i < n; i++)
    {
        // star
        for (int star = 0; star <= i; star++)
        {
            cout << "*";
        }

        // spaces1
        for (int space = 1; space <= (n - i); space++)
        {
            cout << " ";
        }
        // space2
        for (int space = 1; space <= (n - i); space++)
        {
            cout << " ";
        }

        // star2
        for (int star = 0; star <= i; star++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int star = 0; star <= n - i; star++)
        {
            cout << "*";
        }

        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }
        for (int star = 0; star <= n - i; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}