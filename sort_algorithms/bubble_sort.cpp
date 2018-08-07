// uses bubble sort to sort an array and then print the array
#include <iostream>

using namespace std;

void swap(int* ar, int i, int j)
{
	int temp = ar[i];
	ar[i] = ar[j];
	ar[j] = temp;
}

void sort(int* arr, int n)
{
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-i-1; j++)
		{
			if(arr[j] > arr[j + 1])
				swap(arr, j, j + 1);
		}
	}
}

void print(int* a, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<a[i]<<'\n';
	}
}

int main(void)
{
	int array[] = {2,4,3,8,5,1,9,7,6};
	int size = sizeof(array)/sizeof(*array);
	
	sort(array, size);
	print(array, size);
	
	return 0;
}
