// uses selection sort to sort an array and then prints it
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
	int min_idx;
	
	for(int i = 0; i < n-1; i++)
	{
		min_idx = i;
		for(int j = i+1; j < n; j++)
		{
			if(arr[min_idx] > arr[j])
				min_idx = j;
		}
		swap(arr, i, min_idx);
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
	int array[] = {4,3,7,5,1,2,8,9,6};
	int size = sizeof(array)/sizeof(*array);
	
	sort(array, size);
	print(array, size);
	
	return 0;
}
