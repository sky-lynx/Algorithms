// finds a mssing number in an array of a range using the sum method
#include <iostream>

using namespace std;

int finder(int* arr, int n)
{
  int total = ((n + 1) * (n + 2)) / 2;

  for(int i = 0; i < n; i++)
  {
    total-=arr[i];
  }

  return total;
}

int main(void)
{
  int array[] = {1,2,3,5,6,7,8};
  int size = sizeof(array) / sizeof(*array);

  cout<<finder(array, size)<<'\n';

  return 0;
}
