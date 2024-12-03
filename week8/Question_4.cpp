#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
class Solution
{
public:
    template <typename T>
    void BubbleSort(vector<T> &arr)
    {
        int size = arr.size();
        for (size_t i = 0; i < size; i++)
        {
            bool flag = true;
            for (size_t j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    flag = false;
                }
            }
            if (flag)
                break;
        }
    }
    template <typename T>
    void display(vector<T> arr)
    {
        for (T i : arr)
            cout << i << "\t";
        cout << endl;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Solution soln;
    vector<int> arr = {1, 5, 3, 2, 6, 7, 0, 8, 9};
    cout << "Unsorted :: ";
    soln.display(arr);
    soln.BubbleSort(arr);
    cout << "Sorted :: ";
    soln.display(arr);
    vector<char> arr1 = {'z', 'y', 'g', 'a', 'l', 'b', 'p', 's', 'm', 'k'};
    cout << "Unsorted :: ";
    soln.display(arr1);
    soln.BubbleSort(arr1);
    cout << "Sorted :: ";
    soln.display(arr1);
    vector<float> arr2 = {1.1, 1.5, 3.2, 2.3, 6.7, 7.9, 0., .8, .9};
    cout << "Unsorted :: ";
    soln.display(arr2);
    soln.BubbleSort(arr2);
    cout << "Sjorted :: ";
    soln.display(arr2);
    return EXIT_SUCCESS;
}