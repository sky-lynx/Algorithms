// return position index, else return -1
# include <iostream>

using namespace std;

int searcher(int* arr, int key, int l, int r)
{
  int m;

  while(l != r)
  {
    m = (l + r) / 2;
    if(arr[m] == key)
      return m;
    else if(arr[m] > key)
      r = m-1;
    else
      l = m+1;
  }
  return -1;
}

int main(void)
{
  int array[] = {1,2,3,4,5,6,7};
  int number = 8;

  int lower = 0;
  int upper = sizeof(array) / sizeof(*array);

  cout<<searcher(array, number, lower, upper)<<'\n';
  return 0;
}
