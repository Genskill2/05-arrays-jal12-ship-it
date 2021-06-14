/* Enter your solutions in this file */
#include <stdio.h>

int max(int A[], int n)
{
	int largest;
	largest = A[0];
	for(int i=0; i<n; i++)
	{
		if(largest < A[i])
			largest = A[i];
	}
	return largest;
}

// Question 2
int min(int arr[], int size)
{
	int smallest = arr[0];
	for(int i=0; i<size; i++)
		if(smallest > arr[i])
			smallest = arr[i];
	
	return smallest;
}

// Question 3
float average(int A[], int n)
{
	int sum = 0;
	float avg;
	for(int i=0; i<n; i++)
		sum += A[i];
	avg = sum/n;
	return avg;
}

// Question 4
int mode(int arr[], int size)
{
	int large = max(arr, size), largest;
	int count[large+1];
	count = 0;
	for(int i=0; i<size; i++)
		count[arr[i]]++;
	largest = count[0];
	for(int j=0; j<large; j++)
		if(largest < count[j])
		{
			largest = count[j];
			res = j;
		}
	return res;
}
