#include <cassert>

int search_position(int arr[], int n, int x) 
{
  for (auto i = 0; i < n - 1; ++i) 
  {
    if (arr[i] >= x)
      return i;
  }
  return n;
}


int *insert(int arr[], int n, int x, int p) {
  for (auto i = n; i > p; i--)
    arr[i] = arr[i - 1];

  arr[p] = x;
  return arr;
}



int main() 
{
    int a1[4] = {1, 3, 5, 6}; //search_position example
    assert(search_position(a1, 4, 5) == 2);

    int a2[4] = {1, 3, 5, 6};
    assert(search_position(a2, 4, 7) == 4);


  
    int a0[3] ={1,5,8}; //// insert example
    int expected_r0[4] = {1,4,5,8};

    auto r0 = insert(a0, 3, 4, 1);
    for (auto i = 3; i > 1; i--)
        assert(r0[i] == expected_r0[i]);

    
  
