/*Name: Chaya Shiv,
Roll No: 2010993007,
Set Number: Test 04
Question Number: Two */
#include<iostream>
using namespace std;

int count(int arr[],int i,int n)
{
	int c=1;
	int val=arr[i];
	for(int j=0;j<n;j++)
	{
		if((i!=j) && (val==arr[j]))
		{
			c++;
			return c;
		}
		
	}
	
}
int minimum_index(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int count_times=count(arr,i,n);
		if(count_times==2)
		{   
			return i;
		}
		
		
	}
	return -1;
	
}

int main()
{
	
	int n;
	int val;
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter values into the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		arr[i]=val;
		
	}
	int index=minimum_index(arr,n);
	if(index==-1)
	{
		cout<<"Invalid Input"<<endl;
	}
	else
	{
		cout<<"The minimum index of the repeating element is "<< index<<endl;
	}
	
	return 0;
}