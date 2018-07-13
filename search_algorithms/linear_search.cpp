#include <iostream>

using namespace std;

void searcher(int arr[], int key)
{
	int length = sizeof(arr);
	int pos;
	
	for(int i = 0; i < length; i++)
	{
		if(arr[i] == key)
		{
			pos = i;
			break;
		}
		else
		{
			continue;
		}
	}
	
	if(pos != 7)
	{
		cout<<"The number is present at position "<<pos+1<<".";
	}
	else
	{
		cout<<"The number is not present.";
	}
}

int main()
{
	int array[] = {1, 2, 3, 4, 5, 6, 7};
	searcher(array, 4);
	return 0;
}
