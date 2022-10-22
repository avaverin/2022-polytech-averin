#include <cassert>

int search_position(int arr[], int n, int x) {
  for (auto i = 0; i < n - 1; ++i) {
    if (arr[i] >= x)
      return i;
  }
  return n;
}

int main() 
{
    int a1[4] = {1, 3, 5, 6};
    assert(search_position(a1, 4, 5) == 2);

    int a2[4] = {1, 3, 5, 6};
    assert(search_position(a2, 4, 7) == 4);
    
    return 0;
}