#include <iostream>

using namespace std;

int linear_search(int arr[], int n, int x, int result[])
{
    int b = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
        {
            result[b] = i;
            ++b;
        }
    }
    return b;
}
int main()
{
    int arr[5] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[n];
    
    for (int i = 0; i < n; ++i)
    {
        result[i] = 0;
    }
    std::cout << "Count: " << linear_search(arr, n, 40, result) << std::endl << "Results Indexes : " << endl;
    for (int i = 0; i < n; ++i)
    {
        std::cout << result[i] << std::endl;
    }
}