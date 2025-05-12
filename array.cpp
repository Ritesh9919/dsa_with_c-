#include <iostream>
#include <vector>
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

void printSubArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << " ";
        }
        cout << endl;
    }
}

int maxSubArraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

vector<int> pairSum1(vector<int> arr, int target)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}

vector<int> pairSum2(vector<int> arr, int target)
{
    vector<int> ans;
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int sum = arr[start] + arr[end];
        if (sum < target)
        {
            start++;
        }
        else if (sum > target)
        {
            end--;
        }
        else
        {
            ans.push_back(start);
            ans.push_back(end);
        }
    }
    return ans;
}

int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    // printSubArray(arr, 7);
    cout << maxSubArraySum(arr, 7);

    return 0;
}