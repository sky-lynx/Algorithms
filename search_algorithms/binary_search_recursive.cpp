// returns index position, else returns -1
#include <iostream>

using namespace std;

int searcher(int* arr, int key, int l, int r)
{
  int m = (l + r) / 2;

  if (l != r)
  {
    if(arr[m] == key)
      return m;
    else if(arr[m] > key)
      return searcher(arr, key, l, m - 1);
    else
      return searcher(arr, key, m + 1, r);
  }
  else
    return -1;
}

int main(void)
{
  int array[] = {1,2,3,4,5,6,7};
  int number = 6;

  int lower = 0;
  int upper = sizeof(array)/sizeof(int) - 1;

  cout<<searcher(array, number, lower, upper)<<'\n';
  return 0;
}
