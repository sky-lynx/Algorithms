// returns position index, else returns -1
#include <iostream>

using namespace std;

int searcher(int* arr, int key)
{
	int length = sizeof(arr);

	for(int i = 0; i < length; i++)
	{
		if(arr[i] == key)
		{
			return i;
		}
	}

	return -1;
}

int main(void)
{
	int array[] = {1, 2, 3, 4, 5, 6, 7};
	cout<<searcher(array, 6)<<'\n';
	return 0;
}
