// finds a msiisng number in an array of a range using xor methods
#include <iostream>

using namespace std;

int finder(int* arr, int n)
{
  int x1 = arr[0];
  int x2 = 1;

  for(int i = 1; i < n; i++)
  {
    x1 = x1^arr[i];
  }

  for(int i = 2; i <= n+1; i++)
  {
    x2 = x2^i;
  }

  return x1^x2;
}

int main(void)
{
  int array[] = {1,2,3,5,6,7,8};
  int size = sizeof(array) / sizeof(*array);

  cout<<finder(array, size)<<'\n';

  return 0;
}
