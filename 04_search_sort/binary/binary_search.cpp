#include <iostream>

using namespace std;

int binary_search(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}


int main()
{
    int arr[5] = { 2, 3, 4, 10, 40 };
    int x = 40;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = binary_search(arr, 0, n - 1, x); 
    if (result == -1) 
    {   
        std::cout << "Element is not present in array" << std::endl;
    }
    else
    {
        std::cout << "Element is present at index " << result << std::endl;
    }
    return 0;
}