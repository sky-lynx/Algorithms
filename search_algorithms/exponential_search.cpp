// returns position index, else returns -1
#include <iostream>

using namespace std;

int binarysearch(int*, int, int ,int);

int searcher(int* arr, int key, int l, int r)
{
  int lo = 1;

  if(arr[0] == key)
    return 0;

  while(lo < r && arr[lo] < key)
    lo *= 2;

  binarysearch(arr, key, lo/2, r);
}

int binarysearch(int* arr, int key, int l, int r)
{
  int m;

  while( l != r)
  {
    m = (l + r) / 2;
    if(arr[m] == key)
      return m;
    else if(arr[m] < key)
      l = m + 1;
    else
      r = m - 1;
  }

  return -1;
}

int main()
{
  int array[] = {1,2,3,4,5,6,7};
  int key = 8;

  int l = 0;
  int r = sizeof(array) / sizeof(*array);

  cout<<searcher(array, key, l, r)<<'\n';

  return 0;
}
