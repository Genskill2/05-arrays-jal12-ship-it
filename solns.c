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
	int large = arr[0], largest, least = arr[0];
	for(int i=0; i<size; i++)
	{
		if(large < arr[i])
			large = arr[i];
		if(least > arr[i])
			least = arr[i];
	}
	int count[large+1], res;
	
	for(int i=least; i<large+2; i++)
		count[i] = 0;
	for(int i=0; i<size; i++)
		count[arr[i]]++;
	largest = count[0];
	for(int j=0; j<size; j++)
		if(largest < count[arr[j]])
		{
			largest = count[arr[j]];
			res = arr[j];
		}
	return res;
}

    
// Question 5
int factors(int n,int a[])
{
	int count=0;
    	int i=2;
    	while(i<n)
    	{
        	if(n%i==0)
			if(isprime(i)==1)
			{	a[count]=i;
				count++;
                		n=n/i;
                		if(isprime(n)==1)
                		{
                			a[count++]=n;
                			break;
                		}
                		i=2;
			}
		else continue;
		else
		i++;
	}
	return count;
}
 
int isprime(int i)
{
	int flag=0;
	for(int j=2;j<i;j++)
	{
		if(i%j==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	    return 1;
	else
	    return 0;
}

