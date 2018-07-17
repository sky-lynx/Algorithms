// returns position index, else returns -1
#include <iostream>

using namespace std;

int searcher(int* arr, int key, int lo, int hi)
{
  int pos;

  while((lo <= hi) && (key <= arr[hi]) && (key >= arr[lo]))
  {
    pos = ((key - arr[lo]) * (hi - lo)) / (arr[hi] - arr[lo]);
    
    if(arr[pos] == key)
      return pos;
    else if(key < arr[pos])
      hi = pos - 1;
    else if(key > arr[pos])
      lo = pos + 1;
  }

  return -1;
}

int main(void)
{
  int array[] = {1,2,3,4,5,6,7};
  int number  = 3;

  int low = 0;
  int high = (sizeof(array) / sizeof(int)) - 1;

  cout<<searcher(array, number, low, high)<<'\n';
  return 0;
}
