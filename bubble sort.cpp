#include<iostream>
using namespace std;
void bubbleSort(int arr[])
{
		
	cout<<"\n=================Sorted arrays================\n";
	int number;
	int temp;
	int *p = &number;
	for(int i =0 ; i<*p ; i++)
	{
		for(int  j= 0 ; j<number ; j++)
		{
			if(arr[i]<arr[j])
			{
							arr[j] = temp;
			}
			
		}
	}
	
	for(int j =0 ; j<*p ; j++)
	{
		cout<<arr[j]<<" "; 
	}	
}
int main()
{
	int number;
	int *p = &number;
	int temp = 0; 
	cout<<"Enter the size of the number: ";
	cin>>*p;
	
	int arr[*p];
	
	for(int i =0 ; i<*p; i++)
	{
		cout<<"Enter "<<i+1<<" number"<<" ";
		cin>>arr[i];
	}
	// sorting in larger to smaller
	
	bubbleSort(arr);
         return 0;
}

