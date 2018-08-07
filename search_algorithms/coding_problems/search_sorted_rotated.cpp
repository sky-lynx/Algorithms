// searches an element in an array which is sorted and then rotated
#include <iostream>

using namespace std;

int binary_search(int* arr, int l, int r, int key)
{
  int m;
  while(l != r)
  {
    m = (l + r) / 2;

    if(arr[m] == key)
      return m;
    else if(arr[m] > key)
      r = m - 1;
    else
      l = m + 1;
  }

  return -1;
}

int pivot_search(int* arr, int l, int r)
{
  if(l < r)
    return -1;
  if(l == r)
    return l;

  int m = (l+r)/2;
  if(m < r && arr[m] > arr[m+1])
    return m;
  if(m > l && arr[m] < arr[m-1])
    return m-1;
  if(arr[l] >= arr[m])
    return pivot_search(arr, l, m-1);
  return pivot_search(arr, m+1, r);
}

int pivoted_binary(int* arr, int l, int r, int key)
{
  int pivot = pivot_search(arr, l, r);

  if(pivot == -1)
    return binary_search(arr, l, r, key);

  if(arr[pivot] == key)
    return pivot;
  if(arr[0] <= key)
    return binary_search(arr, l, pivot-1, key);

  return binary_search(arr, pivot+1, r, key);
}

int main(void)
{
  int array[] = {4,5,6,7,8,1,2,3};
  int left = 0;
  int right = (sizeof(array) / sizeof(*array)) - 1;

  cout<<pivoted_binary(array, left, right, 7)<<'\n';

  return 0;
}
