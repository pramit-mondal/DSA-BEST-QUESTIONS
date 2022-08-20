// Remove duplicates using hash map ----
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> RemoveDuplicates(int arr[], int size)
{
    vector<int> output;
    unordered_map<int, bool> seen;
    for (int i = 0; i < size; i++)
    {
        if (seen.count(arr[i]) > 0)
        {
            continue;
        }
        seen[arr[i]] = true;
        output.push_back(arr[i]);
    }
    return output;
}
int main()
{
    int a[] = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> output = RemoveDuplicates(a, 8);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }
}