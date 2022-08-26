/*Name: Chaya Shiv,
Roll No: 2010993007,
Set Number: Test 04
Question Number: One */

#include<iostream>
using namespace std;

int check_boolean(int arr[],int n)
{   
   
	for(int i=0;i<n-1;i++)
	{   
	    int n=arr[i];
	    int n1=arr[i+1];
	    int sub=(n1-n);
		if(sub!=1)
		{
			return 0;
		}
		
	}
	return 1;
	
}
void sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	int check= check_boolean(arr,n);
	if(check==0)
	{
		cout<<"The array does not contain consecutive integers"<<endl;
	}
	else
	{
		cout<<"The array contains consecutive integer from "<<arr[0]<<"to "<<arr[n-1];
	}
	
    
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
	sort(arr,n);
	return 0;
}