#include <iostream>

using namespace std;

void merge(int array[], int left, int mid, int right)
{

	int temp1[mid-left+1];
	int temp2[right-mid];
	int index_array = left;

	for(int i = 0; i < mid-left+1; i++)
		temp1[i] = array[index_array++];

	for(int i = 0; i < right - mid; i++)
		temp2[i] = array[index_array++];

	int index_temp1 = 0,index_temp2 = 0;
	index_array = left;

	while(index_temp1 <= mid - left && index_temp2 < right - mid)	{

		if(temp1[index_temp1] < temp2[index_temp2]) 	{

			array[index_array] = temp1[index_temp1];
			index_temp1++;
		}
		else	{

			array[index_array] = temp2[index_temp2];
			index_temp2++;
		}
		index_array++;
	}

	while(index_temp1 <= mid - left)	{

		array[index_array] = temp1[index_temp1];
		index_array++;
		index_temp1++;
	}

	while(index_temp2 < right - mid)	{

		array[index_array] = temp2[index_temp2];
		index_array++;
		index_temp2++;
	}
}

void merge_sort(int* array,int left,int right)	{

	int mid = (right+left)/2;
	if(left < right) 	{

		merge_sort(array,left,mid);
		merge_sort(array,mid+1,right);
		merge(array,left,mid,right);
	}
}

int main() {

	int array[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int n = sizeof(array)/sizeof(array[0]);

	merge_sort(array, 0, n-1);

	cout << n << endl;

	for(int i = 0; i < n; i++)
		cout << array[i] << " ";

	return 0;
}
