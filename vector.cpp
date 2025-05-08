#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec;
    //  cout << vec[0];
    // vector<int> vec = {1, 2, 3, 4, 5};
    // vector<int> v2(3, 1);

    // cout << vec.size();
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    // vec.pop_back();
    // cout << vec.front() << endl;
    // cout << vec.back() << endl;
    // cout << vec.size();
    cout << vec.at(3);

    return 0;
}