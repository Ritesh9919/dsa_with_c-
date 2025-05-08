#include <iostream>
#include <climits>
using namespace std;

int sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int productOfArray(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}

// TODO
void swapMinAndMaxNumberOfArray(int arr[], int size)
{
    int minIndex = 0;
    int maxIndex = 0;
    // to get min num index
    for (int i = 0; i < size; i++)
    {
        if (arr[minIndex] > arr[i])
        {
            minIndex = i;
        }
        if (arr[maxIndex] < arr[i])
        {
            maxIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);
}

// 1,2,3,2,5,1
// TODO
void printUniqueNumInArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == INT_MIN)
        {
            continue;
        }
        bool isUnique = true;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = INT_MIN;
                isUnique = false;
            }
        }
        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }
}

// TODO
void printInterSectionOfTwoArray(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
}

int linearSearch(int arr[], int target, int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 5};
    // int arr2[] = {1, 2, 3, 4, 2};
    // printInterSectionOfTwoArray(arr1, arr2, 4, 5);
    // printUniqueNumInArray(arr1, 6);
    swapMinAndMaxNumberOfArray(arr1, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}