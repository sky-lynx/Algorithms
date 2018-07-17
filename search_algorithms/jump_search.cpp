// return position index, else returns -1
#include <iostream>
#include <cmath>

using namespace std;

int seacher(int* arr, int key, int n)
{
  int step = sqrt(n);
  int prev;

  while(arr[min(step, n) - 1] < key)
  {
    prev = step;
    step += sqrt(n);
    if(prev >= n)
      return -1;
  }

  while(arr[prev] < key)
  {
    prev++;
    if(prev == min(step, n))
      return -1;
  }

  if(arr[prev] == key)
    return prev;

  return -1;
}

int main(void)
{
  int array[] = {1,2,3,4,5,6,7};
  int number = 7;
  int size = sizeof(array) / sizeof(*array);

  cout<<seacher(array, number, size)<<'\n';

  return 0;
}
